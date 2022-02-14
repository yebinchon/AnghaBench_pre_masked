
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ipmmu_vmsa_domain {TYPE_1__* iop; } ;
struct iommu_domain {int dummy; } ;
typedef int phys_addr_t ;
typedef int dma_addr_t ;
struct TYPE_2__ {int (* iova_to_phys ) (TYPE_1__*,int ) ;} ;


 int FUNC_0 (TYPE_1__*,int ) ;
 struct ipmmu_vmsa_domain* FUNC_1 (struct iommu_domain*) ;

__attribute__((used)) static phys_addr_t FUNC_2(struct iommu_domain *VAR_0,
          dma_addr_t VAR_1)
{
 struct ipmmu_vmsa_domain *VAR_2 = FUNC_1(VAR_0);



 return VAR_2->iop->iova_to_phys(VAR_2->iop, VAR_1);
}
