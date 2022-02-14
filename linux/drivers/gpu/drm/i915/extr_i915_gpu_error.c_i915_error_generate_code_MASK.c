
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct i915_gpu_state {struct drm_i915_error_engine* engine; } ;
struct TYPE_2__ {int instdone; } ;
struct drm_i915_error_engine {int ipehr; TYPE_1__ instdone; } ;



__attribute__((used)) static u32 FUNC_0(struct i915_gpu_state *VAR_0)
{
 const struct drm_i915_error_engine *VAR_1 = VAR_0->engine;







 return VAR_1 ? VAR_1->ipehr ^ VAR_1->instdone.instdone : 0;
}
