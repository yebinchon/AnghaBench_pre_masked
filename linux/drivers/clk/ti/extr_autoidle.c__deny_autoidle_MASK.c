
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct clk_ti_autoidle {int flags; int shift; int reg; } ;
struct TYPE_2__ {int (* clk_readl ) (int *) ;int (* clk_writel ) (int,int *) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,int *) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static void FUNC_2(struct clk_ti_autoidle *VAR_2)
{
 u32 VAR_3;

 VAR_3 = VAR_1->clk_readl(&VAR_2->reg);

 if (VAR_2->flags & VAR_0)
  VAR_3 |= (1 << VAR_2->shift);
 else
  VAR_3 &= ~(1 << VAR_2->shift);

 VAR_1->clk_writel(VAR_3, &VAR_2->reg);
}
