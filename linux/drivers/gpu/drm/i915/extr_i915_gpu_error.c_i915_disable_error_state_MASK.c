
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; scalar_t__ first_error; } ;
struct drm_i915_private {TYPE_1__ gpu_error; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct drm_i915_private *VAR_0, int VAR_1)
{
 FUNC_1(&VAR_0->gpu_error.lock);
 if (!VAR_0->gpu_error.first_error)
  VAR_0->gpu_error.first_error = FUNC_0(VAR_1);
 FUNC_2(&VAR_0->gpu_error.lock);
}
