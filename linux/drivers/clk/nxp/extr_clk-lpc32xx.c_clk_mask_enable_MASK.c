
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct lpc32xx_clk {int busy_mask; int busy; int enable; int enable_mask; int reg; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int*) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 struct lpc32xx_clk* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_3(struct clk_hw *VAR_2)
{
 struct lpc32xx_clk *VAR_3 = FUNC_2(VAR_2);
 u32 VAR_4;

 FUNC_0(VAR_1, VAR_3->reg, &VAR_4);

 if (VAR_3->busy_mask && (VAR_4 & VAR_3->busy_mask) == VAR_3->busy)
  return -VAR_0;

 return FUNC_1(VAR_1, VAR_3->reg,
      VAR_3->enable_mask, VAR_3->enable);
}
