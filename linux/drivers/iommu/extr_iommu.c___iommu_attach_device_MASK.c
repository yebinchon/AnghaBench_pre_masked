
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iommu_domain {TYPE_1__* ops; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int (* attach_dev ) (struct iommu_domain*,struct device*) ;scalar_t__ (* is_attach_deferred ) (struct iommu_domain*,struct device*) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct iommu_domain*,struct device*) ;
 int FUNC_1 (struct iommu_domain*,struct device*) ;
 int FUNC_2 (struct device*) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct iommu_domain *VAR_1,
     struct device *VAR_2)
{
 int VAR_3;
 if ((VAR_1->ops->is_attach_deferred != ((void*)0)) &&
     VAR_1->ops->is_attach_deferred(VAR_1, VAR_2))
  return 0;

 if (FUNC_3(VAR_1->ops->attach_dev == ((void*)0)))
  return -VAR_0;

 VAR_3 = VAR_1->ops->attach_dev(VAR_1, VAR_2);
 if (!VAR_3)
  FUNC_2(VAR_2);
 return VAR_3;
}
