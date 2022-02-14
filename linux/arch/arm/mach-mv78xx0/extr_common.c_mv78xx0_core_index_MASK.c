
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;



int FUNC_0(void)
{
 u32 VAR_0;




 __asm__("mrc p15, 1, %0, c15, c1, 0" : "=r" (VAR_0));

 return !!(VAR_0 & 0x00004000);
}
