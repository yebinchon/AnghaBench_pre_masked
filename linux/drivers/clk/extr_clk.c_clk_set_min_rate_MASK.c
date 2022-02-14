
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {int max_rate; } ;


 int FUNC_0 (struct clk*,unsigned long,int ) ;

int FUNC_1(struct clk *VAR_0, unsigned long VAR_1)
{
 if (!VAR_0)
  return 0;

 return FUNC_0(VAR_0, VAR_1, VAR_0->max_rate);
}
