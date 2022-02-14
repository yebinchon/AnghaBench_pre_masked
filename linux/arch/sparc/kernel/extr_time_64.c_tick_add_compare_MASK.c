
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;

__attribute__((used)) static int FUNC_0(unsigned long VAR_1)
{
 unsigned long VAR_2, VAR_3, VAR_4;

 __asm__ __volatile__("rd	%%tick, %0"
        : "=r" (VAR_2));

 VAR_2 &= ~VAR_0;
 __asm__ __volatile__("ba,pt	%%xcc, 1f\n\t"
        " add	%1, %2, %0\n\t"
        ".align	64\n"
        "1:\n\t"
        "wr	%0, 0, %%tick_cmpr\n\t"
        "rd	%%tick_cmpr, %%g0\n\t"
        : "=r" (VAR_4)
        : "r" (VAR_2), "r" (VAR_1));

 __asm__ __volatile__("rd	%%tick, %0"
        : "=r" (VAR_3));
 VAR_3 &= ~VAR_0;

 return ((long)(VAR_3 - (VAR_2+VAR_1))) > 0L;
}
