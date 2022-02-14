
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct clk_omap_reg {int offset; } ;
struct clk_hw_omap {int enable_bit; int enable_reg; } ;
typedef int r ;
struct TYPE_2__ {int (* clk_readl ) (struct clk_omap_reg*) ;int (* clk_writel ) (int,struct clk_omap_reg*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct clk_omap_reg*,int *,int) ;
 int FUNC_1 (struct clk_omap_reg*) ;
 int FUNC_2 (int,struct clk_omap_reg*) ;
 TYPE_1__* VAR_2 ;

void FUNC_3(struct clk_hw_omap *VAR_3)
{
 u32 VAR_4;
 struct clk_omap_reg VAR_5;

 FUNC_0(&VAR_5, &VAR_3->enable_reg, sizeof(VAR_5));

 VAR_5.offset ^= (VAR_0 ^ VAR_1);

 VAR_4 = VAR_2->clk_readl(&VAR_5);
 VAR_4 &= ~(1 << VAR_3->enable_bit);
 VAR_2->clk_writel(VAR_4, &VAR_5);
}
