
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_rate_request {int best_parent_rate; int rate; struct clk_hw* best_parent_hw; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (struct clk_hw*,int ) ;

__attribute__((used)) static int FUNC_1(struct clk_hw *VAR_0,
    struct clk_rate_request *VAR_1)
{
 struct clk_hw *VAR_2;

 VAR_2 = VAR_1->best_parent_hw;
 VAR_1->best_parent_rate = FUNC_0(VAR_2, VAR_1->rate);
 VAR_1->rate = VAR_1->best_parent_rate;

 return 0;
}
