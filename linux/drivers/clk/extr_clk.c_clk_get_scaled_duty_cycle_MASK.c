
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {int core; } ;


 int FUNC_0 (int ,unsigned int) ;

int FUNC_1(struct clk *VAR_0, unsigned int VAR_1)
{
 if (!VAR_0)
  return 0;

 return FUNC_0(VAR_0->core, VAR_1);
}
