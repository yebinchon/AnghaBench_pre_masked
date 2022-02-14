
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_hw {int core; } ;
struct clk_core {struct clk_hw* hw; } ;


 struct clk_core* FUNC_0 (int ,unsigned int) ;

struct clk_hw *
FUNC_1(const struct clk_hw *VAR_0, unsigned int VAR_1)
{
 struct clk_core *VAR_2;

 VAR_2 = FUNC_0(VAR_0->core, VAR_1);

 return !VAR_2 ? ((void*)0) : VAR_2->hw;
}
