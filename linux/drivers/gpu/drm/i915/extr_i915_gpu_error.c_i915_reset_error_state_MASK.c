
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i915_gpu_state {int dummy; } ;
struct TYPE_2__ {int lock; struct i915_gpu_state* first_error; } ;
struct drm_i915_private {TYPE_1__ gpu_error; } ;


 int VAR_0 ;
 struct i915_gpu_state* FUNC_0 (int ) ;
 int FUNC_1 (struct i915_gpu_state*) ;
 int FUNC_2 (struct i915_gpu_state*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct drm_i915_private *VAR_1)
{
 struct i915_gpu_state *VAR_2;

 FUNC_3(&VAR_1->gpu_error.lock);
 VAR_2 = VAR_1->gpu_error.first_error;
 if (VAR_2 != FUNC_0(-VAR_0))
  VAR_1->gpu_error.first_error = ((void*)0);
 FUNC_4(&VAR_1->gpu_error.lock);

 if (!FUNC_1(VAR_2))
  FUNC_2(VAR_2);
}
