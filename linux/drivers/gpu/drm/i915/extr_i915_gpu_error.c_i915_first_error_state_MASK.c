
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i915_gpu_state {int dummy; } ;
struct TYPE_2__ {int lock; struct i915_gpu_state* first_error; } ;
struct drm_i915_private {TYPE_1__ gpu_error; } ;


 int FUNC_0 (struct i915_gpu_state*) ;
 int FUNC_1 (struct i915_gpu_state*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

struct i915_gpu_state *
FUNC_4(struct drm_i915_private *VAR_0)
{
 struct i915_gpu_state *VAR_1;

 FUNC_2(&VAR_0->gpu_error.lock);
 VAR_1 = VAR_0->gpu_error.first_error;
 if (!FUNC_0(VAR_1))
  FUNC_1(VAR_1);
 FUNC_3(&VAR_0->gpu_error.lock);

 return VAR_1;
}
