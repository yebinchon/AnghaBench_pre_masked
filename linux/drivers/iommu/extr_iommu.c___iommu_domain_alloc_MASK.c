
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iommu_domain {unsigned int type; int pgsize_bitmap; TYPE_1__* ops; } ;
struct bus_type {TYPE_1__* iommu_ops; } ;
struct TYPE_2__ {int pgsize_bitmap; struct iommu_domain* (* domain_alloc ) (unsigned int) ;} ;


 struct iommu_domain* FUNC_0 (unsigned int) ;

__attribute__((used)) static struct iommu_domain *FUNC_1(struct bus_type *VAR_0,
       unsigned VAR_1)
{
 struct iommu_domain *VAR_2;

 if (VAR_0 == ((void*)0) || VAR_0->iommu_ops == ((void*)0))
  return ((void*)0);

 VAR_2 = VAR_0->iommu_ops->domain_alloc(VAR_1);
 if (!VAR_2)
  return ((void*)0);

 VAR_2->ops = VAR_0->iommu_ops;
 VAR_2->type = VAR_1;

 VAR_2->pgsize_bitmap = VAR_0->iommu_ops->pgsize_bitmap;

 return VAR_2;
}
