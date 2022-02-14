
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iommu_domain {TYPE_1__* ops; } ;
typedef int phys_addr_t ;
typedef int dma_addr_t ;
struct TYPE_2__ {int (* iova_to_phys ) (struct iommu_domain*,int ) ;} ;


 int FUNC_0 (struct iommu_domain*,int ) ;
 scalar_t__ FUNC_1 (int ) ;

phys_addr_t FUNC_2(struct iommu_domain *VAR_0, dma_addr_t VAR_1)
{
 if (FUNC_1(VAR_0->ops->iova_to_phys == ((void*)0)))
  return 0;

 return VAR_0->ops->iova_to_phys(VAR_0, VAR_1);
}
