
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tegra_smmu_swgroup {unsigned int swgroup; } ;
struct tegra_smmu {TYPE_1__* soc; } ;
struct TYPE_2__ {unsigned int num_swgroups; struct tegra_smmu_swgroup* swgroups; } ;



__attribute__((used)) static const struct tegra_smmu_swgroup *
FUNC_0(struct tegra_smmu *VAR_0, unsigned int VAR_1)
{
 const struct tegra_smmu_swgroup *VAR_2 = ((void*)0);
 unsigned int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0->soc->num_swgroups; VAR_3++) {
  if (VAR_0->soc->swgroups[VAR_3].swgroup == VAR_1) {
   VAR_2 = &VAR_0->soc->swgroups[VAR_3];
   break;
  }
 }

 return VAR_2;
}
