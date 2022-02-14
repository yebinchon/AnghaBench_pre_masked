
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct dpll_data {int control_reg; } ;
struct clk_hw_omap {struct dpll_data* dpll_data; } ;
struct clk_hw {int dummy; } ;
struct TYPE_2__ {int (* clk_readl ) (int *) ;} ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long FUNC_0 (struct clk_hw_omap*) ;
 int FUNC_1 (int *) ;
 TYPE_1__* VAR_2 ;
 struct clk_hw_omap* FUNC_2 (struct clk_hw*) ;

unsigned long FUNC_3(struct clk_hw *VAR_3,
      unsigned long VAR_4)
{
 struct clk_hw_omap *VAR_5 = FUNC_2(VAR_3);
 u32 VAR_6;
 unsigned long VAR_7;
 struct dpll_data *VAR_8;

 if (!VAR_5 || !VAR_5->dpll_data)
  return 0;

 VAR_8 = VAR_5->dpll_data;

 VAR_7 = FUNC_0(VAR_5);


 VAR_6 = VAR_2->clk_readl(&VAR_8->control_reg);
 if (VAR_6 & VAR_0)
  VAR_7 *= VAR_1;

 return VAR_7;
}
