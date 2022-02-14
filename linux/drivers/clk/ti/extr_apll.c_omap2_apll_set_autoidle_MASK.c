
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct dpll_data {int autoidle_mask; int control_reg; int autoidle_reg; } ;
struct clk_hw_omap {struct dpll_data* dpll_data; } ;
struct TYPE_2__ {int (* clk_readl ) (int *) ;int (* clk_writel ) (int,int *) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,int *) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static void FUNC_3(struct clk_hw_omap *VAR_1, u32 VAR_2)
{
 struct dpll_data *VAR_3 = VAR_1->dpll_data;
 u32 VAR_4;

 VAR_4 = VAR_0->clk_readl(&VAR_3->autoidle_reg);
 VAR_4 &= ~VAR_3->autoidle_mask;
 VAR_4 |= VAR_2 << FUNC_0(VAR_3->autoidle_mask);
 VAR_0->clk_writel(VAR_4, &VAR_3->control_reg);
}
