
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct owl_pll_hw {int bit_idx; int reg; } ;
struct owl_clk_common {int regmap; } ;
struct owl_pll {struct owl_clk_common common; struct owl_pll_hw pll_hw; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (int ) ;
 struct owl_pll* FUNC_1 (struct clk_hw*) ;
 int FUNC_2 (int ,int ,int*) ;

__attribute__((used)) static int FUNC_3(struct clk_hw *VAR_0)
{
 struct owl_pll *VAR_1 = FUNC_1(VAR_0);
 struct owl_pll_hw *VAR_2 = &VAR_1->pll_hw;
 const struct owl_clk_common *VAR_3 = &VAR_1->common;
 u32 VAR_4;

 FUNC_2(VAR_3->regmap, VAR_2->reg, &VAR_4);

 return !!(VAR_4 & FUNC_0(VAR_2->bit_idx));
}
