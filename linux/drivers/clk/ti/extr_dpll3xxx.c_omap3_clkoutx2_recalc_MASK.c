
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct dpll_data {int enable_mask; int flags; int control_reg; } ;
struct clk_hw_omap {struct dpll_data* dpll_data; } ;
struct clk_hw {int dummy; } ;
struct TYPE_2__ {int (* clk_readl ) (int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 struct clk_hw_omap* FUNC_2 (struct clk_hw*) ;
 int FUNC_3 (int *) ;
 TYPE_1__* VAR_2 ;

unsigned long FUNC_4(struct clk_hw *VAR_3,
        unsigned long VAR_4)
{
 const struct dpll_data *VAR_5;
 unsigned long VAR_6;
 u32 VAR_7;
 struct clk_hw_omap *VAR_8 = ((void*)0);

 if (!VAR_4)
  return 0;

 VAR_8 = FUNC_2(VAR_3);

 if (!VAR_8)
  return 0;

 VAR_5 = VAR_8->dpll_data;

 FUNC_0(!VAR_5->enable_mask);

 VAR_7 = VAR_2->clk_readl(&VAR_5->control_reg) & VAR_5->enable_mask;
 VAR_7 >>= FUNC_1(VAR_5->enable_mask);
 if ((VAR_7 != VAR_1) || (VAR_5->flags & VAR_0))
  VAR_6 = VAR_4;
 else
  VAR_6 = VAR_4 * 2;
 return VAR_6;
}
