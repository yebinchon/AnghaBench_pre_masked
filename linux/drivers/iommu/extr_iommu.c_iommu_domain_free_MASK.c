
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iommu_domain {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* domain_free ) (struct iommu_domain*) ;} ;


 int FUNC_0 (struct iommu_domain*) ;

void FUNC_1(struct iommu_domain *VAR_0)
{
 VAR_0->ops->domain_free(VAR_0);
}
