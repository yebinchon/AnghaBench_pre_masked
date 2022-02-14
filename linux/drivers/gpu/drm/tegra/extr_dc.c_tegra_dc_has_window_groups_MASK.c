
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tegra_windowgroup_soc {scalar_t__ dc; scalar_t__ num_windows; } ;
struct tegra_dc {scalar_t__ pipe; TYPE_1__* soc; } ;
struct TYPE_2__ {unsigned int num_wgrps; struct tegra_windowgroup_soc* wgrps; } ;



__attribute__((used)) static bool FUNC_0(struct tegra_dc *VAR_0)
{
 unsigned int VAR_1;

 if (!VAR_0->soc->wgrps)
  return 1;

 for (VAR_1 = 0; VAR_1 < VAR_0->soc->num_wgrps; VAR_1++) {
  const struct tegra_windowgroup_soc *VAR_2 = &VAR_0->soc->wgrps[VAR_1];

  if (VAR_2->dc == VAR_0->pipe && VAR_2->num_windows > 0)
   return 1;
 }

 return 0;
}
