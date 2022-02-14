
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_pending_vblank_event {int dummy; } ;
struct drm_device {int event_lock; } ;
struct drm_crtc_state {int dummy; } ;
struct drm_crtc {TYPE_1__* state; struct drm_device* dev; } ;
struct TYPE_2__ {struct drm_pending_vblank_event* event; } ;


 int FUNC_0 (struct drm_crtc*,struct drm_pending_vblank_event*) ;
 int FUNC_1 (struct drm_crtc*,char*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct drm_crtc *VAR_0,
      struct drm_crtc_state *VAR_1)
{
 struct drm_device *VAR_2 = VAR_0->dev;
 struct drm_pending_vblank_event *VAR_3;
 unsigned long VAR_4;

 if (VAR_0->state && VAR_0->state->event) {
  VAR_3 = VAR_0->state->event;
  VAR_0->state->event = ((void*)0);

  FUNC_2(&VAR_2->event_lock, VAR_4);
  FUNC_0(VAR_0, VAR_3);
  FUNC_3(&VAR_2->event_lock, VAR_4);
 }

 FUNC_1(VAR_0, "flush");
}
