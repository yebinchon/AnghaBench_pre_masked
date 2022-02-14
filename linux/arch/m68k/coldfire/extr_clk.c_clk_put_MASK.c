
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {scalar_t__ enabled; int name; } ;


 int FUNC_0 (char*,int ) ;

void FUNC_1(struct clk *VAR_0)
{
 if (VAR_0->enabled != 0)
  FUNC_0("clk_put %s still enabled\n", VAR_0->name);
}
