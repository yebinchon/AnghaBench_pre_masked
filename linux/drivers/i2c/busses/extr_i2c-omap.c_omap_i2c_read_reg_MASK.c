
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct omap_i2c_dev {int* regs; int reg_shift; scalar_t__ base; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline u16 FUNC_1(struct omap_i2c_dev *VAR_0, int VAR_1)
{
 return FUNC_0(VAR_0->base +
    (VAR_0->regs[VAR_1] << VAR_0->reg_shift));
}
