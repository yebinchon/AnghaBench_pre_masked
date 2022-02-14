
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct clk_hw_omap {int flags; int enable_bit; scalar_t__ clkdm; int enable_reg; } ;
struct clk_hw {int clk; } ;
struct TYPE_4__ {int flags; } ;
struct TYPE_3__ {int (* clk_readl ) (int *) ;int (* clkdm_clk_disable ) (scalar_t__,int ) ;int (* clk_writel ) (int,int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (scalar_t__,int ) ;
 TYPE_2__* FUNC_3 () ;
 TYPE_1__* VAR_2 ;
 struct clk_hw_omap* FUNC_4 (struct clk_hw*) ;

void FUNC_5(struct clk_hw *VAR_3)
{
 struct clk_hw_omap *VAR_4;
 u32 VAR_5;

 VAR_4 = FUNC_4(VAR_3);

 VAR_5 = VAR_2->clk_readl(&VAR_4->enable_reg);
 if (VAR_4->flags & VAR_0)
  VAR_5 |= (1 << VAR_4->enable_bit);
 else
  VAR_5 &= ~(1 << VAR_4->enable_bit);
 VAR_2->clk_writel(VAR_5, &VAR_4->enable_reg);


 if (!(FUNC_3()->flags & VAR_1) &&
     VAR_4->clkdm)
  VAR_2->clkdm_clk_disable(VAR_4->clkdm, VAR_3->clk);
}
