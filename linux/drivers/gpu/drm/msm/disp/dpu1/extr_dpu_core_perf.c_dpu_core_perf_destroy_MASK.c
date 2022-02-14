
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dpu_core_perf {int * dev; int * catalog; int * core_clk; scalar_t__ max_core_clk_rate; } ;


 int FUNC_0 (char*) ;

void FUNC_1(struct dpu_core_perf *VAR_0)
{
 if (!VAR_0) {
  FUNC_0("invalid parameters\n");
  return;
 }

 VAR_0->max_core_clk_rate = 0;
 VAR_0->core_clk = ((void*)0);
 VAR_0->catalog = ((void*)0);
 VAR_0->dev = ((void*)0);
}
