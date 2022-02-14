
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct i915_perf_stream {int poll_check_timer; scalar_t__ periodic; struct drm_i915_private* dev_priv; } ;
struct TYPE_3__ {int (* oa_enable ) (struct i915_perf_stream*) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct drm_i915_private {TYPE_2__ perf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct i915_perf_stream*) ;

__attribute__((used)) static void FUNC_3(struct i915_perf_stream *VAR_2)
{
 struct drm_i915_private *VAR_3 = VAR_2->dev_priv;

 VAR_3->perf.ops.oa_enable(VAR_2);

 if (VAR_2->periodic)
  FUNC_0(&VAR_2->poll_check_timer,
         FUNC_1(VAR_1),
         VAR_0);
}
