
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iommu_iotlb_gather {int dummy; } ;
struct iommu_domain {int dummy; } ;
struct arm_smmu_domain {struct iommu_domain domain; } ;


 int FUNC_0 (struct iommu_domain*,struct iommu_iotlb_gather*,unsigned long,size_t) ;

__attribute__((used)) static void FUNC_1(struct iommu_iotlb_gather *VAR_0,
      unsigned long VAR_1, size_t VAR_2,
      void *VAR_3)
{
 struct arm_smmu_domain *VAR_4 = VAR_3;
 struct iommu_domain *VAR_5 = &VAR_4->domain;

 FUNC_0(VAR_5, VAR_0, VAR_1, VAR_2);
}
