
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vop_reg {int mask; int offset; int shift; scalar_t__ relaxed; scalar_t__ write_mask; } ;
struct vop {int* regsbak; scalar_t__ regs; int dev; } ;


 int FUNC_0 (int ,char*,char const*) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct vop *VAR_0, const struct vop_reg *VAR_1,
   uint32_t VAR_2, uint32_t VAR_3, uint32_t VAR_4,
   const char *VAR_5)
{
 int VAR_6, VAR_7, VAR_8;

 if (!VAR_1 || !VAR_1->mask) {
  FUNC_0(VAR_0->dev, "Warning: not support %s\n", VAR_5);
  return;
 }

 VAR_6 = VAR_1->offset + VAR_2;
 VAR_7 = VAR_1->mask & VAR_3;
 VAR_8 = VAR_1->shift;

 if (VAR_1->write_mask) {
  VAR_4 = ((VAR_4 << VAR_8) & 0xffff) | (VAR_7 << (VAR_8 + 16));
 } else {
  uint32_t VAR_9 = VAR_0->regsbak[VAR_6 >> 2];

  VAR_4 = (VAR_9 & ~(VAR_7 << VAR_8)) | ((VAR_4 & VAR_7) << VAR_8);
  VAR_0->regsbak[VAR_6 >> 2] = VAR_4;
 }

 if (VAR_1->relaxed)
  FUNC_2(VAR_4, VAR_0->regs + VAR_6);
 else
  FUNC_1(VAR_4, VAR_0->regs + VAR_6);
}
