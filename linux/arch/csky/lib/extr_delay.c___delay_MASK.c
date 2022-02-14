
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
void FUNC_0(unsigned long VAR_0)
{
 asm volatile (
  "mov r0, r0\n"
  "1:declt %0\n"
  "bf	1b"
  : "=r"(VAR_0)
  : "0"(VAR_0));
}
