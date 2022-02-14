
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct of_phandle_args {scalar_t__ np; int args_count; int* args; } ;
struct TYPE_3__ {scalar_t__ of_node; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;
struct cpg_mssr_clk_domain {unsigned int num_core_pm_clks; int* core_pm_clks; TYPE_2__ genpd; } ;





__attribute__((used)) static bool FUNC_0(const struct of_phandle_args *VAR_0,
          struct cpg_mssr_clk_domain *VAR_1)
{
 unsigned int VAR_2;

 if (VAR_0->np != VAR_1->genpd.dev.of_node || VAR_0->args_count != 2)
  return 0;

 switch (VAR_0->args[0]) {
 case 129:
  for (VAR_2 = 0; VAR_2 < VAR_1->num_core_pm_clks; VAR_2++)
   if (VAR_0->args[1] == VAR_1->core_pm_clks[VAR_2])
    return 1;
  return 0;

 case 128:
  return 1;

 default:
  return 0;
 }
}
