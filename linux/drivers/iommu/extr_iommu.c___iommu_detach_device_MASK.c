
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iommu_domain {TYPE_1__* ops; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int (* detach_dev ) (struct iommu_domain*,struct device*) ;scalar_t__ (* is_attach_deferred ) (struct iommu_domain*,struct device*) ;} ;


 scalar_t__ FUNC_0 (struct iommu_domain*,struct device*) ;
 int FUNC_1 (struct iommu_domain*,struct device*) ;
 int FUNC_2 (struct device*) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct iommu_domain *VAR_0,
      struct device *VAR_1)
{
 if ((VAR_0->ops->is_attach_deferred != ((void*)0)) &&
     VAR_0->ops->is_attach_deferred(VAR_0, VAR_1))
  return;

 if (FUNC_3(VAR_0->ops->detach_dev == ((void*)0)))
  return;

 VAR_0->ops->detach_dev(VAR_0, VAR_1);
 FUNC_2(VAR_1);
}
