
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_hw {int * core; } ;


 int FUNC_0 (int *,int *) ;

void FUNC_1(struct clk_hw *VAR_0, struct clk_hw *VAR_1)
{
 if (!VAR_0)
  return;

 FUNC_0(VAR_0->core, !VAR_1 ? ((void*)0) : VAR_1->core);
}
