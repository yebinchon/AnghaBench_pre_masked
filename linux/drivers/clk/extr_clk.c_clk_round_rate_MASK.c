
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_rate_request {unsigned long rate; int max_rate; int min_rate; } ;
struct clk {int core; scalar_t__ exclusive_count; } ;


 int FUNC_0 (int ,int *,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,struct clk_rate_request*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;

long FUNC_6(struct clk *VAR_0, unsigned long VAR_1)
{
 struct clk_rate_request VAR_2;
 int VAR_3;

 if (!VAR_0)
  return 0;

 FUNC_4();

 if (VAR_0->exclusive_count)
  FUNC_2(VAR_0->core);

 FUNC_0(VAR_0->core, &VAR_2.min_rate, &VAR_2.max_rate);
 VAR_2.rate = VAR_1;

 VAR_3 = FUNC_3(VAR_0->core, &VAR_2);

 if (VAR_0->exclusive_count)
  FUNC_1(VAR_0->core);

 FUNC_5();

 if (VAR_3)
  return VAR_3;

 return VAR_2.rate;
}
