
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_iommu_domain {scalar_t__ dev; } ;
struct iommu_domain {int dummy; } ;


 int FUNC_0 (struct omap_iommu_domain*,scalar_t__) ;
 int FUNC_1 (struct omap_iommu_domain*) ;
 struct omap_iommu_domain* FUNC_2 (struct iommu_domain*) ;

__attribute__((used)) static void FUNC_3(struct iommu_domain *VAR_0)
{
 struct omap_iommu_domain *VAR_1 = FUNC_2(VAR_0);





 if (VAR_1->dev)
  FUNC_0(VAR_1, VAR_1->dev);

 FUNC_1(VAR_1);
}
