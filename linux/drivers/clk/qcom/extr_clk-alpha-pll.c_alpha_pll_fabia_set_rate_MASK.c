
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
 unsigned long VAR_1 ;
 int FUNC_0 (struct clk_alpha_pll*) ;
 int FUNC_1 (struct clk_alpha_pll*) ;
 int FUNC_2 (struct clk_alpha_pll*) ;
 int FUNC_3 (struct clk_alpha_pll*) ;
 unsigned long FUNC_4 (unsigned long,unsigned long,int *,int *,int ) ;
 int FUNC_5 (struct clk_alpha_pll*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int ,int ,int *) ;
 int FUNC_8 (int ,int ,int ) ;
 struct clk_alpha_pll* FUNC_9 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_10(struct clk_hw *VAR_2, unsigned long VAR_3,
      unsigned long VAR_4)
{
 struct clk_alpha_pll *VAR_5 = FUNC_9(VAR_2);
 u32 VAR_6, VAR_7, VAR_8 = FUNC_5(VAR_5);
 u64 VAR_9;
 unsigned long VAR_10;
 int VAR_11 = 0;

 VAR_11 = FUNC_7(VAR_5->clkr.regmap, FUNC_2(VAR_5), &VAR_6);
 if (VAR_11)
  return VAR_11;

 VAR_10 = FUNC_4(VAR_3, VAR_4, &VAR_7, &VAR_9, VAR_8);





 if (VAR_10 > (VAR_3 + VAR_1) || VAR_10 < VAR_3) {
  FUNC_6("Call set rate on the PLL with rounded rates!\n");
  return -VAR_0;
 }

 FUNC_8(VAR_5->clkr.regmap, FUNC_1(VAR_5), VAR_7);
 FUNC_8(VAR_5->clkr.regmap, FUNC_0(VAR_5), VAR_9);

 return FUNC_3(VAR_5);
}
