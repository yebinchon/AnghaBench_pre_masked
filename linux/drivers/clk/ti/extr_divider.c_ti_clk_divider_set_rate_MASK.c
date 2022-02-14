
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u32 ;
struct clk_omap_divider {int flags; int shift; int latch; int reg; } ;
struct clk_hw {int dummy; } ;
struct TYPE_2__ {unsigned int (* clk_readl ) (int *) ;int (* clk_writel ) (unsigned int,int *) ;} ;


 int VAR_0 ;
 unsigned int FUNC_0 (unsigned long,unsigned long) ;
 int VAR_1 ;
 unsigned int FUNC_1 (struct clk_omap_divider*,unsigned int) ;
 unsigned int FUNC_2 (struct clk_omap_divider*) ;
 unsigned int FUNC_3 (int *) ;
 int FUNC_4 (unsigned int,int *) ;
 int FUNC_5 (int *,int ) ;
 TYPE_1__* VAR_2 ;
 struct clk_omap_divider* FUNC_6 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_7(struct clk_hw *VAR_3, unsigned long VAR_4,
       unsigned long VAR_5)
{
 struct clk_omap_divider *VAR_6;
 unsigned int VAR_7, VAR_8;
 u32 VAR_9;

 if (!VAR_3 || !VAR_4)
  return -VAR_1;

 VAR_6 = FUNC_6(VAR_3);

 VAR_7 = FUNC_0(VAR_5, VAR_4);
 VAR_8 = FUNC_1(VAR_6, VAR_7);

 if (VAR_8 > FUNC_2(VAR_6))
  VAR_8 = FUNC_2(VAR_6);

 if (VAR_6->flags & VAR_0) {
  VAR_9 = FUNC_2(VAR_6) << (VAR_6->shift + 16);
 } else {
  VAR_9 = VAR_2->clk_readl(&VAR_6->reg);
  VAR_9 &= ~(FUNC_2(VAR_6) << VAR_6->shift);
 }
 VAR_9 |= VAR_8 << VAR_6->shift;
 VAR_2->clk_writel(VAR_9, &VAR_6->reg);

 FUNC_5(&VAR_6->reg, VAR_6->latch);

 return 0;
}
