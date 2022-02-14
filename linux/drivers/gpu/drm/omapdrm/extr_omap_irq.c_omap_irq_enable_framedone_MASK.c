
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omap_drm_private {int irq_mask; int wait_lock; int dispc; TYPE_1__* dispc_ops; } ;
struct drm_device {struct omap_drm_private* dev_private; } ;
struct drm_crtc {struct drm_device* dev; } ;
typedef enum omap_channel { ____Placeholder_omap_channel } omap_channel ;
struct TYPE_2__ {int (* mgr_get_framedone_irq ) (int ,int) ;} ;


 int FUNC_0 (char*,struct drm_device*,int,int) ;
 int FUNC_1 (struct drm_crtc*) ;
 int FUNC_2 (struct drm_device*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int ,int) ;

int FUNC_6(struct drm_crtc *VAR_0, bool VAR_1)
{
 struct drm_device *VAR_2 = VAR_0->dev;
 struct omap_drm_private *VAR_3 = VAR_2->dev_private;
 unsigned long VAR_4;
 enum omap_channel VAR_5 = FUNC_1(VAR_0);
 int VAR_6 =
  VAR_3->dispc_ops->mgr_get_framedone_irq(VAR_3->dispc, VAR_5);

 FUNC_0("dev=%p, crtc=%u, enable=%d", VAR_2, VAR_5, VAR_1);

 FUNC_3(&VAR_3->wait_lock, VAR_4);
 if (VAR_1)
  VAR_3->irq_mask |= VAR_6;
 else
  VAR_3->irq_mask &= ~VAR_6;
 FUNC_2(VAR_2);
 FUNC_4(&VAR_3->wait_lock, VAR_4);

 return 0;
}
