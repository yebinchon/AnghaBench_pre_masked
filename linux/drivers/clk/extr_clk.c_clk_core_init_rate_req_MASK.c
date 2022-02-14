
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_rate_request {int best_parent_rate; int * best_parent_hw; } ;
struct clk_core {int rate; int * hw; struct clk_core* parent; } ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(struct clk_core * const VAR_0,
       struct clk_rate_request *VAR_1)
{
 struct clk_core *VAR_2;

 if (FUNC_0(!VAR_0 || !VAR_1))
  return;

 VAR_2 = VAR_0->parent;
 if (VAR_2) {
  VAR_1->best_parent_hw = VAR_2->hw;
  VAR_1->best_parent_rate = VAR_2->rate;
 } else {
  VAR_1->best_parent_hw = ((void*)0);
  VAR_1->best_parent_rate = 0;
 }
}
