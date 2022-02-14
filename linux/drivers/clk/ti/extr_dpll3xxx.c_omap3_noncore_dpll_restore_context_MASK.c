
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct dpll_data {int enable_mask; int last_rounded_m; int mult_mask; int last_rounded_n; int div1_mask; int mult_div1_reg; int control_reg; } ;
struct clk_hw_omap {int context; struct dpll_data* dpll_data; } ;
struct clk_hw {int dummy; } ;
struct TYPE_2__ {int (* clk_readl ) (int *) ;} ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct clk_hw_omap*,int) ;
 int FUNC_2 (struct clk_hw_omap*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 TYPE_1__* VAR_1 ;
 struct clk_hw_omap* FUNC_5 (struct clk_hw*) ;

void FUNC_6(struct clk_hw *VAR_2)
{
 struct clk_hw_omap *VAR_3 = FUNC_5(VAR_2);
 const struct dpll_data *VAR_4;
 u32 VAR_5, VAR_6;

 VAR_4 = VAR_3->dpll_data;

 VAR_5 = VAR_1->clk_readl(&VAR_4->control_reg);
 VAR_6 = VAR_1->clk_readl(&VAR_4->mult_div1_reg);

 if (VAR_3->context == ((VAR_5 & VAR_4->enable_mask) >>
        FUNC_0(VAR_4->enable_mask)) &&
     VAR_4->last_rounded_m == ((VAR_6 & VAR_4->mult_mask) >>
       FUNC_0(VAR_4->mult_mask)) &&
     VAR_4->last_rounded_n == ((VAR_6 & VAR_4->div1_mask) >>
       FUNC_0(VAR_4->div1_mask)) + 1) {

  return;
 }

 if (VAR_3->context == VAR_0)
  FUNC_2(VAR_3, 0);
 else
  FUNC_1(VAR_3, VAR_3->context);
}
