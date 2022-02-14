
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clk_hw {int dummy; } ;
struct TYPE_2__ {int regmap; } ;
struct clk_alpha_pll {TYPE_1__ clkr; } ;


 struct clk_alpha_pll* FUNC_0 (struct clk_hw*) ;
 int FUNC_1 (struct clk_alpha_pll*,int ) ;

__attribute__((used)) static int FUNC_2(struct clk_hw *VAR_0)
{
 struct clk_alpha_pll *VAR_1 = FUNC_0(VAR_0);

 return FUNC_1(VAR_1, VAR_1->clkr.regmap);
}
