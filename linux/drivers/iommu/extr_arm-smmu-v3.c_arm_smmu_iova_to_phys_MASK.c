
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iommu_domain {scalar_t__ type; } ;
struct io_pgtable_ops {int (* iova_to_phys ) (struct io_pgtable_ops*,int ) ;} ;
typedef int phys_addr_t ;
typedef int dma_addr_t ;
struct TYPE_2__ {struct io_pgtable_ops* pgtbl_ops; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct io_pgtable_ops*,int ) ;
 TYPE_1__* FUNC_1 (struct iommu_domain*) ;

__attribute__((used)) static phys_addr_t
FUNC_2(struct iommu_domain *VAR_1, dma_addr_t VAR_2)
{
 struct io_pgtable_ops *VAR_3 = FUNC_1(VAR_1)->pgtbl_ops;

 if (VAR_1->type == VAR_0)
  return VAR_2;

 if (!VAR_3)
  return 0;

 return VAR_3->iova_to_phys(VAR_3, VAR_2);
}
