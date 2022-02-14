
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iommu_domain {TYPE_1__* ops; } ;
typedef enum iommu_attr { ____Placeholder_iommu_attr } iommu_attr ;
struct TYPE_2__ {int (* domain_set_attr ) (struct iommu_domain*,int,void*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct iommu_domain*,int,void*) ;

int FUNC_1(struct iommu_domain *VAR_1,
     enum iommu_attr VAR_2, void *VAR_3)
{
 int VAR_4 = 0;

 switch (VAR_2) {
 default:
  if (VAR_1->ops->domain_set_attr == ((void*)0))
   return -VAR_0;

  VAR_4 = VAR_1->ops->domain_set_attr(VAR_1, VAR_2, VAR_3);
 }

 return VAR_4;
}
