
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef size_t u32 ;
struct clk_omap_mux {size_t* table; int flags; int mask; int shift; int latch; int reg; } ;
struct clk_hw {int dummy; } ;
struct TYPE_2__ {size_t (* clk_readl ) (int *) ;int (* clk_writel ) (size_t,int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (size_t) ;
 size_t FUNC_1 (int *) ;
 int FUNC_2 (size_t,int *) ;
 int FUNC_3 (int *,int ) ;
 TYPE_1__* VAR_3 ;
 struct clk_omap_mux* FUNC_4 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_5(struct clk_hw *VAR_4, u8 VAR_5)
{
 struct clk_omap_mux *VAR_6 = FUNC_4(VAR_4);
 u32 VAR_7;

 if (VAR_6->table) {
  VAR_5 = VAR_6->table[VAR_5];
 } else {
  if (VAR_6->flags & VAR_1)
   VAR_5 = (1 << FUNC_0(VAR_5));

  if (VAR_6->flags & VAR_2)
   VAR_5++;
 }

 if (VAR_6->flags & VAR_0) {
  VAR_7 = VAR_6->mask << (VAR_6->shift + 16);
 } else {
  VAR_7 = VAR_3->clk_readl(&VAR_6->reg);
  VAR_7 &= ~(VAR_6->mask << VAR_6->shift);
 }
 VAR_7 |= VAR_5 << VAR_6->shift;
 VAR_3->clk_writel(VAR_7, &VAR_6->reg);
 FUNC_3(&VAR_6->reg, VAR_6->latch);

 return 0;
}
