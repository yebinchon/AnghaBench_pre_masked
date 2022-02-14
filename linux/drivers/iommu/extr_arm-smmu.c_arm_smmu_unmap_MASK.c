
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iommu_iotlb_gather {int dummy; } ;
struct iommu_domain {int dummy; } ;
struct io_pgtable_ops {size_t (* unmap ) (struct io_pgtable_ops*,unsigned long,size_t,struct iommu_iotlb_gather*) ;} ;
struct arm_smmu_device {int dummy; } ;
struct TYPE_2__ {struct arm_smmu_device* smmu; struct io_pgtable_ops* pgtbl_ops; } ;


 int FUNC_0 (struct arm_smmu_device*) ;
 int FUNC_1 (struct arm_smmu_device*) ;
 size_t FUNC_2 (struct io_pgtable_ops*,unsigned long,size_t,struct iommu_iotlb_gather*) ;
 TYPE_1__* FUNC_3 (struct iommu_domain*) ;

__attribute__((used)) static size_t FUNC_4(struct iommu_domain *VAR_0, unsigned long VAR_1,
        size_t VAR_2, struct iommu_iotlb_gather *VAR_3)
{
 struct io_pgtable_ops *VAR_4 = FUNC_3(VAR_0)->pgtbl_ops;
 struct arm_smmu_device *VAR_5 = FUNC_3(VAR_0)->smmu;
 size_t VAR_6;

 if (!VAR_4)
  return 0;

 FUNC_0(VAR_5);
 VAR_6 = VAR_4->unmap(VAR_4, VAR_1, VAR_2, VAR_3);
 FUNC_1(VAR_5);

 return VAR_6;
}
