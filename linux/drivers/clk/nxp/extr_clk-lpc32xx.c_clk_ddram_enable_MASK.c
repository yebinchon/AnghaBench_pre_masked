
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct lpc32xx_clk {int busy_mask; int enable_mask; int reg; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int*) ;
 int FUNC_2 (int ,int ,int ,int) ;
 struct lpc32xx_clk* FUNC_3 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_4(struct clk_hw *VAR_2)
{
 struct lpc32xx_clk *VAR_3 = FUNC_3(VAR_2);
 u32 VAR_4, VAR_5;

 FUNC_1(VAR_1, VAR_3->reg, &VAR_4);
 VAR_5 = VAR_4 & VAR_3->busy_mask;






 if (VAR_5 == 0x0 || VAR_5 == (FUNC_0(1) | FUNC_0(0)))
  return -VAR_0;

 return FUNC_2(VAR_1, VAR_3->reg,
      VAR_3->enable_mask, VAR_5 << 7);
}
