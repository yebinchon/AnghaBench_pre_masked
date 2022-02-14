
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_iommu_domain {int num_iommus; struct omap_iommu_device* iommus; int dev; } ;
struct omap_iommu_device {struct omap_iommu* iommu_dev; } ;
struct omap_iommu {int dev; } ;
struct iommu_domain {int dummy; } ;


 int FUNC_0 (int ) ;
 struct omap_iommu_domain* FUNC_1 (struct iommu_domain*) ;

int FUNC_2(struct iommu_domain *VAR_0)
{
 struct omap_iommu_domain *VAR_1 = FUNC_1(VAR_0);
 struct omap_iommu_device *VAR_2;
 struct omap_iommu *VAR_3;
 int VAR_4;

 if (!VAR_1->dev)
  return 0;

 VAR_2 = VAR_1->iommus;
 VAR_2 += (VAR_1->num_iommus - 1);
 for (VAR_4 = 0; VAR_4 < VAR_1->num_iommus; VAR_4++, VAR_2--) {
  VAR_3 = VAR_2->iommu_dev;
  FUNC_0(VAR_3->dev);
 }

 return 0;
}
