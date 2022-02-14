
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {scalar_t__ usecount; struct clk* parent; } ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(struct clk *VAR_0)
{
 if (FUNC_0(VAR_0->usecount == 0))
  return;
 --VAR_0->usecount;

 if (VAR_0->parent)
  FUNC_1(VAR_0->parent);
}
