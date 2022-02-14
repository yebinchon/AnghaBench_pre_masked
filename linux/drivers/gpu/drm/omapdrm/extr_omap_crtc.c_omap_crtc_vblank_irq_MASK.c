
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct omap_drm_private {int dispc; TYPE_2__* dispc_ops; } ;
struct TYPE_4__ {struct drm_device* dev; } ;
struct omap_crtc {int pending; int name; int pending_wait; int * event; int channel; TYPE_1__ base; } ;
struct drm_device {struct omap_drm_private* dev_private; } ;
struct drm_crtc {TYPE_3__* dev; } ;
struct TYPE_6__ {int event_lock; } ;
struct TYPE_5__ {scalar_t__ (* mgr_go_busy ) (int ,int ) ;} ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct drm_crtc*,int *) ;
 int FUNC_2 (struct drm_crtc*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 struct omap_crtc* FUNC_6 (struct drm_crtc*) ;
 int FUNC_7 (int *) ;

void FUNC_8(struct drm_crtc *VAR_0)
{
 struct omap_crtc *VAR_1 = FUNC_6(VAR_0);
 struct drm_device *VAR_2 = VAR_1->base.dev;
 struct omap_drm_private *VAR_3 = VAR_2->dev_private;
 bool VAR_4;

 FUNC_3(&VAR_0->dev->event_lock);




 if (VAR_3->dispc_ops->mgr_go_busy(VAR_3->dispc, VAR_1->channel)) {
  FUNC_4(&VAR_0->dev->event_lock);
  return;
 }


 if (VAR_1->event) {
  FUNC_1(VAR_0, VAR_1->event);
  VAR_1->event = ((void*)0);
 }

 VAR_4 = VAR_1->pending;
 VAR_1->pending = 0;
 FUNC_4(&VAR_0->dev->event_lock);

 if (VAR_4)
  FUNC_2(VAR_0);


 FUNC_7(&VAR_1->pending_wait);

 FUNC_0("%s: apply done", VAR_1->name);
}
