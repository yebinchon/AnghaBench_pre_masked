
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct drm_crtc {TYPE_2__* state; TYPE_1__* dev; } ;
struct TYPE_6__ {struct drm_plane_state* state; } ;
struct drm_simple_display_pipe {struct drm_crtc crtc; TYPE_3__ plane; } ;
struct drm_rect {int dummy; } ;
struct drm_plane_state {int fb; } ;
struct TYPE_5__ {int * event; } ;
struct TYPE_4__ {int event_lock; } ;


 scalar_t__ FUNC_0 (struct drm_plane_state*,struct drm_plane_state*,struct drm_rect*) ;
 int FUNC_1 (struct drm_crtc*,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct drm_simple_display_pipe *VAR_0,
    struct drm_plane_state *VAR_1)
{
 struct drm_plane_state *VAR_2 = VAR_0->plane.state;
 struct drm_crtc *VAR_3 = &VAR_0->crtc;
 struct drm_rect VAR_4;

 if (FUNC_0(VAR_1, VAR_2, &VAR_4))
  FUNC_2(VAR_2->fb);

 if (VAR_3->state->event) {
  FUNC_3(&VAR_3->dev->event_lock);
  FUNC_1(VAR_3, VAR_3->state->event);
  FUNC_4(&VAR_3->dev->event_lock);
  VAR_3->state->event = ((void*)0);
 }
}
