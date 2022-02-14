
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;

void FUNC_0(void)
{
 if (VAR_0)
  __asm__ __volatile__ (
   "ldc %0, vbr"
   :
   : "r" (((unsigned long) VAR_0) - 0x100)
   : "memory"
  );
}
