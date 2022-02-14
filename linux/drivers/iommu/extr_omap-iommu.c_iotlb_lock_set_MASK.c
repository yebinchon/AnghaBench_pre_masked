
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct omap_iommu {int dummy; } ;
struct iotlb_lock {int base; int vict; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct omap_iommu*,int,int ) ;

void FUNC_1(struct omap_iommu *VAR_3, struct iotlb_lock *VAR_4)
{
 u32 VAR_5;

 VAR_5 = (VAR_4->base << VAR_1);
 VAR_5 |= (VAR_4->vict << VAR_2);

 FUNC_0(VAR_3, VAR_5, VAR_0);
}
