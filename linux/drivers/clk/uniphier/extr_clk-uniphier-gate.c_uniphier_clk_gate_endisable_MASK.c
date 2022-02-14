
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uniphier_clk_gate {int bit; int reg; int regmap; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 struct uniphier_clk_gate* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_3(struct clk_hw *VAR_0, int VAR_1)
{
 struct uniphier_clk_gate *VAR_2 = FUNC_2(VAR_0);

 return FUNC_1(VAR_2->regmap, VAR_2->reg, FUNC_0(VAR_2->bit),
     VAR_1 ? FUNC_0(VAR_2->bit) : 0);
}
