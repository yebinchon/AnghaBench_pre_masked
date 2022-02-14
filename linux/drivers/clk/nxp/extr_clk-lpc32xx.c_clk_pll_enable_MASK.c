
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct lpc32xx_pll_clk {int reg; int enable; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int*) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 struct lpc32xx_pll_clk* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_3(struct clk_hw *VAR_3)
{
 struct lpc32xx_pll_clk *VAR_4 = FUNC_2(VAR_3);
 u32 VAR_5, VAR_6;

 FUNC_1(VAR_2, VAR_4->reg, VAR_4->enable, VAR_4->enable);

 for (VAR_6 = 0; VAR_6 < 1000; VAR_6++) {
  FUNC_0(VAR_2, VAR_4->reg, &VAR_5);
  if (VAR_5 & VAR_1)
   break;
 }

 if (VAR_5 & VAR_1)
  return 0;

 return -VAR_0;
}
