
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct regmap {int dummy; } ;
struct clk_hw {int dummy; } ;
struct TYPE_2__ {struct regmap* regmap; } ;
struct clk_alpha_pll {TYPE_1__ clkr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct clk_alpha_pll*) ;
 int FUNC_1 (struct clk_alpha_pll*) ;
 int VAR_3 ;
 int FUNC_2 (struct clk_alpha_pll*) ;
 int FUNC_3 (struct clk_hw*) ;
 int FUNC_4 (struct regmap*,int ,int*) ;
 int FUNC_5 (struct regmap*,int ,int ,int ) ;
 int FUNC_6 (struct regmap*,int ,int ) ;
 struct clk_alpha_pll* FUNC_7 (struct clk_hw*) ;

__attribute__((used)) static void FUNC_8(struct clk_hw *VAR_4)
{
 int VAR_5;
 struct clk_alpha_pll *VAR_6 = FUNC_7(VAR_4);
 u32 VAR_7;
 struct regmap *VAR_8 = VAR_6->clkr.regmap;

 VAR_5 = FUNC_4(VAR_8, FUNC_0(VAR_6), &VAR_7);
 if (VAR_5)
  return;


 if (VAR_7 & VAR_2) {
  FUNC_3(VAR_4);
  return;
 }

 VAR_5 = FUNC_5(VAR_8, FUNC_0(VAR_6), VAR_3, 0);
 if (VAR_5)
  return;


 VAR_5 = FUNC_5(VAR_8, FUNC_2(VAR_6), VAR_1,
     0);
 if (VAR_5)
  return;


 FUNC_6(VAR_8, FUNC_1(VAR_6), VAR_0);
}
