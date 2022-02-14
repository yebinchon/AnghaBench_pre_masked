
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {scalar_t__ rate; } ;



unsigned long FUNC_0(struct clk *VAR_0)
{
 if (!VAR_0)
  return 0;

 return (unsigned long)VAR_0->rate;
}
