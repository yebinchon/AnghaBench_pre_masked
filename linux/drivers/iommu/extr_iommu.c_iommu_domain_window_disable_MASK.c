
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct iommu_domain {TYPE_1__* ops; } ;
struct TYPE_2__ {void (* domain_window_disable ) (struct iommu_domain*,int ) ;} ;


 void FUNC_0 (struct iommu_domain*,int ) ;
 scalar_t__ FUNC_1 (int ) ;

void FUNC_2(struct iommu_domain *VAR_0, u32 VAR_1)
{
 if (FUNC_1(VAR_0->ops->domain_window_disable == ((void*)0)))
  return;

 return VAR_0->ops->domain_window_disable(VAR_0, VAR_1);
}
