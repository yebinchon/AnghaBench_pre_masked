
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_regmap {unsigned int enable_mask; int enable_reg; int regmap; scalar_t__ enable_is_inverted; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (int ,int ,unsigned int,unsigned int) ;
 struct clk_regmap* FUNC_1 (struct clk_hw*) ;

void FUNC_2(struct clk_hw *VAR_0)
{
 struct clk_regmap *VAR_1 = FUNC_1(VAR_0);
 unsigned int VAR_2;

 if (VAR_1->enable_is_inverted)
  VAR_2 = VAR_1->enable_mask;
 else
  VAR_2 = 0;

 FUNC_0(VAR_1->regmap, VAR_1->enable_reg, VAR_1->enable_mask,
      VAR_2);
}
