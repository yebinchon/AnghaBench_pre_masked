
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int regmap; } ;
struct clk_alpha_pll {TYPE_1__ clkr; } ;


 int FUNC_0 (struct clk_alpha_pll*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int*) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct clk_alpha_pll*) ;
 int FUNC_5 (struct clk_alpha_pll*) ;
 int FUNC_6 (struct clk_alpha_pll*) ;

__attribute__((used)) static int FUNC_7(struct clk_alpha_pll *VAR_2)
{
 int VAR_3;
 u32 VAR_4;

 FUNC_1(VAR_2->clkr.regmap, FUNC_0(VAR_2), &VAR_4);


 FUNC_2(VAR_2->clkr.regmap, FUNC_0(VAR_2), VAR_0,
      VAR_0);


 FUNC_3(1);
 if (VAR_4 & VAR_1) {
  VAR_3 = FUNC_6(VAR_2);
  if (VAR_3)
   return VAR_3;

  FUNC_2(VAR_2->clkr.regmap, FUNC_0(VAR_2), VAR_0, 0);
 } else {
  VAR_3 = FUNC_4(VAR_2);
  if (VAR_3)
   return VAR_3;
 }

 VAR_3 = FUNC_5(VAR_2);
 if (VAR_3)
  return VAR_3;


 FUNC_3(10);

 return 0;
}
