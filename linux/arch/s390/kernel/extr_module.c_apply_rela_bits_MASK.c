
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long Elf_Addr ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(Elf_Addr VAR_1, Elf_Addr VAR_2,
      int VAR_3, int VAR_4, int VAR_5)
{
 unsigned long VAR_6;
 long VAR_7, VAR_8;

 if (VAR_2 & ((1UL << VAR_5) - 1))
  return -VAR_0;
 if (VAR_3) {
  VAR_2 = (Elf_Addr)(((long) VAR_2) >> VAR_5);
  VAR_7 = -(1L << (VAR_4 - 1));
  VAR_8 = (1L << (VAR_4 - 1)) - 1;
  if ((long) VAR_2 < VAR_7 || (long) VAR_2 > VAR_8)
   return -VAR_0;
 } else {
  VAR_2 >>= VAR_5;
  VAR_6 = ((1UL << (VAR_4 - 1)) << 1) - 1;
  if ((unsigned long) VAR_2 > VAR_6)
   return -VAR_0;
 }

 if (VAR_4 == 8)
  *(unsigned char *) VAR_1 = VAR_2;
 else if (VAR_4 == 12)
  *(unsigned short *) VAR_1 = (VAR_2 & 0xfff) |
   (*(unsigned short *) VAR_1 & 0xf000);
 else if (VAR_4 == 16)
  *(unsigned short *) VAR_1 = VAR_2;
 else if (VAR_4 == 20)
  *(unsigned int *) VAR_1 = (VAR_2 & 0xfff) << 16 |
   (VAR_2 & 0xff000) >> 4 |
   (*(unsigned int *) VAR_1 & 0xf00000ff);
 else if (VAR_4 == 32)
  *(unsigned int *) VAR_1 = VAR_2;
 else if (VAR_4 == 64)
  *(unsigned long *) VAR_1 = VAR_2;
 return 0;
}
