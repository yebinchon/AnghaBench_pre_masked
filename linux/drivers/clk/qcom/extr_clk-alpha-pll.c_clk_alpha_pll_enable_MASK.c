
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct clk_hw {int dummy; } ;
struct TYPE_2__ {int regmap; } ;
struct clk_alpha_pll {TYPE_1__ clkr; } ;


 int VAR_0 ;
 int FUNC_0 (struct clk_alpha_pll*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct clk_hw*) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ,int*) ;
 int FUNC_4 (int ,int ,int,int) ;
 struct clk_alpha_pll* FUNC_5 (struct clk_hw*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct clk_alpha_pll*) ;
 int FUNC_8 (struct clk_alpha_pll*) ;

__attribute__((used)) static int FUNC_9(struct clk_hw *VAR_4)
{
 int VAR_5;
 struct clk_alpha_pll *VAR_6 = FUNC_5(VAR_4);
 u32 VAR_7, VAR_8;

 VAR_8 = VAR_1 | VAR_2 | VAR_0;
 VAR_5 = FUNC_3(VAR_6->clkr.regmap, FUNC_0(VAR_6), &VAR_7);
 if (VAR_5)
  return VAR_5;


 if (VAR_7 & VAR_3) {
  VAR_5 = FUNC_1(VAR_4);
  if (VAR_5)
   return VAR_5;
  return FUNC_7(VAR_6);
 }


 if ((VAR_7 & VAR_8) == VAR_8)
  return 0;

 VAR_5 = FUNC_4(VAR_6->clkr.regmap, FUNC_0(VAR_6),
     VAR_0, VAR_0);
 if (VAR_5)
  return VAR_5;





 FUNC_2();
 FUNC_6(5);

 VAR_5 = FUNC_4(VAR_6->clkr.regmap, FUNC_0(VAR_6),
     VAR_2, VAR_2);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_8(VAR_6);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_4(VAR_6->clkr.regmap, FUNC_0(VAR_6),
     VAR_1, VAR_1);


 FUNC_2();
 return VAR_5;
}
