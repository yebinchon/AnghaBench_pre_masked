
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct omap_iommu {int dummy; } ;
struct iotlb_lock {int vict; int base; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct omap_iommu*,int ) ;

void FUNC_3(struct omap_iommu *VAR_1, struct iotlb_lock *VAR_2)
{
 u32 VAR_3;

 VAR_3 = FUNC_2(VAR_1, VAR_0);

 VAR_2->base = FUNC_0(VAR_3);
 VAR_2->vict = FUNC_1(VAR_3);
}
