
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sprd_clk_common {scalar_t__ reg; int regmap; } ;
struct sprd_pll {int regs_num; struct sprd_clk_common common; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,scalar_t__,unsigned int*) ;

__attribute__((used)) static inline unsigned int
FUNC_2(const struct sprd_pll *VAR_0, u8 VAR_1)
{
 const struct sprd_clk_common *VAR_2 = &VAR_0->common;
 unsigned int VAR_3 = 0;

 if (FUNC_0(VAR_1 >= VAR_0->regs_num))
  return 0;

 FUNC_1(VAR_2->regmap, VAR_2->reg + VAR_1 * 4, &VAR_3);

 return VAR_3;
}
