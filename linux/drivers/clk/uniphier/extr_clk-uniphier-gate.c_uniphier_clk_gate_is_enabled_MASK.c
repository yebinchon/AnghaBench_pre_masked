
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uniphier_clk_gate {int bit; int reg; int regmap; } ;
struct clk_hw {int dummy; } ;


 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ,int ,unsigned int*) ;
 struct uniphier_clk_gate* FUNC_3 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_4(struct clk_hw *VAR_0)
{
 struct uniphier_clk_gate *VAR_1 = FUNC_3(VAR_0);
 unsigned int VAR_2;

 if (FUNC_2(VAR_1->regmap, VAR_1->reg, &VAR_2) < 0)
  FUNC_1("is_enabled() may return wrong result\n");

 return !!(VAR_2 & FUNC_0(VAR_1->bit));
}
