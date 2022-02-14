
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pm8xxx_vib {unsigned int reg_vib_drv; unsigned int level; int regmap; struct pm8xxx_regs* regs; } ;
struct pm8xxx_regs {unsigned int drv_shift; unsigned int drv_mask; scalar_t__ enable_mask; int enable_addr; int drv_addr; } ;


 int FUNC_0 (int ,int ,scalar_t__,unsigned int) ;
 int FUNC_1 (int ,int ,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct pm8xxx_vib *VAR_0, bool VAR_1)
{
 int VAR_2;
 unsigned int VAR_3 = VAR_0->reg_vib_drv;
 const struct pm8xxx_regs *VAR_4 = VAR_0->regs;

 if (VAR_1)
  VAR_3 |= (VAR_0->level << VAR_4->drv_shift) & VAR_4->drv_mask;
 else
  VAR_3 &= ~VAR_4->drv_mask;

 VAR_2 = FUNC_1(VAR_0->regmap, VAR_4->drv_addr, VAR_3);
 if (VAR_2 < 0)
  return VAR_2;

 VAR_0->reg_vib_drv = VAR_3;

 if (VAR_4->enable_mask)
  VAR_2 = FUNC_0(VAR_0->regmap, VAR_4->enable_addr,
     VAR_1 ? VAR_4->enable_mask : 0, VAR_3);

 return VAR_2;
}
