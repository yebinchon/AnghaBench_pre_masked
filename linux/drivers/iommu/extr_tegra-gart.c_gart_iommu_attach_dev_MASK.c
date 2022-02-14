
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iommu_domain {int dummy; } ;
struct gart_device {int dom_lock; int active_devices; struct iommu_domain* active_domain; } ;
struct TYPE_2__ {struct iommu_domain* iommu; } ;
struct device {TYPE_1__ archdata; } ;


 int VAR_0 ;
 struct gart_device* VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct iommu_domain *VAR_2,
     struct device *VAR_3)
{
 struct gart_device *VAR_4 = VAR_1;
 int VAR_5 = 0;

 FUNC_0(&VAR_4->dom_lock);

 if (VAR_4->active_domain && VAR_4->active_domain != VAR_2) {
  VAR_5 = -VAR_0;
 } else if (VAR_3->archdata.iommu != VAR_2) {
  VAR_3->archdata.iommu = VAR_2;
  VAR_4->active_domain = VAR_2;
  VAR_4->active_devices++;
 }

 FUNC_1(&VAR_4->dom_lock);

 return VAR_5;
}
