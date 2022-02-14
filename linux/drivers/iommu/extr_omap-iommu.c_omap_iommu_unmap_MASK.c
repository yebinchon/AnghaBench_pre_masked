
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_iommu_domain {int num_iommus; struct omap_iommu_device* iommus; struct device* dev; } ;
struct omap_iommu_device {struct omap_iommu* iommu_dev; } ;
struct omap_iommu {int dummy; } ;
struct iommu_iotlb_gather {int dummy; } ;
struct iommu_domain {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,char*,unsigned long,size_t) ;
 size_t FUNC_1 (struct omap_iommu*,unsigned long) ;
 struct omap_iommu_domain* FUNC_2 (struct iommu_domain*) ;

__attribute__((used)) static size_t FUNC_3(struct iommu_domain *VAR_0, unsigned long VAR_1,
          size_t VAR_2, struct iommu_iotlb_gather *VAR_3)
{
 struct omap_iommu_domain *VAR_4 = FUNC_2(VAR_0);
 struct device *VAR_5 = VAR_4->dev;
 struct omap_iommu_device *VAR_6;
 struct omap_iommu *VAR_7;
 bool VAR_8 = 0;
 size_t VAR_9 = 0;
 int VAR_10;

 FUNC_0(VAR_5, "unmapping da 0x%lx size %u\n", VAR_1, VAR_2);

 VAR_6 = VAR_4->iommus;
 for (VAR_10 = 0; VAR_10 < VAR_4->num_iommus; VAR_10++, VAR_6++) {
  VAR_7 = VAR_6->iommu_dev;
  VAR_9 = FUNC_1(VAR_7, VAR_1);
  if (!VAR_9)
   VAR_8 = 1;
 }







 return VAR_8 ? 0 : VAR_9;
}
