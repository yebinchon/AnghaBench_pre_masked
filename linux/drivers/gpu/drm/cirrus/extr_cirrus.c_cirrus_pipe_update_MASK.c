
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct drm_plane_state* state; } ;
struct drm_crtc {TYPE_3__* dev; TYPE_2__* state; int mode; } ;
struct drm_simple_display_pipe {TYPE_1__ plane; struct drm_crtc crtc; } ;
struct drm_rect {int dummy; } ;
struct drm_plane_state {int fb; } ;
struct cirrus_device {scalar_t__ cpp; } ;
struct TYPE_6__ {int event_lock; struct cirrus_device* dev_private; } ;
struct TYPE_5__ {int * event; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,struct drm_rect*) ;
 int FUNC_2 (struct cirrus_device*,int *,int ) ;
 scalar_t__ FUNC_3 (struct drm_plane_state*,struct drm_plane_state*,struct drm_rect*) ;
 int FUNC_4 (struct drm_crtc*,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct drm_simple_display_pipe *VAR_0,
          struct drm_plane_state *VAR_1)
{
 struct cirrus_device *VAR_2 = VAR_0->crtc.dev->dev_private;
 struct drm_plane_state *VAR_3 = VAR_0->plane.state;
 struct drm_crtc *VAR_4 = &VAR_0->crtc;
 struct drm_rect VAR_5;

 if (VAR_0->plane.state->fb &&
     VAR_2->cpp != FUNC_0(VAR_0->plane.state->fb))
  FUNC_2(VAR_2, &VAR_4->mode,
    VAR_0->plane.state->fb);

 if (FUNC_3(VAR_1, VAR_3, &VAR_5))
  FUNC_1(VAR_0->plane.state->fb, &VAR_5);

 if (VAR_4->state->event) {
  FUNC_5(&VAR_4->dev->event_lock);
  FUNC_4(VAR_4, VAR_4->state->event);
  VAR_4->state->event = ((void*)0);
  FUNC_6(&VAR_4->dev->event_lock);
 }
}
