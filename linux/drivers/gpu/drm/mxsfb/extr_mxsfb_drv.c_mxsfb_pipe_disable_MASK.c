
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mxsfb_drm_private {int panel; } ;
struct drm_crtc {TYPE_1__* state; } ;
struct TYPE_4__ {struct drm_device* dev; } ;
struct drm_simple_display_pipe {struct drm_crtc crtc; TYPE_2__ plane; } ;
struct drm_pending_vblank_event {int dummy; } ;
struct drm_device {int event_lock; int dev; } ;
struct TYPE_3__ {struct drm_pending_vblank_event* event; } ;


 int FUNC_0 (struct drm_crtc*,struct drm_pending_vblank_event*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct mxsfb_drm_private* FUNC_3 (struct drm_simple_display_pipe*) ;
 int FUNC_4 (struct mxsfb_drm_private*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct drm_simple_display_pipe *VAR_0)
{
 struct mxsfb_drm_private *VAR_1 = FUNC_3(VAR_0);
 struct drm_device *VAR_2 = VAR_0->plane.dev;
 struct drm_crtc *VAR_3 = &VAR_0->crtc;
 struct drm_pending_vblank_event *VAR_4;

 FUNC_1(VAR_1->panel);
 FUNC_4(VAR_1);
 FUNC_2(VAR_1->panel);
 FUNC_5(VAR_2->dev);

 FUNC_6(&VAR_2->event_lock);
 VAR_4 = VAR_3->state->event;
 if (VAR_4) {
  VAR_3->state->event = ((void*)0);
  FUNC_0(VAR_3, VAR_4);
 }
 FUNC_7(&VAR_2->event_lock);
}
