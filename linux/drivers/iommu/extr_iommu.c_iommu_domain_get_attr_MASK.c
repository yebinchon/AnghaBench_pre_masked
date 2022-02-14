
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iommu_domain_geometry {int dummy; } ;
struct iommu_domain {unsigned long pgsize_bitmap; TYPE_1__* ops; struct iommu_domain_geometry geometry; } ;
typedef enum iommu_attr { ____Placeholder_iommu_attr } iommu_attr ;
struct TYPE_2__ {int (* domain_get_attr ) (struct iommu_domain*,int,void*) ;} ;




 int VAR_0 ;
 int FUNC_0 (struct iommu_domain*,int,void*) ;

int FUNC_1(struct iommu_domain *VAR_1,
     enum iommu_attr VAR_2, void *VAR_3)
{
 struct iommu_domain_geometry *VAR_4;
 bool *VAR_5;
 int VAR_6 = 0;

 switch (VAR_2) {
 case 129:
  VAR_4 = VAR_3;
  *VAR_4 = VAR_1->geometry;

  break;
 case 128:
  VAR_5 = VAR_3;
  *VAR_5 = (VAR_1->pgsize_bitmap != 0UL);
  break;
 default:
  if (!VAR_1->ops->domain_get_attr)
   return -VAR_0;

  VAR_6 = VAR_1->ops->domain_get_attr(VAR_1, VAR_2, VAR_3);
 }

 return VAR_6;
}
