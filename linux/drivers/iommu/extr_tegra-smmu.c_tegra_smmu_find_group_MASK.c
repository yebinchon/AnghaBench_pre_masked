
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tegra_smmu_group_soc {unsigned int num_swgroups; unsigned int* swgroups; } ;
struct tegra_smmu {TYPE_1__* soc; } ;
struct TYPE_2__ {unsigned int num_groups; struct tegra_smmu_group_soc const* groups; } ;



__attribute__((used)) static const struct tegra_smmu_group_soc *
FUNC_0(struct tegra_smmu *VAR_0, unsigned int VAR_1)
{
 unsigned int VAR_2, VAR_3;

 for (VAR_2 = 0; VAR_2 < VAR_0->soc->num_groups; VAR_2++)
  for (VAR_3 = 0; VAR_3 < VAR_0->soc->groups[VAR_2].num_swgroups; VAR_3++)
   if (VAR_0->soc->groups[VAR_2].swgroups[VAR_3] == VAR_1)
    return &VAR_0->soc->groups[VAR_2];

 return ((void*)0);
}
