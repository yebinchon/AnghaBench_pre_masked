
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {int (* deactivate ) (struct clk*) ;} ;


 int FUNC_0 (struct clk*) ;
 int FUNC_1 (struct clk*) ;
 scalar_t__ FUNC_2 (int) ;

void FUNC_3(struct clk *VAR_0)
{
 if (FUNC_2(!FUNC_0(VAR_0)))
  return;

 if (VAR_0->deactivate)
  VAR_0->deactivate(VAR_0);
}
