
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_plane_state {TYPE_2__* crtc; int fb; } ;
struct drm_plane {struct drm_plane_state* state; } ;
struct TYPE_4__ {TYPE_1__* state; } ;
struct TYPE_3__ {int event; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct drm_plane *VAR_0,
           struct drm_plane_state *VAR_1)
{
 struct drm_plane_state *VAR_2 = VAR_0->state;

 if (!VAR_2->crtc)
  return;

 if (FUNC_0(!VAR_2->fb || !VAR_2->crtc->state))
  return;

 FUNC_1(VAR_2->crtc,
         VAR_2->fb,
         VAR_2->crtc->state->event);
}
