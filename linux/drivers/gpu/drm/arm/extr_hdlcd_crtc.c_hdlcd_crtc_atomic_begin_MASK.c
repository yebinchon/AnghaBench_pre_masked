
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_pending_vblank_event {int dummy; } ;
struct drm_crtc_state {int dummy; } ;
struct drm_crtc {TYPE_2__* dev; TYPE_1__* state; } ;
struct TYPE_4__ {int event_lock; } ;
struct TYPE_3__ {struct drm_pending_vblank_event* event; } ;


 int FUNC_0 (struct drm_crtc*,struct drm_pending_vblank_event*) ;
 int FUNC_1 (struct drm_crtc*,struct drm_pending_vblank_event*) ;
 scalar_t__ FUNC_2 (struct drm_crtc*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct drm_crtc *VAR_0,
        struct drm_crtc_state *VAR_1)
{
 struct drm_pending_vblank_event *VAR_2 = VAR_0->state->event;

 if (VAR_2) {
  VAR_0->state->event = ((void*)0);

  FUNC_3(&VAR_0->dev->event_lock);
  if (FUNC_2(VAR_0) == 0)
   FUNC_0(VAR_0, VAR_2);
  else
   FUNC_1(VAR_0, VAR_2);
  FUNC_4(&VAR_0->dev->event_lock);
 }
}
