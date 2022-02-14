
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pl111_drm_dev_private {scalar_t__ regs; } ;
struct drm_plane {struct drm_plane_state* state; } ;
struct drm_crtc {struct drm_device* dev; TYPE_1__* state; } ;
struct drm_simple_display_pipe {struct drm_plane plane; struct drm_crtc crtc; } ;
struct drm_plane_state {struct drm_framebuffer* fb; } ;
struct drm_pending_vblank_event {int dummy; } ;
struct drm_framebuffer {int dummy; } ;
struct drm_device {int event_lock; struct pl111_drm_dev_private* dev_private; } ;
struct TYPE_2__ {scalar_t__ active; struct drm_pending_vblank_event* event; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct drm_crtc*,struct drm_pending_vblank_event*) ;
 int FUNC_1 (struct drm_crtc*,struct drm_pending_vblank_event*) ;
 scalar_t__ FUNC_2 (struct drm_crtc*) ;
 int FUNC_3 (struct drm_framebuffer*,struct drm_plane_state*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_7(struct drm_simple_display_pipe *VAR_1,
     struct drm_plane_state *VAR_2)
{
 struct drm_crtc *VAR_3 = &VAR_1->crtc;
 struct drm_device *VAR_4 = VAR_3->dev;
 struct pl111_drm_dev_private *VAR_5 = VAR_4->dev_private;
 struct drm_pending_vblank_event *VAR_6 = VAR_3->state->event;
 struct drm_plane *VAR_7 = &VAR_1->plane;
 struct drm_plane_state *VAR_8 = VAR_7->state;
 struct drm_framebuffer *VAR_9 = VAR_8->fb;

 if (VAR_9) {
  u32 VAR_10 = FUNC_3(VAR_9, VAR_8, 0);

  FUNC_6(VAR_10, VAR_5->regs + VAR_0);
 }

 if (VAR_6) {
  VAR_3->state->event = ((void*)0);

  FUNC_4(&VAR_3->dev->event_lock);
  if (VAR_3->state->active && FUNC_2(VAR_3) == 0)
   FUNC_0(VAR_3, VAR_6);
  else
   FUNC_1(VAR_3, VAR_6);
  FUNC_5(&VAR_3->dev->event_lock);
 }
}
