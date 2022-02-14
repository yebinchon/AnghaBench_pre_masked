
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iommu_domain {int dummy; } ;
struct arm_smmu_domain {TYPE_2__* flush_ops; struct arm_smmu_device* smmu; } ;
struct arm_smmu_device {int dummy; } ;
struct TYPE_3__ {int (* tlb_flush_all ) (struct arm_smmu_domain*) ;} ;
struct TYPE_4__ {TYPE_1__ tlb; } ;


 int FUNC_0 (struct arm_smmu_device*) ;
 int FUNC_1 (struct arm_smmu_device*) ;
 int FUNC_2 (struct arm_smmu_domain*) ;
 struct arm_smmu_domain* FUNC_3 (struct iommu_domain*) ;

__attribute__((used)) static void FUNC_4(struct iommu_domain *VAR_0)
{
 struct arm_smmu_domain *VAR_1 = FUNC_3(VAR_0);
 struct arm_smmu_device *VAR_2 = VAR_1->smmu;

 if (VAR_1->flush_ops) {
  FUNC_0(VAR_2);
  VAR_1->flush_ops->tlb.tlb_flush_all(VAR_1);
  FUNC_1(VAR_2);
 }
}
