
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
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct clk_alpha_pll*) ;
 int FUNC_1 (struct clk_alpha_pll*) ;
 int FUNC_2 (struct clk_alpha_pll*) ;
 unsigned long FUNC_3 (unsigned long,unsigned long,int*,int*) ;
 scalar_t__ FUNC_4 (struct clk_hw*) ;
 int FUNC_5 (struct clk_hw*) ;
 int FUNC_6 () ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (int ,int ,int*) ;
 int FUNC_9 (int ,int ,int,int) ;
 int FUNC_10 (int ,int ,int) ;
 struct clk_alpha_pll* FUNC_11 (struct clk_hw*) ;
 int FUNC_12 (struct clk_alpha_pll*) ;

__attribute__((used)) static int FUNC_13(struct clk_hw *VAR_3, unsigned long VAR_4,
         unsigned long VAR_5)
{
 struct clk_alpha_pll *VAR_6 = FUNC_11(VAR_3);
 u32 VAR_7, VAR_8, VAR_9, VAR_10 = 0;

 VAR_4 = FUNC_3(VAR_4, VAR_5, &VAR_7, &VAR_8);

 FUNC_8(VAR_6->clkr.regmap, FUNC_2(VAR_6), &VAR_9);

 if (VAR_9 & VAR_1)
  FUNC_8(VAR_6->clkr.regmap, FUNC_0(VAR_6), &VAR_10);





 if (FUNC_4(VAR_3)) {
  if (VAR_10 != VAR_8) {
   FUNC_7("clock needs to be gated %s\n",
          FUNC_5(VAR_3));
   return -VAR_0;
  }

  FUNC_10(VAR_6->clkr.regmap, FUNC_1(VAR_6), VAR_7);

  FUNC_6();
  return FUNC_12(VAR_6);
 }

 FUNC_10(VAR_6->clkr.regmap, FUNC_1(VAR_6), VAR_7);
 FUNC_10(VAR_6->clkr.regmap, FUNC_0(VAR_6), VAR_8);

 if (VAR_8 == 0)
  FUNC_9(VAR_6->clkr.regmap, FUNC_2(VAR_6),
       VAR_1, 0x0);
 else
  FUNC_9(VAR_6->clkr.regmap, FUNC_2(VAR_6),
       VAR_1 | VAR_2, VAR_1);

 return 0;
}
