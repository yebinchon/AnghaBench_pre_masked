
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iommu_sva {TYPE_2__* dev; } ;
struct iommu_ops {int (* sva_get_pasid ) (struct iommu_sva*) ;} ;
struct TYPE_4__ {TYPE_1__* bus; } ;
struct TYPE_3__ {struct iommu_ops* iommu_ops; } ;


 int VAR_0 ;
 int FUNC_0 (struct iommu_sva*) ;

int FUNC_1(struct iommu_sva *VAR_1)
{
 const struct iommu_ops *VAR_2 = VAR_1->dev->bus->iommu_ops;

 if (!VAR_2 || !VAR_2->sva_get_pasid)
  return VAR_0;

 return VAR_2->sva_get_pasid(VAR_1);
}
