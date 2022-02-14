
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct dpll_data {int enable_mask; int control_reg; } ;
struct clk_hw_omap {struct dpll_data* dpll_data; } ;
struct clk_hw {int dummy; } ;
struct TYPE_2__ {int (* clk_readl ) (int *) ;} ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 TYPE_1__* VAR_1 ;
 struct clk_hw_omap* FUNC_3 (struct clk_hw*) ;

u8 FUNC_4(struct clk_hw *VAR_2)
{
 struct clk_hw_omap *VAR_3 = FUNC_3(VAR_2);
 u32 VAR_4;
 struct dpll_data *VAR_5;

 VAR_5 = VAR_3->dpll_data;
 if (!VAR_5)
  return -VAR_0;

 VAR_4 = VAR_1->clk_readl(&VAR_5->control_reg);
 VAR_4 &= VAR_5->enable_mask;
 VAR_4 >>= FUNC_0(VAR_5->enable_mask);


 if (FUNC_1(VAR_4))
  return 1;

 return 0;
}
