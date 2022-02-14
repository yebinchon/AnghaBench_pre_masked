
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
 int VAR_4 ;
 int FUNC_0 (struct regmap*) ;
 int FUNC_1 () ;
 int FUNC_2 (struct regmap*,int ,int*) ;
 int FUNC_3 (struct regmap*,int ,int) ;
 struct clk_main_osc* FUNC_4 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_5(struct clk_hw *VAR_5)
{
 struct clk_main_osc *VAR_6 = FUNC_4(VAR_5);
 struct regmap *VAR_7 = VAR_6->regmap;
 u32 VAR_8;

 FUNC_2(VAR_7, VAR_0, &VAR_8);
 VAR_8 &= ~VAR_4;

 if (VAR_8 & VAR_3)
  return 0;

 if (!(VAR_8 & VAR_2)) {
  VAR_8 |= VAR_2 | VAR_1;
  FUNC_3(VAR_7, VAR_0, VAR_8);
 }

 while (!FUNC_0(VAR_7))
  FUNC_1();

 return 0;
}
