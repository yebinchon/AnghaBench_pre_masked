
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ipmmu_vmsa_domain {TYPE_1__* iop; } ;
struct iommu_iotlb_gather {int dummy; } ;
struct iommu_domain {int dummy; } ;
struct TYPE_2__ {size_t (* unmap ) (TYPE_1__*,unsigned long,size_t,struct iommu_iotlb_gather*) ;} ;


 size_t FUNC_0 (TYPE_1__*,unsigned long,size_t,struct iommu_iotlb_gather*) ;
 struct ipmmu_vmsa_domain* FUNC_1 (struct iommu_domain*) ;

__attribute__((used)) static size_t FUNC_2(struct iommu_domain *VAR_0, unsigned long VAR_1,
     size_t VAR_2, struct iommu_iotlb_gather *VAR_3)
{
 struct ipmmu_vmsa_domain *VAR_4 = FUNC_1(VAR_0);

 return VAR_4->iop->unmap(VAR_4->iop, VAR_1, VAR_2, VAR_3);
}
