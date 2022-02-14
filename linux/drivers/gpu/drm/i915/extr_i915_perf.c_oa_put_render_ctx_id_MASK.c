
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_context {int dummy; } ;
struct i915_perf_stream {int pinned_ctx; scalar_t__ specific_ctx_id_mask; int specific_ctx_id; struct drm_i915_private* dev_priv; } ;
struct TYPE_2__ {int struct_mutex; } ;
struct drm_i915_private {TYPE_1__ drm; } ;


 int VAR_0 ;
 struct intel_context* FUNC_0 (int *) ;
 int FUNC_1 (struct intel_context*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct i915_perf_stream *VAR_1)
{
 struct drm_i915_private *VAR_2 = VAR_1->dev_priv;
 struct intel_context *VAR_3;

 VAR_1->specific_ctx_id = VAR_0;
 VAR_1->specific_ctx_id_mask = 0;

 VAR_3 = FUNC_0(&VAR_1->pinned_ctx);
 if (VAR_3) {
  FUNC_2(&VAR_2->drm.struct_mutex);
  FUNC_1(VAR_3);
  FUNC_3(&VAR_2->drm.struct_mutex);
 }
}
