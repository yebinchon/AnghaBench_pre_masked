
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ type; } ;
struct TYPE_4__ {int plane; } ;
struct intel_plane_state {TYPE_3__ view; TYPE_1__ base; } ;
struct TYPE_5__ {int dev; } ;
struct intel_plane {scalar_t__ has_fbc; TYPE_2__ base; } ;
struct drm_i915_private {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct drm_i915_private*) ;
 struct drm_i915_private* FUNC_1 (int ) ;
 struct intel_plane* FUNC_2 (int ) ;

__attribute__((used)) static bool FUNC_3(const struct intel_plane_state *VAR_1)
{
 struct intel_plane *VAR_2 = FUNC_2(VAR_1->base.plane);
 struct drm_i915_private *VAR_3 = FUNC_1(VAR_2->base.dev);

 return FUNC_0(VAR_3) < 4 ||
  (VAR_2->has_fbc &&
   VAR_1->view.type == VAR_0);
}
