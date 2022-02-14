
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_iommu_domain {int lock; } ;
struct iommu_domain {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct omap_iommu_domain*,struct device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct omap_iommu_domain* FUNC_3 (struct iommu_domain*) ;

__attribute__((used)) static void FUNC_4(struct iommu_domain *VAR_0,
      struct device *VAR_1)
{
 struct omap_iommu_domain *VAR_2 = FUNC_3(VAR_0);

 FUNC_1(&VAR_2->lock);
 FUNC_0(VAR_2, VAR_1);
 FUNC_2(&VAR_2->lock);
}
