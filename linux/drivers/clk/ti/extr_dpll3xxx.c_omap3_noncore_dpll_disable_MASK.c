
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clk_hw_omap {scalar_t__ clkdm; } ;
struct clk_hw {int clk; } ;
struct TYPE_2__ {int (* clkdm_clk_disable ) (scalar_t__,int ) ;} ;


 int FUNC_0 (struct clk_hw_omap*) ;
 int FUNC_1 (scalar_t__,int ) ;
 TYPE_1__* VAR_0 ;
 struct clk_hw_omap* FUNC_2 (struct clk_hw*) ;

void FUNC_3(struct clk_hw *VAR_1)
{
 struct clk_hw_omap *VAR_2 = FUNC_2(VAR_1);

 FUNC_0(VAR_2);
 if (VAR_2->clkdm)
  VAR_0->clkdm_clk_disable(VAR_2->clkdm, VAR_1->clk);
}
