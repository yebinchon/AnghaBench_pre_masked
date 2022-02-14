
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mcde {int dev; } ;
struct drm_plane {struct drm_plane_state* state; } ;
struct drm_crtc {struct drm_device* dev; TYPE_1__* state; } ;
struct drm_simple_display_pipe {struct drm_plane plane; struct drm_crtc crtc; } ;
struct drm_plane_state {struct drm_framebuffer* fb; } ;
struct drm_pending_vblank_event {int dummy; } ;
struct drm_framebuffer {int dummy; } ;
struct drm_device {int event_lock; struct mcde* dev_private; } ;
struct TYPE_2__ {scalar_t__ active; struct drm_pending_vblank_event* event; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct drm_crtc*,struct drm_pending_vblank_event*) ;
 int FUNC_4 (struct drm_crtc*,struct drm_pending_vblank_event*) ;
 scalar_t__ FUNC_5 (struct drm_crtc*) ;
 int FUNC_6 (struct drm_framebuffer*,struct drm_plane_state*,int ) ;
 int FUNC_7 (struct mcde*) ;
 int FUNC_8 (struct mcde*,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void FUNC_11(struct drm_simple_display_pipe *VAR_0,
    struct drm_plane_state *VAR_1)
{
 struct drm_crtc *VAR_2 = &VAR_0->crtc;
 struct drm_device *VAR_3 = VAR_2->dev;
 struct mcde *VAR_4 = VAR_3->dev_private;
 struct drm_pending_vblank_event *VAR_5 = VAR_2->state->event;
 struct drm_plane *VAR_6 = &VAR_0->plane;
 struct drm_plane_state *VAR_7 = VAR_6->state;
 struct drm_framebuffer *VAR_8 = VAR_7->fb;






 if (VAR_5) {
  VAR_2->state->event = ((void*)0);

  FUNC_9(&VAR_2->dev->event_lock);







  if (VAR_2->state->active && FUNC_5(VAR_2) == 0) {
   FUNC_0(VAR_4->dev, "arm vblank event\n");
   FUNC_3(VAR_2, VAR_5);
  } else {
   FUNC_0(VAR_4->dev, "insert fake vblank event\n");
   FUNC_4(VAR_2, VAR_5);
  }

  FUNC_10(&VAR_2->dev->event_lock);
 }






 if (VAR_8) {
  FUNC_8(VAR_4, FUNC_6(VAR_8, VAR_7, 0));

  FUNC_7(VAR_4);
  FUNC_2(VAR_4->dev, "sent first display update\n");
 } else {





  FUNC_1(VAR_4->dev, "ignored a display update\n");
 }
}
