
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iommu_fwspec {struct arm_smmu_master* iommu_priv; int * ops; } ;
struct device {int dummy; } ;
struct arm_smmu_master {struct arm_smmu_device* smmu; } ;
struct arm_smmu_device {int iommu; } ;


 int FUNC_0 (struct arm_smmu_master*) ;
 int VAR_0 ;
 struct iommu_fwspec* FUNC_1 (struct device*) ;
 int FUNC_2 (int *,struct device*) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (struct arm_smmu_master*) ;

__attribute__((used)) static void FUNC_6(struct device *VAR_1)
{
 struct iommu_fwspec *VAR_2 = FUNC_1(VAR_1);
 struct arm_smmu_master *VAR_3;
 struct arm_smmu_device *VAR_4;

 if (!VAR_2 || VAR_2->ops != &VAR_0)
  return;

 VAR_3 = VAR_2->iommu_priv;
 VAR_4 = VAR_3->smmu;
 FUNC_0(VAR_3);
 FUNC_4(VAR_1);
 FUNC_2(&VAR_4->iommu, VAR_1);
 FUNC_5(VAR_3);
 FUNC_3(VAR_1);
}
