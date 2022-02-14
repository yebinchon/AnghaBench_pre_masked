
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void FUNC_0(unsigned long VAR_0)
{
 __asm__ volatile (
  "0:\n"
  "mov r0, r0\n"
  "subs %0, %1, #1\n"
  "bge 0b\n"
  : "=r" (VAR_0)
  : "0" (VAR_0)
 );
}
