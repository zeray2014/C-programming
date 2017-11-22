#include <stdio.h>
#include <stdlib.h>


int getMax(int ,int);
int findLCM(int, int);

int main(int argc, char * argv[])
{
    int a,b,max,lcm;

    printf("Enter 2 +ve numbers: ");
    scanf("%d %d",&a,&b);

    max=getMax(a,b);

    printf("Max of %d and %d = %d\n",a,b,max);

    lcm = findLCM(a,b);

    printf("LCM of %d and %d = %d",a,b,lcm);
    return 0;

}

int getMax(int a, int b)
{
    if(a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int findLCM(int a,int b)
{
    int lcmmax= getMax(a,b);

    while(1)
        if(lcmmax%a ==0 && lcmmax%b ==0)
        {
            break;

        }
        else
        {
            ++lcmmax;
        }
    return lcmmax;
}
