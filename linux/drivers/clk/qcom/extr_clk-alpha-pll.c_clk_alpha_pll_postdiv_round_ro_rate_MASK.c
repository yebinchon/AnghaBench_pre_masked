
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct clk_hw {int dummy; } ;
struct TYPE_2__ {int regmap; } ;
struct clk_alpha_pll_postdiv {int width; TYPE_1__ clkr; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 long FUNC_1 (int ,int) ;
 int VAR_1 ;
 int FUNC_2 (struct clk_alpha_pll_postdiv*) ;
 int FUNC_3 (struct clk_hw*) ;
 int FUNC_4 (struct clk_hw*) ;
 unsigned long FUNC_5 (int ,int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ,int ,int*) ;
 struct clk_alpha_pll_postdiv* FUNC_8 (struct clk_hw*) ;

__attribute__((used)) static long
FUNC_9(struct clk_hw *VAR_2, unsigned long VAR_3,
        unsigned long *VAR_4)
{
 struct clk_alpha_pll_postdiv *VAR_5 = FUNC_8(VAR_2);
 u32 VAR_6, VAR_7;

 FUNC_7(VAR_5->clkr.regmap, FUNC_2(VAR_5), &VAR_6);

 VAR_6 >>= VAR_1;
 VAR_6 &= FUNC_0(VAR_5->width) - 1;
 VAR_7 = 1 << FUNC_6(VAR_6);

 if (FUNC_3(VAR_2) & VAR_0)
  *VAR_4 = FUNC_5(FUNC_4(VAR_2), VAR_7 * VAR_3);

 return FUNC_1((u64)*VAR_4, VAR_7);
}
