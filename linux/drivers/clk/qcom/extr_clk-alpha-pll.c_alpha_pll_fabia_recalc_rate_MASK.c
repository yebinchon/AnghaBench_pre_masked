
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct clk_hw {int dummy; } ;
struct TYPE_2__ {int regmap; } ;
struct clk_alpha_pll {TYPE_1__ clkr; } ;


 int FUNC_0 (struct clk_alpha_pll*) ;
 int FUNC_1 (struct clk_alpha_pll*) ;
 unsigned long FUNC_2 (unsigned long,int ,int ,int ) ;
 int FUNC_3 (struct clk_alpha_pll*) ;
 int FUNC_4 (int ,int ,int *) ;
 struct clk_alpha_pll* FUNC_5 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_6(struct clk_hw *VAR_0,
      unsigned long VAR_1)
{
 struct clk_alpha_pll *VAR_2 = FUNC_5(VAR_0);
 u32 VAR_3, VAR_4, VAR_5 = FUNC_3(VAR_2);

 FUNC_4(VAR_2->clkr.regmap, FUNC_1(VAR_2), &VAR_3);
 FUNC_4(VAR_2->clkr.regmap, FUNC_0(VAR_2), &VAR_4);

 return FUNC_2(VAR_1, VAR_3, VAR_4, VAR_5);
}
