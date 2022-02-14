
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iommu_iotlb_gather {int dummy; } ;
struct iommu_domain {int dummy; } ;
struct arm_smmu_domain {TYPE_1__* flush_ops; struct arm_smmu_device* smmu; } ;
struct arm_smmu_device {int dummy; } ;
struct TYPE_2__ {int (* tlb_sync ) (struct arm_smmu_domain*) ;} ;


 int FUNC_0 (struct arm_smmu_device*) ;
 int FUNC_1 (struct arm_smmu_device*) ;
 int FUNC_2 (struct arm_smmu_domain*) ;
 struct arm_smmu_domain* FUNC_3 (struct iommu_domain*) ;

__attribute__((used)) static void FUNC_4(struct iommu_domain *VAR_0,
    struct iommu_iotlb_gather *VAR_1)
{
 struct arm_smmu_domain *VAR_2 = FUNC_3(VAR_0);
 struct arm_smmu_device *VAR_3 = VAR_2->smmu;

 if (VAR_2->flush_ops) {
  FUNC_0(VAR_3);
  VAR_2->flush_ops->tlb_sync(VAR_2);
  FUNC_1(VAR_3);
 }
}
