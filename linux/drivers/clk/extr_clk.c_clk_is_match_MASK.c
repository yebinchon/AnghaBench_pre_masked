
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {scalar_t__ core; } ;


 int FUNC_0 (struct clk const*) ;

bool FUNC_1(const struct clk *VAR_0, const struct clk *VAR_1)
{

 if (VAR_0 == VAR_1)
  return 1;


 if (!FUNC_0(VAR_0) && !FUNC_0(VAR_1))
  if (VAR_0->core == VAR_1->core)
   return 1;

 return 0;
}
