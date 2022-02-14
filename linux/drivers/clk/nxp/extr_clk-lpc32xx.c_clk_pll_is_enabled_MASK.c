
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct lpc32xx_pll_clk {int enable; int reg; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int*) ;
 struct lpc32xx_pll_clk* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_2(struct clk_hw *VAR_2)
{
 struct lpc32xx_pll_clk *VAR_3 = FUNC_1(VAR_2);
 u32 VAR_4;

 FUNC_0(VAR_1, VAR_3->reg, &VAR_4);

 VAR_4 &= VAR_3->enable | VAR_0;
 if (VAR_4 == (VAR_3->enable | VAR_0))
  return 1;

 return 0;
}
