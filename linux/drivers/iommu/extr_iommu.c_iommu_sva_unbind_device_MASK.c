
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iommu_sva {struct device* dev; } ;
struct iommu_ops {int (* sva_unbind ) (struct iommu_sva*) ;} ;
struct iommu_group {int mutex; } ;
struct device {TYPE_1__* bus; } ;
struct TYPE_2__ {struct iommu_ops* iommu_ops; } ;


 struct iommu_group* FUNC_0 (struct device*) ;
 int FUNC_1 (struct iommu_group*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct iommu_sva*) ;

void FUNC_5(struct iommu_sva *VAR_0)
{
 struct iommu_group *VAR_1;
 struct device *VAR_2 = VAR_0->dev;
 const struct iommu_ops *VAR_3 = VAR_2->bus->iommu_ops;

 if (!VAR_3 || !VAR_3->sva_unbind)
  return;

 VAR_1 = FUNC_0(VAR_2);
 if (!VAR_1)
  return;

 FUNC_2(&VAR_1->mutex);
 VAR_3->sva_unbind(VAR_0);
 FUNC_3(&VAR_1->mutex);

 FUNC_1(VAR_1);
}
