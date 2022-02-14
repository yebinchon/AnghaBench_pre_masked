
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clk_hw {int dummy; } ;
struct TYPE_2__ {int regmap; } ;
struct clk_alpha_pll_postdiv {TYPE_1__ clkr; } ;


 int FUNC_0 (unsigned long,unsigned long) ;
 int FUNC_1 (struct clk_alpha_pll_postdiv*) ;
 int VAR_0 ;
 int FUNC_2 (struct clk_alpha_pll_postdiv*) ;
 int FUNC_3 (int ,int ,int,int) ;
 struct clk_alpha_pll_postdiv* FUNC_4 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_5(struct clk_hw *VAR_1, unsigned long VAR_2,
       unsigned long VAR_3)
{
 struct clk_alpha_pll_postdiv *VAR_4 = FUNC_4(VAR_1);
 int VAR_5;


 VAR_5 = FUNC_0(VAR_3, VAR_2) - 1;

 return FUNC_3(VAR_4->clkr.regmap, FUNC_2(VAR_4),
      FUNC_1(VAR_4) << VAR_0,
      VAR_5 << VAR_0);
}
