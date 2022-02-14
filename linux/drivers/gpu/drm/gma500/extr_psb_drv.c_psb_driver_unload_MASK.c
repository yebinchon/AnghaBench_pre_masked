
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct psb_gtt {int sem; int mmu_gatt_start; } ;
struct drm_psb_private {int vram_stolen_size; int lpc_pdev; int aux_pdev; int * aux_reg; int * sgx_reg; int * vdc_reg; int * scratch_page; int * mmu; struct psb_gtt gtt; int * pf_pd; TYPE_1__* ops; scalar_t__ backlight_device; } ;
struct drm_device {struct drm_psb_private* dev_private; } ;
struct TYPE_2__ {int (* chip_teardown ) (struct drm_device*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct drm_device*) ;
 int FUNC_3 (struct drm_device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct drm_psb_private*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct drm_device*) ;
 int FUNC_8 (struct drm_device*) ;
 int FUNC_9 (struct drm_device*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ,int ,int) ;
 int FUNC_14 (struct drm_device*) ;
 int FUNC_15 (int *,int) ;
 int FUNC_16 (struct drm_device*) ;
 int FUNC_17 (int *) ;

__attribute__((used)) static void FUNC_18(struct drm_device *VAR_1)
{
 struct drm_psb_private *VAR_2 = VAR_1->dev_private;



 if (VAR_2) {
  if (VAR_2->backlight_device)
   FUNC_2(VAR_1);
  FUNC_14(VAR_1);

  if (VAR_2->ops->chip_teardown)
   VAR_2->ops->chip_teardown(VAR_1);

  FUNC_9(VAR_1);

  if (VAR_2->pf_pd) {
   FUNC_11(VAR_2->pf_pd);
   VAR_2->pf_pd = ((void*)0);
  }
  if (VAR_2->mmu) {
   struct psb_gtt *VAR_3 = &VAR_2->gtt;

   FUNC_1(&VAR_3->sem);
   FUNC_13(
    FUNC_12
    (VAR_2->mmu),
    VAR_3->mmu_gatt_start,
    VAR_2->vram_stolen_size >> VAR_0);
   FUNC_17(&VAR_3->sem);
   FUNC_10(VAR_2->mmu);
   VAR_2->mmu = ((void*)0);
  }
  FUNC_7(VAR_1);
  if (VAR_2->scratch_page) {
   FUNC_15(VAR_2->scratch_page, 1);
   FUNC_0(VAR_2->scratch_page);
   VAR_2->scratch_page = ((void*)0);
  }
  if (VAR_2->vdc_reg) {
   FUNC_4(VAR_2->vdc_reg);
   VAR_2->vdc_reg = ((void*)0);
  }
  if (VAR_2->sgx_reg) {
   FUNC_4(VAR_2->sgx_reg);
   VAR_2->sgx_reg = ((void*)0);
  }
  if (VAR_2->aux_reg) {
   FUNC_4(VAR_2->aux_reg);
   VAR_2->aux_reg = ((void*)0);
  }
  FUNC_6(VAR_2->aux_pdev);
  FUNC_6(VAR_2->lpc_pdev);


  FUNC_8(VAR_1);

  FUNC_5(VAR_2);
  VAR_1->dev_private = ((void*)0);
 }
 FUNC_3(VAR_1);
}
