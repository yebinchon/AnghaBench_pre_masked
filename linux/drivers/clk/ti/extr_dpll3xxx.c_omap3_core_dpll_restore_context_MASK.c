
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct dpll_data {int mult_mask; int div1_mask; int last_rounded_m; int last_rounded_n; int mult_div1_reg; } ;
struct clk_hw_omap {int context; struct dpll_data* dpll_data; } ;
struct clk_hw {int dummy; } ;
struct TYPE_2__ {int (* clk_readl ) (int *) ;int (* clk_writel ) (int,int *) ;} ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct clk_hw_omap*,int) ;
 int FUNC_2 (struct clk_hw_omap*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int,int *) ;
 TYPE_1__* VAR_1 ;
 struct clk_hw_omap* FUNC_5 (struct clk_hw*) ;

void FUNC_6(struct clk_hw *VAR_2)
{
 struct clk_hw_omap *VAR_3 = FUNC_5(VAR_2);
 const struct dpll_data *VAR_4;
 u32 VAR_5;

 VAR_4 = VAR_3->dpll_data;

 if (VAR_3->context == VAR_0) {
  FUNC_1(VAR_3, 0x4);
  FUNC_2(VAR_3, 0);

  VAR_5 = VAR_1->clk_readl(&VAR_4->mult_div1_reg);
  VAR_5 &= ~(VAR_4->mult_mask | VAR_4->div1_mask);
  VAR_5 |= VAR_4->last_rounded_m << FUNC_0(VAR_4->mult_mask);
  VAR_5 |= (VAR_4->last_rounded_n - 1) << FUNC_0(VAR_4->div1_mask);
  VAR_1->clk_writel(VAR_5, &VAR_4->mult_div1_reg);

  FUNC_1(VAR_3, VAR_0);
  FUNC_2(VAR_3, 1);
 } else {
  FUNC_1(VAR_3, VAR_3->context);
 }
}
