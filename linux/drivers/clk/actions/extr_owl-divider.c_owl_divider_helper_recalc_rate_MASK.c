
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct owl_divider_hw {unsigned int shift; int width; int div_flags; int table; int reg; } ;
struct owl_clk_common {int hw; int regmap; } ;


 unsigned long FUNC_0 (int *,unsigned long,unsigned long,int ,int ,int) ;
 int FUNC_1 (int ,int ,unsigned int*) ;

unsigned long FUNC_2(struct owl_clk_common *VAR_0,
      const struct owl_divider_hw *VAR_1,
      unsigned long VAR_2)
{
 unsigned long VAR_3;
 unsigned int VAR_4;

 FUNC_1(VAR_0->regmap, VAR_1->reg, &VAR_4);
 VAR_3 = VAR_4 >> VAR_1->shift;
 VAR_3 &= (1 << VAR_1->width) - 1;

 return FUNC_0(&VAR_0->hw, VAR_2,
       VAR_3, VAR_1->table,
       VAR_1->div_flags,
       VAR_1->width);
}
