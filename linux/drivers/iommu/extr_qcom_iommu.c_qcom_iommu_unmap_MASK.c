
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qcom_iommu_domain {TYPE_1__* iommu; int pgtbl_lock; struct io_pgtable_ops* pgtbl_ops; } ;
struct iommu_iotlb_gather {int dummy; } ;
struct iommu_domain {int dummy; } ;
struct io_pgtable_ops {size_t (* unmap ) (struct io_pgtable_ops*,unsigned long,size_t,struct iommu_iotlb_gather*) ;} ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 size_t FUNC_4 (struct io_pgtable_ops*,unsigned long,size_t,struct iommu_iotlb_gather*) ;
 struct qcom_iommu_domain* FUNC_5 (struct iommu_domain*) ;

__attribute__((used)) static size_t FUNC_6(struct iommu_domain *VAR_0, unsigned long VAR_1,
          size_t VAR_2, struct iommu_iotlb_gather *VAR_3)
{
 size_t VAR_4;
 unsigned long VAR_5;
 struct qcom_iommu_domain *VAR_6 = FUNC_5(VAR_0);
 struct io_pgtable_ops *VAR_7 = VAR_6->pgtbl_ops;

 if (!VAR_7)
  return 0;






 FUNC_0(VAR_6->iommu->dev);
 FUNC_2(&VAR_6->pgtbl_lock, VAR_5);
 VAR_4 = VAR_7->unmap(VAR_7, VAR_1, VAR_2, VAR_3);
 FUNC_3(&VAR_6->pgtbl_lock, VAR_5);
 FUNC_1(VAR_6->iommu->dev);

 return VAR_4;
}
