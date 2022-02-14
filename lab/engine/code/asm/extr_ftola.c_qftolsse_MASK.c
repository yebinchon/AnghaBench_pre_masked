
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
long FUNC_0(float VAR_0)
{
  long VAR_1;

  __asm__ volatile
  (
    "cvttss2si %1, %0\n"
    : "=r" (VAR_1)
    : "x" (VAR_0)
  );

  return VAR_1;
}
