
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_uncore {int dummy; } ;
struct i915_gpu_state {int nfence; void** fence; struct drm_i915_private* i915; } ;
struct TYPE_2__ {int num_fences; } ;
struct drm_i915_private {TYPE_1__ ggtt; struct intel_uncore uncore; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct drm_i915_private*) ;
 void* FUNC_4 (struct intel_uncore*,int ) ;
 void* FUNC_5 (struct intel_uncore*,int ) ;

__attribute__((used)) static void FUNC_6(struct i915_gpu_state *VAR_0)
{
 struct drm_i915_private *VAR_1 = VAR_0->i915;
 struct intel_uncore *VAR_2 = &VAR_1->uncore;
 int VAR_3;

 if (FUNC_3(VAR_1) >= 6) {
  for (VAR_3 = 0; VAR_3 < VAR_1->ggtt.num_fences; VAR_3++)
   VAR_0->fence[VAR_3] =
    FUNC_5(VAR_2,
          FUNC_2(VAR_3));
 } else if (FUNC_3(VAR_1) >= 4) {
  for (VAR_3 = 0; VAR_3 < VAR_1->ggtt.num_fences; VAR_3++)
   VAR_0->fence[VAR_3] =
    FUNC_5(VAR_2,
          FUNC_1(VAR_3));
 } else {
  for (VAR_3 = 0; VAR_3 < VAR_1->ggtt.num_fences; VAR_3++)
   VAR_0->fence[VAR_3] =
    FUNC_4(VAR_2, FUNC_0(VAR_3));
 }
 VAR_0->nfence = VAR_3;
}
