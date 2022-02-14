
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {int usecount; struct clk* parent; } ;



__attribute__((used)) static void FUNC_0(struct clk *VAR_0)
{
 if (VAR_0->parent)
  FUNC_0(VAR_0->parent);
 VAR_0->usecount++;
}
