
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpc32xx_pll_clk {int enable; int reg; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int) ;
 struct lpc32xx_pll_clk* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static void FUNC_2(struct clk_hw *VAR_1)
{
 struct lpc32xx_pll_clk *VAR_2 = FUNC_1(VAR_1);

 FUNC_0(VAR_0, VAR_2->reg, VAR_2->enable, 0x0);
}
