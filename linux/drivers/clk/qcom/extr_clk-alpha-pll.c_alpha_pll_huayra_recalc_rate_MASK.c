
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


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct clk_alpha_pll*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct clk_alpha_pll*) ;
 int FUNC_3 (struct clk_alpha_pll*) ;
 unsigned long FUNC_4 (int,int,int) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (int ,int ,int*) ;
 struct clk_alpha_pll* FUNC_7 (struct clk_hw*) ;

__attribute__((used)) static unsigned long
FUNC_8(struct clk_hw *VAR_7, unsigned long VAR_8)
{
 u64 VAR_9 = VAR_8, VAR_10;
 struct clk_alpha_pll *VAR_11 = FUNC_7(VAR_7);
 u32 VAR_12, VAR_13 = 0, VAR_14, VAR_15, VAR_16;

 FUNC_6(VAR_11->clkr.regmap, FUNC_2(VAR_11), &VAR_12);
 FUNC_6(VAR_11->clkr.regmap, FUNC_3(VAR_11), &VAR_14);

 if (VAR_14 & VAR_0) {
  FUNC_6(VAR_11->clkr.regmap, FUNC_1(VAR_11), &VAR_13);
  if (!(VAR_14 & VAR_1))
   return FUNC_4(VAR_9, VAR_12, VAR_13);

  VAR_15 = VAR_13 >> VAR_3 & VAR_2;
  VAR_16 = VAR_13 >> VAR_6 & VAR_5;

  VAR_9 *= VAR_12;
  VAR_10 = VAR_8;
  if (VAR_15 >= FUNC_0(VAR_4 - 1)) {
   VAR_15 = FUNC_0(VAR_4) - VAR_15;
   VAR_10 *= VAR_15;
   FUNC_5(VAR_10, VAR_16);
   VAR_9 -= VAR_10;
  } else {
   VAR_10 *= VAR_15;
   FUNC_5(VAR_10, VAR_16);
   VAR_9 += VAR_10;
  }

  return VAR_9;
 }

 return FUNC_4(VAR_9, VAR_12, VAR_13);
}
