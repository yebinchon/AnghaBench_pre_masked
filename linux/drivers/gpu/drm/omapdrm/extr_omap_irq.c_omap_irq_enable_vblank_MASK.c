
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omap_drm_private {int wait_lock; int dispc; TYPE_1__* dispc_ops; int irq_mask; } ;
struct drm_device {struct omap_drm_private* dev_private; } ;
struct drm_crtc {struct drm_device* dev; } ;
typedef enum omap_channel { ____Placeholder_omap_channel } omap_channel ;
struct TYPE_2__ {int (* mgr_get_vsync_irq ) (int ,int) ;} ;


 int FUNC_0 (char*,struct drm_device*,int) ;
 int FUNC_1 (struct drm_crtc*) ;
 int FUNC_2 (struct drm_device*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int ,int) ;

int FUNC_6(struct drm_crtc *VAR_0)
{
 struct drm_device *VAR_1 = VAR_0->dev;
 struct omap_drm_private *VAR_2 = VAR_1->dev_private;
 unsigned long VAR_3;
 enum omap_channel VAR_4 = FUNC_1(VAR_0);

 FUNC_0("dev=%p, crtc=%u", VAR_1, VAR_4);

 FUNC_3(&VAR_2->wait_lock, VAR_3);
 VAR_2->irq_mask |= VAR_2->dispc_ops->mgr_get_vsync_irq(VAR_2->dispc,
            VAR_4);
 FUNC_2(VAR_1);
 FUNC_4(&VAR_2->wait_lock, VAR_3);

 return 0;
}
