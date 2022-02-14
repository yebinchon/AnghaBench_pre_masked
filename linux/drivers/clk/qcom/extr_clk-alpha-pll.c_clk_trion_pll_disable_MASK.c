
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


 int FUNC_0 (struct clk_alpha_pll*) ;
 int FUNC_1 (struct clk_alpha_pll*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct clk_alpha_pll*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct clk_hw*) ;
 int FUNC_4 (struct regmap*,int ,int*) ;
 int FUNC_5 (struct regmap*,int ,int ,int ) ;
 int FUNC_6 (struct regmap*,int ,int ) ;
 struct clk_alpha_pll* FUNC_7 (struct clk_hw*) ;

__attribute__((used)) static void FUNC_8(struct clk_hw *VAR_5)
{
 struct clk_alpha_pll *VAR_6 = FUNC_7(VAR_5);
 struct regmap *VAR_7 = VAR_6->clkr.regmap;
 u32 VAR_8;
 int VAR_9;

 VAR_9 = FUNC_4(VAR_7, FUNC_0(VAR_6), &VAR_8);
 if (VAR_9)
  return;


 if (VAR_8 & VAR_2) {
  FUNC_3(VAR_5);
  return;
 }


 VAR_9 = FUNC_5(VAR_7, FUNC_0(VAR_6), VAR_0, 0);
 if (VAR_9)
  return;


 VAR_9 = FUNC_5(VAR_7, FUNC_2(VAR_6),
     VAR_3, 0);
 if (VAR_9)
  return;


 FUNC_6(VAR_7, FUNC_1(VAR_6), VAR_4);
 FUNC_5(VAR_7, FUNC_0(VAR_6), VAR_1, VAR_1);
}
