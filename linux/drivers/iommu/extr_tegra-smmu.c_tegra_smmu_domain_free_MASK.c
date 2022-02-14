
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_smmu_as {struct tegra_smmu_as* pts; struct tegra_smmu_as* count; int use_count; } ;
struct iommu_domain {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct tegra_smmu_as*) ;
 struct tegra_smmu_as* FUNC_2 (struct iommu_domain*) ;

__attribute__((used)) static void FUNC_3(struct iommu_domain *VAR_0)
{
 struct tegra_smmu_as *VAR_1 = FUNC_2(VAR_0);



 FUNC_0(VAR_1->use_count);
 FUNC_1(VAR_1->count);
 FUNC_1(VAR_1->pts);
 FUNC_1(VAR_1);
}
