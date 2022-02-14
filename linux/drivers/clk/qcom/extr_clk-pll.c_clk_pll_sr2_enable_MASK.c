
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int regmap; } ;
struct clk_pll {int mode_reg; TYPE_1__ clkr; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 struct clk_pll* FUNC_2 (struct clk_hw*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct clk_pll*) ;

__attribute__((used)) static int FUNC_5(struct clk_hw *VAR_3)
{
 struct clk_pll *VAR_4 = FUNC_2(VAR_3);
 int VAR_5;
 u32 VAR_6;

 VAR_5 = FUNC_0(VAR_4->clkr.regmap, VAR_4->mode_reg, &VAR_6);
 if (VAR_5)
  return VAR_5;


 VAR_5 = FUNC_1(VAR_4->clkr.regmap, VAR_4->mode_reg, VAR_0,
     VAR_0);
 if (VAR_5)
  return VAR_5;





 FUNC_3(10);


 VAR_5 = FUNC_1(VAR_4->clkr.regmap, VAR_4->mode_reg, VAR_2,
     VAR_2);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_4(VAR_4);
 if (VAR_5)
  return VAR_5;


 return FUNC_1(VAR_4->clkr.regmap, VAR_4->mode_reg, VAR_1,
     VAR_1);
}
