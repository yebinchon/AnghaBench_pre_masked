
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef unsigned int u32 ;
struct sprd_clk_common {int reg; int regmap; } ;
struct sprd_pll {int regs_num; struct sprd_clk_common common; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,unsigned int,unsigned int*) ;
 int FUNC_2 (int ,unsigned int,unsigned int) ;

__attribute__((used)) static inline void
FUNC_3(const struct sprd_pll *VAR_0, u8 VAR_1,
      u32 VAR_2, u32 VAR_3)
{
 const struct sprd_clk_common *VAR_4 = &VAR_0->common;
 unsigned int VAR_5, VAR_6;
 int VAR_7 = 0;

 if (FUNC_0(VAR_1 >= VAR_0->regs_num))
  return;

 VAR_5 = VAR_4->reg + VAR_1 * 4;
 VAR_7 = FUNC_1(VAR_4->regmap, VAR_5, &VAR_6);
 if (!VAR_7)
  FUNC_2(VAR_4->regmap, VAR_5, (VAR_6 & ~VAR_2) | VAR_3);
}
