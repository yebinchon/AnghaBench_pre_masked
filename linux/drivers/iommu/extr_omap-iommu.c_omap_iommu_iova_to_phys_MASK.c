
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct omap_iommu_domain {struct omap_iommu_device* iommus; } ;
struct omap_iommu_device {struct omap_iommu* iommu_dev; } ;
struct omap_iommu {struct device* dev; } ;
struct iommu_domain {int dummy; } ;
struct device {int dummy; } ;
typedef int phys_addr_t ;
typedef scalar_t__ dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*,char*,int ,unsigned long long) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct omap_iommu*,scalar_t__,int **,int **) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ,scalar_t__,int ) ;
 struct omap_iommu_domain* FUNC_7 (struct iommu_domain*) ;

__attribute__((used)) static phys_addr_t FUNC_8(struct iommu_domain *VAR_4,
        dma_addr_t VAR_5)
{
 struct omap_iommu_domain *VAR_6 = FUNC_7(VAR_4);
 struct omap_iommu_device *VAR_7 = VAR_6->iommus;
 struct omap_iommu *VAR_8 = VAR_7->iommu_dev;
 struct device *VAR_9 = VAR_8->dev;
 u32 *VAR_10, *VAR_11;
 phys_addr_t VAR_12 = 0;





 FUNC_3(VAR_8, VAR_5, &VAR_10, &VAR_11);

 if (VAR_11) {
  if (FUNC_5(*VAR_11))
   VAR_12 = FUNC_6(*VAR_11, VAR_5, VAR_1);
  else if (FUNC_4(*VAR_11))
   VAR_12 = FUNC_6(*VAR_11, VAR_5, VAR_0);
  else
   FUNC_0(VAR_9, "bogus pte 0x%x, da 0x%llx", *VAR_11,
    (unsigned long long)VAR_5);
 } else {
  if (FUNC_1(*VAR_10))
   VAR_12 = FUNC_6(*VAR_10, VAR_5, VAR_2);
  else if (FUNC_2(*VAR_10))
   VAR_12 = FUNC_6(*VAR_10, VAR_5, VAR_3);
  else
   FUNC_0(VAR_9, "bogus pgd 0x%x, da 0x%llx", *VAR_10,
    (unsigned long long)VAR_5);
 }

 return VAR_12;
}
