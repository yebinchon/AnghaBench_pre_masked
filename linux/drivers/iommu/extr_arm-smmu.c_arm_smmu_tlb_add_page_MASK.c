
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iommu_iotlb_gather {int dummy; } ;
struct arm_smmu_flush_ops {int (* tlb_inv_range ) (unsigned long,size_t,size_t,int,void*) ;} ;
struct arm_smmu_domain {struct arm_smmu_flush_ops* flush_ops; } ;


 int FUNC_0 (unsigned long,size_t,size_t,int,void*) ;

__attribute__((used)) static void FUNC_1(struct iommu_iotlb_gather *VAR_0,
      unsigned long VAR_1, size_t VAR_2,
      void *VAR_3)
{
 struct arm_smmu_domain *VAR_4 = VAR_3;
 const struct arm_smmu_flush_ops *VAR_5 = VAR_4->flush_ops;

 VAR_5->tlb_inv_range(VAR_1, VAR_2, VAR_2, 1, VAR_3);
}
