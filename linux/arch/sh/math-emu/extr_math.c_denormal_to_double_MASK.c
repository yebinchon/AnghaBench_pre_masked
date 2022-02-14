
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_fpu_soft_struct {unsigned long fpul; unsigned long* fp_regs; } ;



__attribute__((used)) static void FUNC_0(struct sh_fpu_soft_struct *VAR_0, int VAR_1)
{
 unsigned long VAR_2, VAR_3;
 unsigned long VAR_4 = VAR_0->fpul;
 int VAR_5 = 1023 - 126;

 if (VAR_4 != 0 && (VAR_4 & 0x7f800000) == 0) {
  VAR_2 = (VAR_4 & 0x80000000);
  while ((VAR_4 & 0x00800000) == 0) {
   VAR_4 <<= 1;
   VAR_5--;
  }
  VAR_4 &= 0x007fffff;
  VAR_2 |= (VAR_5 << 20) | (VAR_4 >> 3);
  VAR_3 = VAR_4 << 29;

  VAR_0->fp_regs[VAR_1] = VAR_2;
  VAR_0->fp_regs[VAR_1+1] = VAR_3;
 }
}
