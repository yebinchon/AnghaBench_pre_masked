
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct lpc32xx_clk {int enable_mask; int busy_mask; int reg; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int*) ;
 struct lpc32xx_clk* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_3(struct clk_hw *VAR_1)
{
 struct lpc32xx_clk *VAR_2 = FUNC_2(VAR_1);
 u32 VAR_3;

 FUNC_1(VAR_0, VAR_2->reg, &VAR_3);
 VAR_3 &= VAR_2->enable_mask | VAR_2->busy_mask;

 return (VAR_3 == (FUNC_0(7) | FUNC_0(0)) ||
  VAR_3 == (FUNC_0(8) | FUNC_0(1)));
}
