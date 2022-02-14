
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct clk_hw_omap {int flags; int clksel_reg; } ;
struct TYPE_2__ {int (* clk_writel ) (int ,int *) ;int (* clk_readl ) (int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static void FUNC_2(struct clk_hw_omap *VAR_4)
{
 u32 VAR_5;
 u32 VAR_6;

 if (!VAR_4)
  return;

 VAR_6 = VAR_4->flags & VAR_0 ?
   VAR_1 :
   VAR_2;

 VAR_5 = VAR_3->clk_readl(&VAR_4->clksel_reg);

 VAR_5 &= ~VAR_6;
 VAR_3->clk_writel(VAR_5, &VAR_4->clksel_reg);
}
