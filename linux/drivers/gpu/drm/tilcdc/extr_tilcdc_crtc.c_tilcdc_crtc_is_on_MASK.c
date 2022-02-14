
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_crtc {TYPE_1__* state; } ;
struct TYPE_2__ {scalar_t__ active; scalar_t__ enable; } ;



__attribute__((used)) static bool FUNC_0(struct drm_crtc *VAR_0)
{
 return VAR_0->state && VAR_0->state->enable && VAR_0->state->active;
}
