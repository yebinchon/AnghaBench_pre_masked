
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tve200_drm_dev_private {scalar_t__ regs; } ;
struct drm_plane {struct drm_plane_state* state; } ;
struct drm_crtc {struct drm_device* dev; TYPE_2__* state; } ;
struct drm_simple_display_pipe {struct drm_plane plane; struct drm_crtc crtc; } ;
struct drm_plane_state {struct drm_framebuffer* fb; } ;
struct drm_pending_vblank_event {int dummy; } ;
struct drm_framebuffer {TYPE_1__* format; } ;
struct drm_device {int event_lock; struct tve200_drm_dev_private* dev_private; } ;
struct TYPE_4__ {scalar_t__ active; struct drm_pending_vblank_event* event; } ;
struct TYPE_3__ {scalar_t__ format; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct drm_crtc*,struct drm_pending_vblank_event*) ;
 int FUNC_1 (struct drm_crtc*,struct drm_pending_vblank_event*) ;
 scalar_t__ FUNC_2 (struct drm_crtc*) ;
 int FUNC_3 (struct drm_framebuffer*,struct drm_plane_state*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_7(struct drm_simple_display_pipe *VAR_4,
     struct drm_plane_state *VAR_5)
{
 struct drm_crtc *VAR_6 = &VAR_4->crtc;
 struct drm_device *VAR_7 = VAR_6->dev;
 struct tve200_drm_dev_private *VAR_8 = VAR_7->dev_private;
 struct drm_pending_vblank_event *VAR_9 = VAR_6->state->event;
 struct drm_plane *VAR_10 = &VAR_4->plane;
 struct drm_plane_state *VAR_11 = VAR_10->state;
 struct drm_framebuffer *VAR_12 = VAR_11->fb;

 if (VAR_12) {

  FUNC_6(FUNC_3(VAR_12, VAR_11, 0),
         VAR_8->regs + VAR_3);


  if (VAR_12->format->format == VAR_0) {
   FUNC_6(FUNC_3(VAR_12, VAR_11, 1),
          VAR_8->regs + VAR_1);
   FUNC_6(FUNC_3(VAR_12, VAR_11, 2),
          VAR_8->regs + VAR_2);
  }
 }

 if (VAR_9) {
  VAR_6->state->event = ((void*)0);

  FUNC_4(&VAR_6->dev->event_lock);
  if (VAR_6->state->active && FUNC_2(VAR_6) == 0)
   FUNC_0(VAR_6, VAR_9);
  else
   FUNC_1(VAR_6, VAR_9);
  FUNC_5(&VAR_6->dev->event_lock);
 }
}
