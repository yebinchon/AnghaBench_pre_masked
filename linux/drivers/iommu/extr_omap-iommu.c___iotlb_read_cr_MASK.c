
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_iommu {int dummy; } ;
struct iotlb_lock {int vict; } ;
struct cr_regs {int dummy; } ;


 int FUNC_0 (struct omap_iommu*,struct iotlb_lock*) ;
 int FUNC_1 (struct omap_iommu*,struct iotlb_lock*) ;
 int FUNC_2 (struct omap_iommu*,struct cr_regs*) ;

struct cr_regs FUNC_3(struct omap_iommu *VAR_0, int VAR_1)
{
 struct cr_regs VAR_2;
 struct iotlb_lock VAR_3;

 FUNC_0(VAR_0, &VAR_3);
 VAR_3.vict = VAR_1;
 FUNC_1(VAR_0, &VAR_3);
 FUNC_2(VAR_0, &VAR_2);

 return VAR_2;
}
