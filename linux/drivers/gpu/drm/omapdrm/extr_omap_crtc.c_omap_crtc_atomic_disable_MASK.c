
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct omap_drm_private {int dispc; TYPE_2__* dispc_ops; } ;
struct omap_crtc {int update_work; int name; } ;
struct drm_device {int dev; int event_lock; struct omap_drm_private* dev_private; } ;
struct drm_crtc_state {int dummy; } ;
struct drm_crtc {struct drm_device* dev; TYPE_1__* state; } ;
struct TYPE_4__ {int (* runtime_put ) (int ) ;} ;
struct TYPE_3__ {int * event; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct drm_crtc*,int *) ;
 int FUNC_4 (struct drm_crtc*) ;
 int FUNC_5 (struct drm_crtc*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 struct omap_crtc* FUNC_9 (struct drm_crtc*) ;

__attribute__((used)) static void FUNC_10(struct drm_crtc *VAR_0,
         struct drm_crtc_state *VAR_1)
{
 struct omap_drm_private *VAR_2 = VAR_0->dev->dev_private;
 struct omap_crtc *VAR_3 = FUNC_9(VAR_0);
 struct drm_device *VAR_4 = VAR_0->dev;

 FUNC_0("%s", VAR_3->name);

 FUNC_6(&VAR_0->dev->event_lock);
 if (VAR_0->state->event) {
  FUNC_3(VAR_0, VAR_0->state->event);
  VAR_0->state->event = ((void*)0);
 }
 FUNC_7(&VAR_0->dev->event_lock);

 FUNC_1(&VAR_3->update_work);

 if (!FUNC_5(VAR_0))
  FUNC_2(VAR_4->dev, "manual display update did not finish!");

 FUNC_4(VAR_0);

 VAR_2->dispc_ops->runtime_put(VAR_2->dispc);
}
