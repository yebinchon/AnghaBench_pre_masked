
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ staged_bindings; int cmd_bounce; int res_ht; scalar_t__ res_ht_initialized; } ;
struct vmw_private {int capabilities; int * res_idr; TYPE_1__ ctx; int mmio_virt; int tdev; scalar_t__ stealth; int dev; int fman; int bdev; scalar_t__ has_mob; scalar_t__ has_gmr; scalar_t__ enable_fb; int pm_nb; } ;
struct drm_device {int pdev; } ;
typedef enum vmw_res_type { ____Placeholder_vmw_res_type } vmw_res_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct vmw_private*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (struct vmw_private*) ;
 int FUNC_13 (struct vmw_private*) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (struct vmw_private*) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (struct vmw_private*) ;
 int FUNC_18 (struct vmw_private*) ;
 struct vmw_private* FUNC_19 (struct drm_device*) ;
 int FUNC_20 (struct vmw_private*) ;
 int FUNC_21 (struct vmw_private*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_22 (struct vmw_private*) ;

__attribute__((used)) static void FUNC_23(struct drm_device *VAR_6)
{
 struct vmw_private *VAR_7 = FUNC_19(VAR_6);
 enum vmw_res_type VAR_8;

 FUNC_9(&VAR_7->pm_nb);

 if (VAR_7->ctx.res_ht_initialized)
  FUNC_0(&VAR_7->ctx.res_ht);
 FUNC_10(VAR_7->ctx.cmd_bounce);
 if (VAR_7->enable_fb) {
  FUNC_13(VAR_7);
  FUNC_12(VAR_7);
  FUNC_15(VAR_7);
  FUNC_22(VAR_7);
 }

 FUNC_17(VAR_7);
 FUNC_18(VAR_7);

 if (VAR_7->has_gmr)
  (void)FUNC_6(&VAR_7->bdev, VAR_2);
 (void)FUNC_6(&VAR_7->bdev, VAR_1);

 FUNC_20(VAR_7);
 if (VAR_7->has_mob)
  (void) FUNC_6(&VAR_7->bdev, VAR_3);
 (void) FUNC_7(&VAR_7->bdev);
 FUNC_21(VAR_7);
 FUNC_14(VAR_7->fman);
 if (VAR_7->capabilities & VAR_0)
  FUNC_16(VAR_7->dev);
 if (VAR_7->stealth)
  FUNC_4(VAR_6->pdev, 2);
 else
  FUNC_5(VAR_6->pdev);

 FUNC_8(&VAR_7->tdev);
 FUNC_3(VAR_7->mmio_virt);
 if (VAR_7->ctx.staged_bindings)
  FUNC_11(VAR_7->ctx.staged_bindings);

 for (VAR_8 = VAR_4; VAR_8 < VAR_5; ++VAR_8)
  FUNC_1(&VAR_7->res_idr[VAR_8]);

 FUNC_2(VAR_7);
}
