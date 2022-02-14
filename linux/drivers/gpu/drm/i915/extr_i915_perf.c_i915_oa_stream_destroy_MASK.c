
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct i915_perf_stream {int oa_config; scalar_t__ ctx; int wakeref; struct drm_i915_private* dev_priv; } ;
struct TYPE_7__ {scalar_t__ missed; } ;
struct TYPE_5__ {int (* disable_metric_set ) (struct i915_perf_stream*) ;} ;
struct TYPE_8__ {TYPE_3__ spurious_report_rs; TYPE_1__ ops; struct i915_perf_stream* exclusive_stream; } ;
struct TYPE_6__ {int struct_mutex; } ;
struct drm_i915_private {TYPE_4__ perf; int runtime_pm; int uncore; TYPE_2__ drm; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,scalar_t__) ;
 int VAR_0 ;
 int FUNC_2 (struct i915_perf_stream*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct i915_perf_stream*) ;
 int FUNC_8 (struct drm_i915_private*,int ) ;
 int FUNC_9 (struct i915_perf_stream*) ;

__attribute__((used)) static void FUNC_10(struct i915_perf_stream *VAR_1)
{
 struct drm_i915_private *VAR_2 = VAR_1->dev_priv;

 FUNC_0(VAR_1 != VAR_2->perf.exclusive_stream);





 FUNC_5(&VAR_2->drm.struct_mutex);
 VAR_2->perf.exclusive_stream = ((void*)0);
 VAR_2->perf.ops.disable_metric_set(VAR_1);
 FUNC_6(&VAR_2->drm.struct_mutex);

 FUNC_2(VAR_1);

 FUNC_4(&VAR_2->uncore, VAR_0);
 FUNC_3(&VAR_2->runtime_pm, VAR_1->wakeref);

 if (VAR_1->ctx)
  FUNC_7(VAR_1);

 FUNC_8(VAR_2, VAR_1->oa_config);

 if (VAR_2->perf.spurious_report_rs.missed) {
  FUNC_1("%d spurious OA report notices suppressed due to ratelimiting\n",
    VAR_2->perf.spurious_report_rs.missed);
 }
}
