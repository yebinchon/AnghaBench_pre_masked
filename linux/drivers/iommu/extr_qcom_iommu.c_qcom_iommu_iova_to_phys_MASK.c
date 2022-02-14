
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qcom_iommu_domain {int pgtbl_lock; struct io_pgtable_ops* pgtbl_ops; } ;
struct iommu_domain {int dummy; } ;
struct io_pgtable_ops {int (* iova_to_phys ) (struct io_pgtable_ops*,int ) ;} ;
typedef int phys_addr_t ;
typedef int dma_addr_t ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (struct io_pgtable_ops*,int ) ;
 struct qcom_iommu_domain* FUNC_3 (struct iommu_domain*) ;

__attribute__((used)) static phys_addr_t FUNC_4(struct iommu_domain *VAR_0,
        dma_addr_t VAR_1)
{
 phys_addr_t VAR_2;
 unsigned long VAR_3;
 struct qcom_iommu_domain *VAR_4 = FUNC_3(VAR_0);
 struct io_pgtable_ops *VAR_5 = VAR_4->pgtbl_ops;

 if (!VAR_5)
  return 0;

 FUNC_0(&VAR_4->pgtbl_lock, VAR_3);
 VAR_2 = VAR_5->iova_to_phys(VAR_5, VAR_1);
 FUNC_1(&VAR_4->pgtbl_lock, VAR_3);

 return VAR_2;
}
