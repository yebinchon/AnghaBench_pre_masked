
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct clk_omap_divider {int shift; int context; int reg; } ;
struct clk_hw {int dummy; } ;
struct TYPE_2__ {int (* clk_readl ) (int *) ;int (* clk_writel ) (int,int *) ;} ;


 int FUNC_0 (struct clk_omap_divider*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,int *) ;
 TYPE_1__* VAR_0 ;
 struct clk_omap_divider* FUNC_3 (struct clk_hw*) ;

__attribute__((used)) static void FUNC_4(struct clk_hw *VAR_1)
{
 struct clk_omap_divider *VAR_2 = FUNC_3(VAR_1);
 u32 VAR_3;

 VAR_3 = VAR_0->clk_readl(&VAR_2->reg);
 VAR_3 &= ~(FUNC_0(VAR_2) << VAR_2->shift);
 VAR_3 |= VAR_2->context << VAR_2->shift;
 VAR_0->clk_writel(VAR_3, &VAR_2->reg);
}
