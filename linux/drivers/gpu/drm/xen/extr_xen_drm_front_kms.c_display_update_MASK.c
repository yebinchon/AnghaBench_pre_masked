
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xen_drm_front_drm_pipeline {struct drm_pending_vblank_event* pending_event; } ;
struct drm_crtc {struct drm_device* dev; TYPE_1__* state; } ;
struct drm_simple_display_pipe {struct drm_crtc crtc; } ;
struct drm_plane_state {int dummy; } ;
struct drm_pending_vblank_event {int dummy; } ;
struct drm_device {int event_lock; } ;
struct TYPE_2__ {struct drm_pending_vblank_event* event; } ;


 int FUNC_0 (struct drm_pending_vblank_event*) ;
 int FUNC_1 (struct drm_simple_display_pipe*,struct drm_plane_state*) ;
 int FUNC_2 (struct drm_device*,int*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct xen_drm_front_drm_pipeline*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 struct xen_drm_front_drm_pipeline* FUNC_7 (struct drm_simple_display_pipe*) ;

__attribute__((used)) static void FUNC_8(struct drm_simple_display_pipe *VAR_0,
      struct drm_plane_state *VAR_1)
{
 struct xen_drm_front_drm_pipeline *VAR_2 =
   FUNC_7(VAR_0);
 struct drm_crtc *VAR_3 = &VAR_0->crtc;
 struct drm_pending_vblank_event *VAR_4;
 int VAR_5;

 VAR_4 = VAR_3->state->event;
 if (VAR_4) {
  struct drm_device *VAR_6 = VAR_3->dev;
  unsigned long VAR_7;

  FUNC_0(VAR_2->pending_event);

  FUNC_5(&VAR_6->event_lock, VAR_7);
  VAR_3->state->event = ((void*)0);

  VAR_2->pending_event = VAR_4;
  FUNC_6(&VAR_6->event_lock, VAR_7);
 }

 if (!FUNC_2(VAR_0->crtc.dev, &VAR_5)) {
  FUNC_4(VAR_2);
  return;
 }
 if (!FUNC_1(VAR_0, VAR_1))
  FUNC_4(VAR_2);

 FUNC_3(VAR_5);
}
