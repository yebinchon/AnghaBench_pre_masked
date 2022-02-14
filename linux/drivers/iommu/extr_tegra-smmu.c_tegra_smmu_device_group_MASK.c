
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tegra_smmu {int dummy; } ;
struct iommu_group {int dummy; } ;
struct iommu_fwspec {int * ids; } ;
struct TYPE_2__ {struct tegra_smmu* iommu; } ;
struct device {TYPE_1__ archdata; } ;


 struct iommu_fwspec* FUNC_0 (struct device*) ;
 struct iommu_group* FUNC_1 (struct device*) ;
 struct iommu_group* FUNC_2 (struct tegra_smmu*,int ) ;

__attribute__((used)) static struct iommu_group *FUNC_3(struct device *VAR_0)
{
 struct iommu_fwspec *VAR_1 = FUNC_0(VAR_0);
 struct tegra_smmu *VAR_2 = VAR_0->archdata.iommu;
 struct iommu_group *VAR_3;

 VAR_3 = FUNC_2(VAR_2, VAR_1->ids[0]);
 if (!VAR_3)
  VAR_3 = FUNC_1(VAR_0);

 return VAR_3;
}
