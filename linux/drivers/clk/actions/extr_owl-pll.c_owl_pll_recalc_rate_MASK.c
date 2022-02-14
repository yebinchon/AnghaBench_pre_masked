
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u32 ;
struct owl_pll_hw {unsigned long shift; scalar_t__ width; unsigned long bfreq; int reg; scalar_t__ table; } ;
struct owl_clk_common {int regmap; } ;
struct owl_pll {struct owl_clk_common common; struct owl_pll_hw pll_hw; } ;
struct clk_hw {int dummy; } ;


 unsigned long FUNC_0 (scalar_t__,unsigned long) ;
 struct owl_pll* FUNC_1 (struct clk_hw*) ;
 unsigned long FUNC_2 (struct owl_pll_hw*) ;
 int FUNC_3 (int ,int ,unsigned long*) ;

__attribute__((used)) static unsigned long FUNC_4(struct clk_hw *VAR_0,
  unsigned long VAR_1)
{
 struct owl_pll *VAR_2 = FUNC_1(VAR_0);
 struct owl_pll_hw *VAR_3 = &VAR_2->pll_hw;
 const struct owl_clk_common *VAR_4 = &VAR_2->common;
 u32 VAR_5;

 if (VAR_3->table) {
  FUNC_3(VAR_4->regmap, VAR_3->reg, &VAR_5);

  VAR_5 = VAR_5 >> VAR_3->shift;
  VAR_5 &= FUNC_2(VAR_3);

  return FUNC_0(VAR_3->table, VAR_5);
 }


 if (VAR_3->width == 0)
  return VAR_3->bfreq;

 FUNC_3(VAR_4->regmap, VAR_3->reg, &VAR_5);

 VAR_5 = VAR_5 >> VAR_3->shift;
 VAR_5 &= FUNC_2(VAR_3);

 return VAR_3->bfreq * VAR_5;
}
