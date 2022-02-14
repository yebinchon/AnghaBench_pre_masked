
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void FUNC_0(unsigned int *VAR_0, unsigned int *VAR_1, unsigned long VAR_2)
{
 unsigned long VAR_3, VAR_4;

 VAR_3 = (VAR_2 >> 32) & 0xffffffff;
 VAR_4 = (VAR_2 >> 0) & 0xffffffff;

 while (VAR_0 < VAR_1) {
  unsigned int *VAR_5 = (unsigned int *)(unsigned long)*VAR_0;

  VAR_5[0] = (VAR_5[0] & ~0x3fffff) | (VAR_3 >> 10);
  __asm__ __volatile__("flush	%0" : : "r" (VAR_5));

  VAR_5[1] = (VAR_5[1] & ~0x3fffff) | (VAR_4 >> 10);
  __asm__ __volatile__("flush	%0" : : "r" (VAR_5 + 1));

  VAR_5[2] = (VAR_5[2] & ~0x1fff) | (VAR_3 & 0x3ff);
  __asm__ __volatile__("flush	%0" : : "r" (VAR_5 + 2));

  VAR_5[3] = (VAR_5[3] & ~0x1fff) | (VAR_4 & 0x3ff);
  __asm__ __volatile__("flush	%0" : : "r" (VAR_5 + 3));

  VAR_0++;
 }
}
