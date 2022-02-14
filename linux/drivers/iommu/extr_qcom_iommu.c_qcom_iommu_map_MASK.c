
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qcom_iommu_domain {int pgtbl_lock; struct io_pgtable_ops* pgtbl_ops; } ;
struct iommu_domain {int dummy; } ;
struct io_pgtable_ops {int (* map ) (struct io_pgtable_ops*,unsigned long,int ,size_t,int) ;} ;
typedef int phys_addr_t ;


 int VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (struct io_pgtable_ops*,unsigned long,int ,size_t,int) ;
 struct qcom_iommu_domain* FUNC_3 (struct iommu_domain*) ;

__attribute__((used)) static int FUNC_4(struct iommu_domain *VAR_1, unsigned long VAR_2,
     phys_addr_t VAR_3, size_t VAR_4, int VAR_5)
{
 int VAR_6;
 unsigned long VAR_7;
 struct qcom_iommu_domain *VAR_8 = FUNC_3(VAR_1);
 struct io_pgtable_ops *VAR_9 = VAR_8->pgtbl_ops;

 if (!VAR_9)
  return -VAR_0;

 FUNC_0(&VAR_8->pgtbl_lock, VAR_7);
 VAR_6 = VAR_9->map(VAR_9, VAR_2, VAR_3, VAR_4, VAR_5);
 FUNC_1(&VAR_8->pgtbl_lock, VAR_7);
 return VAR_6;
}
