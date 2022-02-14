
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iommu_domain {int dummy; } ;
struct gart_device {scalar_t__ active_devices; int dom_lock; int * active_domain; } ;
struct TYPE_2__ {struct iommu_domain* iommu; } ;
struct device {TYPE_1__ archdata; } ;


 struct gart_device* VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct iommu_domain *VAR_1,
      struct device *VAR_2)
{
 struct gart_device *VAR_3 = VAR_0;

 FUNC_0(&VAR_3->dom_lock);

 if (VAR_2->archdata.iommu == VAR_1) {
  VAR_2->archdata.iommu = ((void*)0);

  if (--VAR_3->active_devices == 0)
   VAR_3->active_domain = ((void*)0);
 }

 FUNC_1(&VAR_3->dom_lock);
}
