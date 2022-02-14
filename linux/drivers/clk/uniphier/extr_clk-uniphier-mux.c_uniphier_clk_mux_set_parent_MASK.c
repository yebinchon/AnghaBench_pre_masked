
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct uniphier_clk_mux {int * vals; int * masks; int reg; int regmap; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (int ,int ,int ,int ) ;
 struct uniphier_clk_mux* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_2(struct clk_hw *VAR_0, u8 VAR_1)
{
 struct uniphier_clk_mux *VAR_2 = FUNC_1(VAR_0);

 return FUNC_0(VAR_2->regmap, VAR_2->reg, VAR_2->masks[VAR_1],
     VAR_2->vals[VAR_1]);
}
