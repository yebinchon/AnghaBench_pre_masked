
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clk_omap_divider {unsigned int shift; int flags; int reg; } ;
struct clk_hw {int dummy; } ;
struct TYPE_2__ {unsigned int (* clk_readl ) (int *) ;} ;


 int VAR_0 ;
 unsigned long FUNC_0 (unsigned long,unsigned int) ;
 int FUNC_1 (int,char*,int ) ;
 unsigned int FUNC_2 (struct clk_omap_divider*,unsigned int) ;
 int FUNC_3 (struct clk_hw*) ;
 unsigned int FUNC_4 (struct clk_omap_divider*) ;
 unsigned int FUNC_5 (int *) ;
 TYPE_1__* VAR_1 ;
 struct clk_omap_divider* FUNC_6 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_7(struct clk_hw *VAR_2,
      unsigned long VAR_3)
{
 struct clk_omap_divider *VAR_4 = FUNC_6(VAR_2);
 unsigned int VAR_5, VAR_6;

 VAR_6 = VAR_1->clk_readl(&VAR_4->reg) >> VAR_4->shift;
 VAR_6 &= FUNC_4(VAR_4);

 VAR_5 = FUNC_2(VAR_4, VAR_6);
 if (!VAR_5) {
  FUNC_1(!(VAR_4->flags & VAR_0),
       "%s: Zero divisor and CLK_DIVIDER_ALLOW_ZERO not set\n",
       FUNC_3(VAR_2));
  return VAR_3;
 }

 return FUNC_0(VAR_3, VAR_5);
}
