
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct clk_hw_omap {int enable_bit; int enable_reg; } ;
struct clk_hw {int dummy; } ;
struct TYPE_2__ {int (* clk_readl ) (int *) ;} ;


 int FUNC_0 (int *) ;
 TYPE_1__* VAR_0 ;
 struct clk_hw_omap* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_2(struct clk_hw *VAR_1)
{
 struct clk_hw_omap *VAR_2 = FUNC_1(VAR_1);
 u32 VAR_3;

 VAR_3 = VAR_0->clk_readl(&VAR_2->enable_reg);

 if (VAR_3 & VAR_2->enable_bit)
  return 1;

 return 0;
}
