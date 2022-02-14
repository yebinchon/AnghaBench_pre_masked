
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_rate_request {unsigned long rate; int max_rate; int min_rate; } ;
struct clk_hw {int core; } ;


 int FUNC_0 (int ,int *,int *) ;
 int FUNC_1 (int ,struct clk_rate_request*) ;

unsigned long FUNC_2(struct clk_hw *VAR_0, unsigned long VAR_1)
{
 int VAR_2;
 struct clk_rate_request VAR_3;

 FUNC_0(VAR_0->core, &VAR_3.min_rate, &VAR_3.max_rate);
 VAR_3.rate = VAR_1;

 VAR_2 = FUNC_1(VAR_0->core, &VAR_3);
 if (VAR_2)
  return 0;

 return VAR_3.rate;
}
