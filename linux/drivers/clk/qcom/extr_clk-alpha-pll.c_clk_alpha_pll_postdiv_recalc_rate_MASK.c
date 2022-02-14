
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct clk_hw {int dummy; } ;
struct TYPE_2__ {int regmap; } ;
struct clk_alpha_pll_postdiv {TYPE_1__ clkr; } ;


 int FUNC_0 (struct clk_alpha_pll_postdiv*) ;
 int VAR_0 ;
 int FUNC_1 (struct clk_alpha_pll_postdiv*) ;
 unsigned long FUNC_2 (int) ;
 int FUNC_3 (int ,int ,int*) ;
 struct clk_alpha_pll_postdiv* FUNC_4 (struct clk_hw*) ;

__attribute__((used)) static unsigned long
FUNC_5(struct clk_hw *VAR_1, unsigned long VAR_2)
{
 struct clk_alpha_pll_postdiv *VAR_3 = FUNC_4(VAR_1);
 u32 VAR_4;

 FUNC_3(VAR_3->clkr.regmap, FUNC_1(VAR_3), &VAR_4);

 VAR_4 >>= VAR_0;
 VAR_4 &= FUNC_0(VAR_3);

 return VAR_2 >> FUNC_2(VAR_4);
}
