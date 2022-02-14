
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct regmap {int dummy; } ;
struct clk_main_osc {struct regmap* regmap; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct regmap*,int ,int*) ;
 int FUNC_1 (struct regmap*,int ,int) ;
 struct clk_main_osc* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static void FUNC_3(struct clk_hw *VAR_4)
{
 struct clk_main_osc *VAR_5 = FUNC_2(VAR_4);
 struct regmap *VAR_6 = VAR_5->regmap;
 u32 VAR_7;

 FUNC_0(VAR_6, VAR_0, &VAR_7);
 if (VAR_7 & VAR_3)
  return;

 if (!(VAR_7 & VAR_2))
  return;

 VAR_7 &= ~(VAR_1 | VAR_2);
 FUNC_1(VAR_6, VAR_0, VAR_7 | VAR_1);
}
