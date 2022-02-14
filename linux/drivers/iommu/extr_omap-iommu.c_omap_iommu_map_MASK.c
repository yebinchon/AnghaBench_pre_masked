
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct omap_iommu_domain {int num_iommus; struct omap_iommu_device* iommus; struct device* dev; } ;
struct omap_iommu_device {struct omap_iommu* iommu_dev; } ;
struct omap_iommu {int dummy; } ;
struct iotlb_entry {int dummy; } ;
struct iommu_domain {int dummy; } ;
struct device {int dummy; } ;
typedef int phys_addr_t ;


 int VAR_0 ;
 int FUNC_0 (size_t) ;
 int FUNC_1 (struct device*,char*,unsigned long,int *,size_t) ;
 int FUNC_2 (struct device*,char*,size_t) ;
 int FUNC_3 (struct omap_iommu*,unsigned long) ;
 int FUNC_4 (struct iotlb_entry*,unsigned long,int ,int) ;
 size_t FUNC_5 (struct omap_iommu*,struct iotlb_entry*) ;
 struct omap_iommu_domain* FUNC_6 (struct iommu_domain*) ;

__attribute__((used)) static int FUNC_7(struct iommu_domain *VAR_1, unsigned long VAR_2,
     phys_addr_t VAR_3, size_t VAR_4, int VAR_5)
{
 struct omap_iommu_domain *VAR_6 = FUNC_6(VAR_1);
 struct device *VAR_7 = VAR_6->dev;
 struct omap_iommu_device *VAR_8;
 struct omap_iommu *VAR_9;
 struct iotlb_entry VAR_10;
 int VAR_11;
 u32 VAR_12 = -VAR_0;
 int VAR_13;

 VAR_11 = FUNC_0(VAR_4);
 if (VAR_11 < 0) {
  FUNC_2(VAR_7, "invalid size to map: %d\n", VAR_4);
  return -VAR_0;
 }

 FUNC_1(VAR_7, "mapping da 0x%lx to pa %pa size 0x%x\n", VAR_2, &VAR_3, VAR_4);

 FUNC_4(&VAR_10, VAR_2, VAR_3, VAR_11);

 VAR_8 = VAR_6->iommus;
 for (VAR_13 = 0; VAR_13 < VAR_6->num_iommus; VAR_13++, VAR_8++) {
  VAR_9 = VAR_8->iommu_dev;
  VAR_12 = FUNC_5(VAR_9, &VAR_10);
  if (VAR_12) {
   FUNC_2(VAR_7, "omap_iopgtable_store_entry failed: %d\n",
    VAR_12);
   break;
  }
 }

 if (VAR_12) {
  while (VAR_13--) {
   VAR_8--;
   VAR_9 = VAR_8->iommu_dev;
   FUNC_3(VAR_9, VAR_2);
  }
 }

 return VAR_12;
}
