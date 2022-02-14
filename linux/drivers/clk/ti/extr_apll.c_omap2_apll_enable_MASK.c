
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct dpll_data {int enable_mask; int idlest_mask; int idlest_reg; int control_reg; } ;
struct clk_hw_omap {int hw; struct dpll_data* dpll_data; } ;
struct clk_hw {int dummy; } ;
struct TYPE_2__ {int (* clk_readl ) (int *) ;int (* clk_writel ) (int,int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int,int *) ;
 int FUNC_5 (int *) ;
 TYPE_1__* VAR_3 ;
 struct clk_hw_omap* FUNC_6 (struct clk_hw*) ;
 int FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct clk_hw *VAR_4)
{
 struct clk_hw_omap *VAR_5 = FUNC_6(VAR_4);
 struct dpll_data *VAR_6 = VAR_5->dpll_data;
 u32 VAR_7;
 int VAR_8 = 0;

 VAR_7 = VAR_3->clk_readl(&VAR_6->control_reg);
 VAR_7 &= ~VAR_6->enable_mask;
 VAR_7 |= VAR_2 << FUNC_0(VAR_6->enable_mask);
 VAR_3->clk_writel(VAR_7, &VAR_6->control_reg);

 while (1) {
  VAR_7 = VAR_3->clk_readl(&VAR_6->idlest_reg);
  if (VAR_7 & VAR_6->idlest_mask)
   break;
  if (VAR_8 > VAR_1)
   break;
  VAR_8++;
  FUNC_7(1);
 }

 if (VAR_8 == VAR_1) {
  FUNC_2("%s failed to transition to locked\n",
   FUNC_1(&VAR_5->hw));
  return -VAR_0;
 }

 return 0;
}
