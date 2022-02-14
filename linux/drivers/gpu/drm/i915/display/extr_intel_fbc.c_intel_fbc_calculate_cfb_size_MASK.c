
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int stride; } ;
struct intel_fbc_state_cache {TYPE_1__ fb; } ;
struct drm_i915_private {int dummy; } ;


 int FUNC_0 (struct drm_i915_private*) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*,int) ;
 int FUNC_2 (struct intel_fbc_state_cache*,int *,int*) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static int FUNC_4(struct drm_i915_private *VAR_0,
     struct intel_fbc_state_cache *VAR_1)
{
 int VAR_2;

 FUNC_2(VAR_1, ((void*)0), &VAR_2);
 if (FUNC_1(VAR_0, 7))
  VAR_2 = FUNC_3(VAR_2, 2048);
 else if (FUNC_0(VAR_0) >= 8)
  VAR_2 = FUNC_3(VAR_2, 2560);


 return VAR_2 * VAR_1->fb.stride;
}
