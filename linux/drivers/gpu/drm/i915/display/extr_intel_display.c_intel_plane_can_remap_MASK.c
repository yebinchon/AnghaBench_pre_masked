
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {struct drm_framebuffer* fb; int plane; } ;
struct intel_plane_state {TYPE_2__ base; } ;
struct TYPE_6__ {int dev; } ;
struct intel_plane {scalar_t__ id; TYPE_3__ base; } ;
struct drm_i915_private {int dummy; } ;
struct drm_framebuffer {scalar_t__ modifier; unsigned int* pitches; TYPE_1__* format; } ;
struct TYPE_4__ {int num_planes; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct drm_i915_private*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct drm_i915_private*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 struct drm_i915_private* FUNC_3 (int ) ;
 struct intel_plane* FUNC_4 (int ) ;

bool FUNC_5(const struct intel_plane_state *VAR_2)
{
 struct intel_plane *VAR_3 = FUNC_4(VAR_2->base.plane);
 struct drm_i915_private *VAR_4 = FUNC_3(VAR_3->base.dev);
 const struct drm_framebuffer *VAR_5 = VAR_2->base.fb;
 int VAR_6;


 if (VAR_3->id == VAR_1)
  return 0;







 if (FUNC_0(VAR_4) < 4)
  return 0;





 if (FUNC_2(VAR_5->modifier))
  return 0;


 if (VAR_5->modifier == VAR_0) {
  unsigned int VAR_7 = FUNC_1(VAR_4) - 1;

  for (VAR_6 = 0; VAR_6 < VAR_5->format->num_planes; VAR_6++) {
   if (VAR_5->pitches[VAR_6] & VAR_7)
    return 0;
  }
 }

 return 1;
}
