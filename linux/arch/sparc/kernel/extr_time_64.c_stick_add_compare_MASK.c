
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;

__attribute__((used)) static int FUNC_0(unsigned long VAR_1)
{
 unsigned long VAR_2, VAR_3;

 __asm__ __volatile__("rd	%%asr24, %0"
        : "=r" (VAR_2));
 VAR_2 &= ~VAR_0;

 __asm__ __volatile__("wr	%0, 0, %%asr25"
        :
        : "r" (VAR_2 + VAR_1));

 __asm__ __volatile__("rd	%%asr24, %0"
        : "=r" (VAR_3));
 VAR_3 &= ~VAR_0;

 return ((long)(VAR_3 - (VAR_2+VAR_1))) > 0L;
}
