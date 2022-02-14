
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_pll {int id; int regmap; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (int ,int ) ;
 struct clk_pll* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_2(struct clk_hw *VAR_0)
{
 struct clk_pll *VAR_1 = FUNC_1(VAR_0);

 return FUNC_0(VAR_1->regmap, VAR_1->id);
}
