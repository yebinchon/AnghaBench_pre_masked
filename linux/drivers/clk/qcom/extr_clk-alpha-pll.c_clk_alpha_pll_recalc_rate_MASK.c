
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct clk_hw {int dummy; } ;
struct TYPE_2__ {int regmap; } ;
struct clk_alpha_pll {TYPE_1__ clkr; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct clk_alpha_pll*) ;
 int FUNC_2 (struct clk_alpha_pll*) ;
 int FUNC_3 (struct clk_alpha_pll*) ;
 int FUNC_4 (struct clk_alpha_pll*) ;
 unsigned long FUNC_5 (int,int,int,int) ;
 int FUNC_6 (struct clk_alpha_pll*) ;
 int FUNC_7 (int ,int ,int*) ;
 struct clk_alpha_pll* FUNC_8 (struct clk_hw*) ;

__attribute__((used)) static unsigned long
FUNC_9(struct clk_hw *VAR_2, unsigned long VAR_3)
{
 u32 VAR_4, VAR_5, VAR_6, VAR_7;
 u64 VAR_8 = 0, VAR_9 = VAR_3;
 struct clk_alpha_pll *VAR_10 = FUNC_8(VAR_2);
 u32 VAR_11 = FUNC_6(VAR_10);

 FUNC_7(VAR_10->clkr.regmap, FUNC_3(VAR_10), &VAR_4);

 FUNC_7(VAR_10->clkr.regmap, FUNC_4(VAR_10), &VAR_7);
 if (VAR_7 & VAR_1) {
  FUNC_7(VAR_10->clkr.regmap, FUNC_1(VAR_10), &VAR_5);
  if (VAR_11 > 32) {
   FUNC_7(VAR_10->clkr.regmap, FUNC_2(VAR_10),
        &VAR_6);
   VAR_8 = (u64)VAR_6 << 32 | VAR_5;
  } else {
   VAR_8 = VAR_5 & FUNC_0(VAR_11 - 1, 0);
  }

  if (VAR_11 > VAR_0)
   VAR_8 >>= VAR_11 - VAR_0;
 }

 return FUNC_5(VAR_9, VAR_4, VAR_8, VAR_11);
}
