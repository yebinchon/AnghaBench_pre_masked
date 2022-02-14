
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct omap_drm_private {int dispc; TYPE_1__* dispc_ops; } ;
struct omap_crtc_state {scalar_t__ manually_updated; } ;
struct omap_crtc {int name; } ;
struct drm_crtc_state {int dummy; } ;
struct drm_crtc {TYPE_2__* dev; int state; } ;
struct TYPE_4__ {int event_lock; struct omap_drm_private* dev_private; } ;
struct TYPE_3__ {int (* runtime_get ) (int ) ;} ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct drm_crtc*) ;
 int FUNC_3 (struct drm_crtc*) ;
 int FUNC_4 (struct drm_crtc*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 struct omap_crtc* FUNC_8 (struct drm_crtc*) ;
 struct omap_crtc_state* FUNC_9 (int ) ;

__attribute__((used)) static void FUNC_10(struct drm_crtc *VAR_0,
        struct drm_crtc_state *VAR_1)
{
 struct omap_drm_private *VAR_2 = VAR_0->dev->dev_private;
 struct omap_crtc *VAR_3 = FUNC_8(VAR_0);
 struct omap_crtc_state *VAR_4 = FUNC_9(VAR_0->state);
 int VAR_5;

 FUNC_0("%s", VAR_3->name);

 VAR_2->dispc_ops->runtime_get(VAR_2->dispc);


 if (VAR_4->manually_updated)
  return;

 FUNC_5(&VAR_0->dev->event_lock);
 FUNC_3(VAR_0);
 VAR_5 = FUNC_2(VAR_0);
 FUNC_1(VAR_5 != 0);

 FUNC_4(VAR_0);
 FUNC_6(&VAR_0->dev->event_lock);
}
