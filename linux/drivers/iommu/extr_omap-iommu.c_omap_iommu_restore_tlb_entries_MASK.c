
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_iommu {int num_cr_ctx; struct cr_regs* cr_ctx; } ;
struct iotlb_lock {int base; int vict; } ;
struct cr_regs {int dummy; } ;


 int FUNC_0 (struct omap_iommu*,struct cr_regs*) ;
 int FUNC_1 (struct omap_iommu*,struct iotlb_lock*) ;

__attribute__((used)) static void FUNC_2(struct omap_iommu *VAR_0)
{
 struct iotlb_lock VAR_1;
 struct cr_regs *VAR_2;
 int VAR_3;


 if (!VAR_0->num_cr_ctx)
  return;

 VAR_1.base = 0;
 VAR_2 = VAR_0->cr_ctx;
 for (VAR_3 = 0; VAR_3 < VAR_0->num_cr_ctx; VAR_3++, VAR_2++) {
  VAR_1.vict = VAR_3;
  FUNC_1(VAR_0, &VAR_1);
  FUNC_0(VAR_0, VAR_2);
 }
 VAR_1.base = VAR_0->num_cr_ctx;
 VAR_1.vict = VAR_3;
 FUNC_1(VAR_0, &VAR_1);
}
