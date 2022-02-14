
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int visible; struct drm_framebuffer* fb; } ;
struct intel_plane_state {TYPE_1__ base; } ;
struct intel_crtc_state {unsigned int pixel_rate; } ;
struct drm_framebuffer {TYPE_2__* format; } ;
struct TYPE_4__ {unsigned int* cpp; int num_planes; scalar_t__ is_yuv; } ;



unsigned int FUNC_0(const struct intel_crtc_state *VAR_0,
       const struct intel_plane_state *VAR_1)
{
 const struct drm_framebuffer *VAR_2 = VAR_1->base.fb;
 unsigned int VAR_3;

 if (!VAR_1->base.visible)
  return 0;

 VAR_3 = VAR_2->format->cpp[0];







 if (VAR_2->format->is_yuv && VAR_2->format->num_planes > 1)
  VAR_3 *= 4;

 return VAR_3 * VAR_0->pixel_rate;
}
