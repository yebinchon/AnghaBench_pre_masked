
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_rate_request {scalar_t__ rate; } ;
struct clk_hw {int core; } ;


 int FUNC_0 (int ,struct clk_rate_request*) ;

int FUNC_1(struct clk_hw *VAR_0, struct clk_rate_request *VAR_1)
{
 if (!VAR_0) {
  VAR_1->rate = 0;
  return 0;
 }

 return FUNC_0(VAR_0->core, VAR_1);
}
