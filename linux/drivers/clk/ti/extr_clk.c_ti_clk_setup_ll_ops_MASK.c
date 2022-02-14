
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_clk_ll_ops {int clk_rmw; int clk_writel; int clk_readl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 struct ti_clk_ll_ops* VAR_4 ;

int FUNC_1(struct ti_clk_ll_ops *VAR_5)
{
 if (VAR_4) {
  FUNC_0("Attempt to register ll_ops multiple times.\n");
  return -VAR_0;
 }

 VAR_4 = VAR_5;
 VAR_5->clk_readl = VAR_1;
 VAR_5->clk_writel = VAR_3;
 VAR_5->clk_rmw = VAR_2;

 return 0;
}
