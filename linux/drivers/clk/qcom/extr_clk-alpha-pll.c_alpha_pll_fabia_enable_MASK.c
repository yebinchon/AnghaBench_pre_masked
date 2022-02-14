
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
 int VAR_4 ;
 int FUNC_2 (struct clk_alpha_pll*) ;
 int VAR_5 ;
 int FUNC_3 (struct clk_hw*) ;
 int FUNC_4 (struct regmap*,int ,int*) ;
 int FUNC_5 (struct regmap*,int ,int,int) ;
 int FUNC_6 (struct regmap*,int ,int) ;
 struct clk_alpha_pll* FUNC_7 (struct clk_hw*) ;
 int FUNC_8 (struct clk_alpha_pll*) ;
 int FUNC_9 (struct clk_alpha_pll*) ;

__attribute__((used)) static int FUNC_10(struct clk_hw *VAR_6)
{
 int VAR_7;
 struct clk_alpha_pll *VAR_8 = FUNC_7(VAR_6);
 u32 VAR_9, VAR_10;
 struct regmap *VAR_11 = VAR_8->clkr.regmap;

 VAR_7 = FUNC_4(VAR_11, FUNC_0(VAR_8), &VAR_9);
 if (VAR_7)
  return VAR_7;


 if (VAR_9 & VAR_5) {
  VAR_7 = FUNC_3(VAR_6);
  if (VAR_7)
   return VAR_7;
  return FUNC_8(VAR_8);
 }

 VAR_7 = FUNC_4(VAR_11, FUNC_1(VAR_8), &VAR_10);
 if (VAR_7)
  return VAR_7;


 if ((VAR_10 & VAR_0) && (VAR_9 & VAR_3))
  return 0;

 VAR_7 = FUNC_5(VAR_11, FUNC_0(VAR_8), VAR_3, 0);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_6(VAR_11, FUNC_1(VAR_8), VAR_1);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_5(VAR_11, FUNC_0(VAR_8), VAR_4,
     VAR_4);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_6(VAR_11, FUNC_1(VAR_8), VAR_0);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_9(VAR_8);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_5(VAR_11, FUNC_2(VAR_8),
     VAR_2, VAR_2);
 if (VAR_7)
  return VAR_7;

 return FUNC_5(VAR_11, FUNC_0(VAR_8), VAR_3,
     VAR_3);
}
