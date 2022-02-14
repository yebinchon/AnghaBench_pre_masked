
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int state; } ;
struct drm_crtc {TYPE_3__* dev; TYPE_2__* state; } ;
struct drm_simple_display_pipe {TYPE_1__ plane; struct drm_crtc crtc; } ;
struct drm_plane_state {int dummy; } ;
struct bochs_device {int dummy; } ;
struct TYPE_6__ {int event_lock; struct bochs_device* dev_private; } ;
struct TYPE_5__ {int * event; } ;


 int FUNC_0 (struct bochs_device*,int ) ;
 int FUNC_1 (struct drm_crtc*,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct drm_simple_display_pipe *VAR_0,
         struct drm_plane_state *VAR_1)
{
 struct bochs_device *VAR_2 = VAR_0->crtc.dev->dev_private;
 struct drm_crtc *VAR_3 = &VAR_0->crtc;

 FUNC_0(VAR_2, VAR_0->plane.state);

 if (VAR_3->state->event) {
  FUNC_2(&VAR_3->dev->event_lock);
  FUNC_1(VAR_3, VAR_3->state->event);
  VAR_3->state->event = ((void*)0);
  FUNC_3(&VAR_3->dev->event_lock);
 }
}
