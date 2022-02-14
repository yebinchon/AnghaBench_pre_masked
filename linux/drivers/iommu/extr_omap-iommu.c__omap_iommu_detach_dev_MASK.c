
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omap_iommu_domain {int num_iommus; struct device* dev; struct omap_iommu_device* iommus; } ;
struct omap_iommu_device {struct omap_iommu* iommu_dev; } ;
struct omap_iommu_arch_data {int dummy; } ;
struct omap_iommu {int * domain; } ;
struct TYPE_2__ {struct omap_iommu_arch_data* iommu; } ;
struct device {TYPE_1__ archdata; } ;


 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct omap_iommu*) ;
 int FUNC_2 (struct omap_iommu*) ;
 int FUNC_3 (struct omap_iommu_domain*) ;

__attribute__((used)) static void FUNC_4(struct omap_iommu_domain *VAR_0,
       struct device *VAR_1)
{
 struct omap_iommu_arch_data *VAR_2 = VAR_1->archdata.iommu;
 struct omap_iommu_device *VAR_3 = VAR_0->iommus;
 struct omap_iommu *VAR_4;
 int VAR_5;

 if (!VAR_0->dev) {
  FUNC_0(VAR_1, "domain has no attached device\n");
  return;
 }


 if (VAR_0->dev != VAR_1) {
  FUNC_0(VAR_1, "invalid attached device\n");
  return;
 }





 VAR_3 += (VAR_0->num_iommus - 1);
 VAR_2 += (VAR_0->num_iommus - 1);
 for (VAR_5 = 0; VAR_5 < VAR_0->num_iommus; VAR_5++, VAR_3--, VAR_2--) {
  VAR_4 = VAR_3->iommu_dev;
  FUNC_1(VAR_4);

  FUNC_2(VAR_4);
  VAR_3->iommu_dev = ((void*)0);
  VAR_4->domain = ((void*)0);
 }

 FUNC_3(VAR_0);

 VAR_0->dev = ((void*)0);
}
