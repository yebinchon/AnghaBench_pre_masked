
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct dpll_data {int idlest_mask; int enable_mask; int idlest_reg; int control_reg; } ;
struct clk_hw_omap {int hw; struct dpll_data* dpll_data; } ;
struct clk_hw {int dummy; } ;
struct TYPE_2__ {int (* clk_readl ) (int *) ;int (* clk_writel ) (int,int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 char* FUNC_1 (int *) ;
 int FUNC_2 (char*,char const*,char*,int) ;
 int FUNC_3 (char*,char const*,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int,int *) ;
 int FUNC_7 (int *) ;
 TYPE_1__* VAR_4 ;
 struct clk_hw_omap* FUNC_8 (struct clk_hw*) ;
 int FUNC_9 (int) ;

__attribute__((used)) static int FUNC_10(struct clk_hw *VAR_5)
{
 struct clk_hw_omap *VAR_6 = FUNC_8(VAR_5);
 int VAR_7 = 0, VAR_8 = 0;
 struct dpll_data *VAR_9;
 const char *VAR_10;
 u8 VAR_11 = 1;
 u32 VAR_12;

 VAR_9 = VAR_6->dpll_data;
 if (!VAR_9)
  return -VAR_2;

 VAR_10 = FUNC_1(&VAR_6->hw);

 VAR_11 <<= FUNC_0(VAR_9->idlest_mask);


 VAR_12 = VAR_4->clk_readl(&VAR_9->idlest_reg);

 if ((VAR_12 & VAR_9->idlest_mask) == VAR_11)
  return VAR_7;

 VAR_12 = VAR_4->clk_readl(&VAR_9->control_reg);
 VAR_12 &= ~VAR_9->enable_mask;
 VAR_12 |= VAR_0 << FUNC_0(VAR_9->enable_mask);
 VAR_4->clk_writel(VAR_12, &VAR_9->control_reg);

 VAR_11 <<= FUNC_0(VAR_9->idlest_mask);

 while (1) {
  VAR_12 = VAR_4->clk_readl(&VAR_9->idlest_reg);
  if ((VAR_12 & VAR_9->idlest_mask) == VAR_11)
   break;
  if (VAR_8 > VAR_3)
   break;
  VAR_8++;
  FUNC_9(1);
 }

 if (VAR_8 == VAR_3) {
  FUNC_3("clock: %s failed transition to '%s'\n",
   VAR_10, (VAR_11) ? "locked" : "bypassed");
  VAR_7 = -VAR_1;
 } else
  FUNC_2("clock: %s transition to '%s' in %d loops\n",
    VAR_10, (VAR_11) ? "locked" : "bypassed", VAR_8);

 return VAR_7;
}
