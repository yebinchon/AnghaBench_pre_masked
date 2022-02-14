
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct i915_perf_stream {int poll_check_timer; scalar_t__ periodic; struct drm_i915_private* dev_priv; } ;
struct TYPE_3__ {int (* oa_disable ) (struct i915_perf_stream*) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct drm_i915_private {TYPE_2__ perf; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct i915_perf_stream*) ;

__attribute__((used)) static void FUNC_2(struct i915_perf_stream *VAR_0)
{
 struct drm_i915_private *VAR_1 = VAR_0->dev_priv;

 VAR_1->perf.ops.oa_disable(VAR_0);

 if (VAR_0->periodic)
  FUNC_0(&VAR_0->poll_check_timer);
}
