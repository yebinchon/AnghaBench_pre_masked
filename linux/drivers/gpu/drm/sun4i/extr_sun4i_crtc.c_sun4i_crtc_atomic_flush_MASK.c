
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sun4i_crtc {int engine; } ;
struct drm_pending_vblank_event {int dummy; } ;
struct drm_crtc_state {int dummy; } ;
struct drm_crtc {TYPE_1__* dev; TYPE_2__* state; } ;
struct TYPE_4__ {struct drm_pending_vblank_event* event; } ;
struct TYPE_3__ {int event_lock; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct drm_crtc*,struct drm_pending_vblank_event*) ;
 int FUNC_2 (struct drm_crtc*,struct drm_pending_vblank_event*) ;
 struct sun4i_crtc* FUNC_3 (struct drm_crtc*) ;
 scalar_t__ FUNC_4 (struct drm_crtc*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(struct drm_crtc *VAR_0,
        struct drm_crtc_state *VAR_1)
{
 struct sun4i_crtc *VAR_2 = FUNC_3(VAR_0);
 struct drm_pending_vblank_event *VAR_3 = VAR_0->state->event;

 FUNC_0("Committing plane changes\n");

 FUNC_7(VAR_2->engine);

 if (VAR_3) {
  VAR_0->state->event = ((void*)0);

  FUNC_5(&VAR_0->dev->event_lock);
  if (FUNC_4(VAR_0) == 0)
   FUNC_1(VAR_0, VAR_3);
  else
   FUNC_2(VAR_0, VAR_3);
  FUNC_6(&VAR_0->dev->event_lock);
 }
}
