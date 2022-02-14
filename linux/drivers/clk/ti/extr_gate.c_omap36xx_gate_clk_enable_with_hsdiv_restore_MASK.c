
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct clk_omap_divider {int shift; int reg; } ;
struct clk_hw {int dummy; } ;
struct TYPE_2__ {int (* clk_readl ) (int *) ;int (* clk_writel ) (int,int *) ;} ;


 struct clk_hw* FUNC_0 (struct clk_hw*) ;
 int FUNC_1 (struct clk_hw*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,int *) ;
 int FUNC_4 (int,int *) ;
 TYPE_1__* VAR_0 ;
 struct clk_omap_divider* FUNC_5 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_6(struct clk_hw *VAR_1)
{
 struct clk_omap_divider *VAR_2;
 struct clk_hw *VAR_3;
 u32 VAR_4, VAR_5;
 int VAR_6;


 VAR_6 = FUNC_1(VAR_1);


 VAR_3 = FUNC_0(FUNC_0(VAR_1));
 VAR_2 = FUNC_5(VAR_3);


 if (!VAR_6) {
  VAR_5 = VAR_0->clk_readl(&VAR_2->reg);
  VAR_4 = VAR_5;


  VAR_4 ^= (1 << VAR_2->shift);
  VAR_0->clk_writel(VAR_4, &VAR_2->reg);


  VAR_0->clk_writel(VAR_5, &VAR_2->reg);
 }

 return VAR_6;
}
