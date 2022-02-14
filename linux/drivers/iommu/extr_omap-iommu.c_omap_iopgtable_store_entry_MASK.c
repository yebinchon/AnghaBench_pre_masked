
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_iommu {int dummy; } ;
struct iotlb_entry {int da; } ;


 int FUNC_0 (struct omap_iommu*,int ) ;
 int FUNC_1 (struct omap_iommu*,struct iotlb_entry*) ;
 int FUNC_2 (struct omap_iommu*,struct iotlb_entry*) ;

__attribute__((used)) static int
FUNC_3(struct omap_iommu *VAR_0, struct iotlb_entry *VAR_1)
{
 int VAR_2;

 FUNC_0(VAR_0, VAR_1->da);
 VAR_2 = FUNC_1(VAR_0, VAR_1);
 if (!VAR_2)
  FUNC_2(VAR_0, VAR_1);
 return VAR_2;
}
