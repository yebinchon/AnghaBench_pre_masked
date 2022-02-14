
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct clk_hw {int dummy; } ;
struct TYPE_2__ {int regmap; } ;
struct clk_alpha_pll {int flags; TYPE_1__ clkr; } ;


 int VAR_0 ;
 int FUNC_0 (struct clk_alpha_pll*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 struct clk_alpha_pll* FUNC_3 (struct clk_hw*) ;
 int FUNC_4 (struct clk_alpha_pll*) ;
 int FUNC_5 (struct clk_alpha_pll*) ;

__attribute__((used)) static void FUNC_6(struct clk_hw *VAR_3)
{
 int VAR_4;
 struct clk_alpha_pll *VAR_5 = FUNC_3(VAR_3);
 u32 VAR_6;

 VAR_4 = FUNC_1(VAR_5->clkr.regmap, FUNC_0(VAR_5), &VAR_6);
 if (VAR_4)
  return;

 if (VAR_5->flags & VAR_2) {
  VAR_4 = FUNC_2(VAR_5->clkr.regmap, FUNC_0(VAR_5),
      VAR_1, VAR_1);
  if (VAR_4)
   return;

  VAR_4 = FUNC_5(VAR_5);
  if (VAR_4)
   return;
 }


 VAR_4 = FUNC_2(VAR_5->clkr.regmap, FUNC_0(VAR_5),
     VAR_0, 0);
 if (VAR_4)
  return;

 FUNC_4(VAR_5);
}
