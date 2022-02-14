
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct fimd_context {TYPE_1__* crtc; int irq_flags; int wait_vsync_queue; int wait_vsync_event; int dev; int win_updated; int drm_dev; TYPE_2__* driver_data; } ;
struct exynos_drm_crtc {struct fimd_context* ctx; } ;
struct TYPE_4__ {scalar_t__ trg_type; } ;
struct TYPE_3__ {int base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,int,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct exynos_drm_crtc *VAR_1)
{
 struct fimd_context *VAR_2 = VAR_1->ctx;
 u32 VAR_3 = VAR_2->driver_data->trg_type;


 if (!VAR_2->drm_dev)
  return;

 if (VAR_3 == VAR_0)
  goto out;





 if (FUNC_0(&VAR_2->win_updated, -1, 0))
  FUNC_4(VAR_2->dev);

out:

 if (FUNC_1(&VAR_2->wait_vsync_event)) {
  FUNC_2(&VAR_2->wait_vsync_event, 0);
  FUNC_6(&VAR_2->wait_vsync_queue);
 }

 if (FUNC_5(0, &VAR_2->irq_flags))
  FUNC_3(&VAR_2->crtc->base);
}
