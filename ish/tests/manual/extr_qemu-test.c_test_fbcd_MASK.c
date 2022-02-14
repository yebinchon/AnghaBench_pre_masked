
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,double,unsigned short,unsigned short,unsigned short,unsigned short,unsigned short,double) ;

void FUNC_1(double VAR_0)
{
    unsigned short VAR_1[5];
    double VAR_2;

    asm("fbstp %0" : "=m" (VAR_1[0]) : "t" (VAR_0) : "st");
    asm("fbld %1" : "=t" (VAR_2) : "m" (VAR_1[0]));
    FUNC_0("a=%f bcd=%04x%04x%04x%04x%04x b=%f\n",
           VAR_0, VAR_1[4], VAR_1[3], VAR_1[2], VAR_1[1], VAR_1[0], VAR_2);
}
