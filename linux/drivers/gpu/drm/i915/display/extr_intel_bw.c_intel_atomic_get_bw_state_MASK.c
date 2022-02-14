
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_bw_state {int dummy; } ;
struct TYPE_2__ {int dev; } ;
struct intel_atomic_state {TYPE_1__ base; } ;
struct drm_private_state {int dummy; } ;
struct drm_i915_private {int bw_obj; } ;


 struct intel_bw_state* FUNC_0 (struct drm_private_state*) ;
 scalar_t__ FUNC_1 (struct drm_private_state*) ;
 struct drm_private_state* FUNC_2 (TYPE_1__*,int *) ;
 struct drm_i915_private* FUNC_3 (int ) ;
 struct intel_bw_state* FUNC_4 (struct drm_private_state*) ;

__attribute__((used)) static struct intel_bw_state *
FUNC_5(struct intel_atomic_state *VAR_0)
{
 struct drm_i915_private *VAR_1 = FUNC_3(VAR_0->base.dev);
 struct drm_private_state *VAR_2;

 VAR_2 = FUNC_2(&VAR_0->base,
          &VAR_1->bw_obj);
 if (FUNC_1(VAR_2))
  return FUNC_0(VAR_2);

 return FUNC_4(VAR_2);
}
