
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(unsigned long VAR_0, u64 VAR_1)
{
 FUNC_0(VAR_0 != 0);





 __asm__ __volatile__("ba,pt	%%xcc, 99f\n\t"
        " nop\n\t"
        ".align	64\n"
     "99:wr	%0, 0x0, %%pic\n\t"
        "rd	%%pic, %%g0" : : "r" (VAR_1));
}
