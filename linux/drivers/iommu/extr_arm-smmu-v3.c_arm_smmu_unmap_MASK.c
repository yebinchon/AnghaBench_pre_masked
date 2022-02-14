
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iommu_iotlb_gather {int dummy; } ;
struct iommu_domain {int dummy; } ;
struct io_pgtable_ops {size_t (* unmap ) (struct io_pgtable_ops*,unsigned long,size_t,struct iommu_iotlb_gather*) ;} ;
struct arm_smmu_domain {struct io_pgtable_ops* pgtbl_ops; } ;


 size_t FUNC_0 (struct io_pgtable_ops*,unsigned long,size_t,struct iommu_iotlb_gather*) ;
 struct arm_smmu_domain* FUNC_1 (struct iommu_domain*) ;

__attribute__((used)) static size_t FUNC_2(struct iommu_domain *VAR_0, unsigned long VAR_1,
        size_t VAR_2, struct iommu_iotlb_gather *VAR_3)
{
 struct arm_smmu_domain *VAR_4 = FUNC_1(VAR_0);
 struct io_pgtable_ops *VAR_5 = VAR_4->pgtbl_ops;

 if (!VAR_5)
  return 0;

 return VAR_5->unmap(VAR_5, VAR_1, VAR_2, VAR_3);
}
