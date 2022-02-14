
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct dpll_data {int enable_mask; int control_reg; } ;
struct clk_hw_omap {struct dpll_data* dpll_data; } ;
struct clk_hw {int dummy; } ;
struct TYPE_2__ {int (* clk_readl ) (int *) ;} ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 TYPE_1__* VAR_1 ;
 struct clk_hw_omap* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_3(struct clk_hw *VAR_2)
{
 struct clk_hw_omap *VAR_3 = FUNC_2(VAR_2);
 struct dpll_data *VAR_4 = VAR_3->dpll_data;
 u32 VAR_5;

 VAR_5 = VAR_1->clk_readl(&VAR_4->control_reg);
 VAR_5 &= VAR_4->enable_mask;

 VAR_5 >>= FUNC_0(VAR_4->enable_mask);

 return VAR_5 == VAR_0 ? 1 : 0;
}
