
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct dpll_data {int enable_mask; int mult_mask; int div1_mask; int clk_ref; int mult_div1_reg; int clk_bypass; int control_reg; } ;
struct clk_hw_omap {struct dpll_data* dpll_data; } ;
struct TYPE_2__ {int (* clk_readl ) (int *) ;} ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 unsigned long FUNC_2 (int ) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 TYPE_1__* VAR_0 ;

unsigned long FUNC_6(struct clk_hw_omap *VAR_1)
{
 u64 VAR_2;
 u32 VAR_3, VAR_4, VAR_5;
 struct dpll_data *VAR_6;

 VAR_6 = VAR_1->dpll_data;
 if (!VAR_6)
  return 0;


 VAR_5 = VAR_0->clk_readl(&VAR_6->control_reg);
 VAR_5 &= VAR_6->enable_mask;
 VAR_5 >>= FUNC_0(VAR_6->enable_mask);

 if (FUNC_1(VAR_5))
  return FUNC_2(VAR_6->clk_bypass);

 VAR_5 = VAR_0->clk_readl(&VAR_6->mult_div1_reg);
 VAR_3 = VAR_5 & VAR_6->mult_mask;
 VAR_3 >>= FUNC_0(VAR_6->mult_mask);
 VAR_4 = VAR_5 & VAR_6->div1_mask;
 VAR_4 >>= FUNC_0(VAR_6->div1_mask);

 VAR_2 = (u64)FUNC_2(VAR_6->clk_ref) * VAR_3;
 FUNC_3(VAR_2, VAR_4 + 1);

 return VAR_2;
}
