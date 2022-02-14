
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct clk_hw_omap {int flags; int enable_bit; int enable_reg; } ;
struct clk_hw {int dummy; } ;
struct TYPE_2__ {int (* clk_readl ) (int *) ;} ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 TYPE_1__* VAR_1 ;
 struct clk_hw_omap* FUNC_2 (struct clk_hw*) ;

int FUNC_3(struct clk_hw *VAR_2)
{
 struct clk_hw_omap *VAR_3 = FUNC_2(VAR_2);
 u32 VAR_4;

 VAR_4 = VAR_1->clk_readl(&VAR_3->enable_reg);

 if (VAR_3->flags & VAR_0)
  VAR_4 ^= FUNC_0(VAR_3->enable_bit);

 VAR_4 &= FUNC_0(VAR_3->enable_bit);

 return VAR_4 ? 1 : 0;
}
