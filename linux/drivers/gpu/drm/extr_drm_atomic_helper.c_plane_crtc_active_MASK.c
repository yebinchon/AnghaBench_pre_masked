
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_plane_state {TYPE_2__* crtc; } ;
struct TYPE_4__ {TYPE_1__* state; } ;
struct TYPE_3__ {scalar_t__ active; } ;



__attribute__((used)) static bool FUNC_0(const struct drm_plane_state *VAR_0)
{
 return VAR_0->crtc && VAR_0->crtc->state->active;
}
