
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline int FUNC_0(unsigned char VAR_0)
{
 register unsigned long VAR_1 asm("0") = (unsigned long) VAR_0 | 0x100;
 int VAR_2;

 asm volatile(

  "	plo	0,0,0,0(0)\n"
  "	ipm	%0\n"
  "	srl	%0,28\n"
  : "=d" (VAR_2)
  : "d" (VAR_1)
  : "cc");
 return VAR_2 == 0;
}
