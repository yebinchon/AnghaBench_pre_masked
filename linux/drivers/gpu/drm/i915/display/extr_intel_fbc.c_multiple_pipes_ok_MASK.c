
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ visible; } ;
struct intel_plane_state {TYPE_2__ base; } ;
struct intel_fbc {int visible_pipes_mask; } ;
struct TYPE_3__ {int dev; } ;
struct intel_crtc {int pipe; TYPE_1__ base; } ;
struct drm_i915_private {struct intel_fbc fbc; } ;
typedef enum pipe { ____Placeholder_pipe } pipe ;


 int FUNC_0 (struct drm_i915_private*) ;
 struct drm_i915_private* FUNC_1 (int ) ;

__attribute__((used)) static bool FUNC_2(struct intel_crtc *VAR_0,
         struct intel_plane_state *VAR_1)
{
 struct drm_i915_private *VAR_2 = FUNC_1(VAR_0->base.dev);
 struct intel_fbc *VAR_3 = &VAR_2->fbc;
 enum pipe VAR_4 = VAR_0->pipe;


 if (!FUNC_0(VAR_2))
  return 1;

 if (VAR_1->base.visible)
  VAR_3->visible_pipes_mask |= (1 << VAR_4);
 else
  VAR_3->visible_pipes_mask &= ~(1 << VAR_4);

 return (VAR_3->visible_pipes_mask & ~(1 << VAR_4)) != 0;
}
