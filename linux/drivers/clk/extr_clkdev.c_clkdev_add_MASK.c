
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_lookup {int clk; scalar_t__ clk_hw; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct clk_lookup*) ;

void FUNC_2(struct clk_lookup *VAR_0)
{
 if (!VAR_0->clk_hw)
  VAR_0->clk_hw = FUNC_0(VAR_0->clk);
 FUNC_1(VAR_0);
}
