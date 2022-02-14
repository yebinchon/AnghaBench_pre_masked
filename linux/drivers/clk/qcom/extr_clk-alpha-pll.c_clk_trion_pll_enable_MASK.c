
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
 int FUNC_2 (struct clk_alpha_pll*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct clk_hw*) ;
 int FUNC_4 (struct regmap*,int ,int*) ;
 int FUNC_5 (struct regmap*,int ,int ,int ) ;
 int FUNC_6 (struct regmap*,int ,int ) ;
 struct clk_alpha_pll* FUNC_7 (struct clk_hw*) ;
 int FUNC_8 (struct clk_alpha_pll*) ;
 int FUNC_9 (struct clk_alpha_pll*) ;

__attribute__((used)) static int FUNC_10(struct clk_hw *VAR_4)
{
 struct clk_alpha_pll *VAR_5 = FUNC_7(VAR_4);
 struct regmap *VAR_6 = VAR_5->clkr.regmap;
 u32 VAR_7;
 int VAR_8;

 VAR_8 = FUNC_4(VAR_6, FUNC_0(VAR_5), &VAR_7);
 if (VAR_8)
  return VAR_8;


 if (VAR_7 & VAR_1) {
  VAR_8 = FUNC_3(VAR_4);
  if (VAR_8)
   return VAR_8;
  return FUNC_8(VAR_5);
 }


 FUNC_6(VAR_6, FUNC_1(VAR_5), VAR_3);

 VAR_8 = FUNC_9(VAR_5);
 if (VAR_8)
  return VAR_8;


 VAR_8 = FUNC_5(VAR_6, FUNC_2(VAR_5),
     VAR_2, VAR_2);
 if (VAR_8)
  return VAR_8;


 return FUNC_5(VAR_6, FUNC_0(VAR_5),
     VAR_0, VAR_0);
}
