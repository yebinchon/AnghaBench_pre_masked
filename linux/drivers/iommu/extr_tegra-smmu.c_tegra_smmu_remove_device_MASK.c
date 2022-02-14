
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tegra_smmu {int iommu; } ;
struct TYPE_2__ {struct tegra_smmu* iommu; } ;
struct device {TYPE_1__ archdata; } ;


 int FUNC_0 (int *,struct device*) ;
 int FUNC_1 (struct device*) ;

__attribute__((used)) static void FUNC_2(struct device *VAR_0)
{
 struct tegra_smmu *VAR_1 = VAR_0->archdata.iommu;

 if (VAR_1)
  FUNC_0(&VAR_1->iommu, VAR_0);

 VAR_0->archdata.iommu = ((void*)0);
 FUNC_1(VAR_0);
}
