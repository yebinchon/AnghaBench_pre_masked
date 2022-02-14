
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i915_gpu_state {unsigned long capture; struct drm_i915_error_engine* engine; } ;
struct drm_i915_error_engine {unsigned long hangcheck_timestamp; struct drm_i915_error_engine* next; } ;


 scalar_t__ FUNC_0 (unsigned long,unsigned long) ;

__attribute__((used)) static unsigned long FUNC_1(const struct i915_gpu_state *VAR_0)
{
 const struct drm_i915_error_engine *VAR_1;
 unsigned long VAR_2 = VAR_0->capture;

 for (VAR_1 = VAR_0->engine; VAR_1; VAR_1 = VAR_1->next) {
  if (VAR_1->hangcheck_timestamp &&
      FUNC_0(VAR_1->hangcheck_timestamp, VAR_2))
   VAR_2 = VAR_1->hangcheck_timestamp;
 }

 return VAR_2;
}
