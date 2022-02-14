
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline unsigned long FUNC_0(unsigned long VAR_0)
{
 unsigned long VAR_1;

 asm volatile(
  "	lra	%0,0(%1)\n"
  : "=d" (VAR_1) : "a" (VAR_0) : "cc");
 return VAR_1;
}
