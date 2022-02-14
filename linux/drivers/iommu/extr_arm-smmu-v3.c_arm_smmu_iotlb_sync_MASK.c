
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iommu_iotlb_gather {int pgsize; scalar_t__ start; scalar_t__ end; } ;
struct iommu_domain {int dummy; } ;
struct arm_smmu_domain {int dummy; } ;


 int FUNC_0 (scalar_t__,scalar_t__,int ,int,struct arm_smmu_domain*) ;
 struct arm_smmu_domain* FUNC_1 (struct iommu_domain*) ;

__attribute__((used)) static void FUNC_2(struct iommu_domain *VAR_0,
    struct iommu_iotlb_gather *VAR_1)
{
 struct arm_smmu_domain *VAR_2 = FUNC_1(VAR_0);

 FUNC_0(VAR_1->start, VAR_1->end - VAR_1->start,
          VAR_1->pgsize, 1, VAR_2);
}
