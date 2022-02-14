
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iommu_fwspec {struct arm_smmu_master_cfg* iommu_priv; int * ops; } ;
struct device {int dummy; } ;
struct arm_smmu_master_cfg {struct arm_smmu_device* smmu; } ;
struct arm_smmu_device {int iommu; } ;


 int FUNC_0 (struct iommu_fwspec*) ;
 int VAR_0 ;
 int FUNC_1 (struct arm_smmu_device*) ;
 int FUNC_2 (struct arm_smmu_device*) ;
 struct iommu_fwspec* FUNC_3 (struct device*) ;
 int FUNC_4 (int *,struct device*) ;
 int FUNC_5 (struct device*) ;
 int FUNC_6 (struct device*) ;
 int FUNC_7 (struct arm_smmu_master_cfg*) ;

__attribute__((used)) static void FUNC_8(struct device *VAR_1)
{
 struct iommu_fwspec *VAR_2 = FUNC_3(VAR_1);
 struct arm_smmu_master_cfg *VAR_3;
 struct arm_smmu_device *VAR_4;
 int VAR_5;

 if (!VAR_2 || VAR_2->ops != &VAR_0)
  return;

 VAR_3 = VAR_2->iommu_priv;
 VAR_4 = VAR_3->smmu;

 VAR_5 = FUNC_1(VAR_4);
 if (VAR_5 < 0)
  return;

 FUNC_4(&VAR_4->iommu, VAR_1);
 FUNC_0(VAR_2);

 FUNC_2(VAR_4);

 FUNC_6(VAR_1);
 FUNC_7(VAR_2->iommu_priv);
 FUNC_5(VAR_1);
}
