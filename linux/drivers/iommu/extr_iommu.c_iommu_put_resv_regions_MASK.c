
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct list_head {int dummy; } ;
struct iommu_ops {int (* put_resv_regions ) (struct device*,struct list_head*) ;} ;
struct device {TYPE_1__* bus; } ;
struct TYPE_2__ {struct iommu_ops* iommu_ops; } ;


 int FUNC_0 (struct device*,struct list_head*) ;

void FUNC_1(struct device *VAR_0, struct list_head *VAR_1)
{
 const struct iommu_ops *VAR_2 = VAR_0->bus->iommu_ops;

 if (VAR_2 && VAR_2->put_resv_regions)
  VAR_2->put_resv_regions(VAR_0, VAR_1);
}
