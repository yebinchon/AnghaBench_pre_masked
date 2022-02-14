
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_iommu_domain {int num_iommus; struct omap_iommu_device* iommus; } ;
struct omap_iommu_device {struct omap_iommu_device* pgtable; } ;


 int FUNC_0 (struct omap_iommu_device*) ;

__attribute__((used)) static void FUNC_1(struct omap_iommu_domain *VAR_0)
{
 int VAR_1;
 struct omap_iommu_device *VAR_2 = VAR_0->iommus;

 for (VAR_1 = 0; VAR_2 && VAR_1 < VAR_0->num_iommus; VAR_1++, VAR_2++)
  FUNC_0(VAR_2->pgtable);

 FUNC_0(VAR_0->iommus);
 VAR_0->num_iommus = 0;
 VAR_0->iommus = ((void*)0);
}
