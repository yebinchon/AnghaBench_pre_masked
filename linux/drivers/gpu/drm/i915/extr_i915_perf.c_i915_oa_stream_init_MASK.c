
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct perf_open_properties {int sample_flags; size_t oa_format; int metrics_set; int oa_period_exponent; scalar_t__ oa_periodic; } ;
struct TYPE_8__ {int format_size; int ptr_lock; int format; } ;
struct TYPE_12__ {int function; } ;
struct i915_perf_stream {int sample_size; int sample_flags; scalar_t__ ctx; int wakeref; int oa_config; TYPE_2__ oa_buffer; int poll_wq; TYPE_6__ poll_check_timer; int * ops; int period_exponent; scalar_t__ periodic; struct drm_i915_private* dev_priv; } ;
struct TYPE_11__ {int struct_mutex; } ;
struct TYPE_9__ {int (* enable_metric_set ) (struct i915_perf_stream*) ;int (* disable_metric_set ) (struct i915_perf_stream*) ;} ;
struct TYPE_10__ {TYPE_3__ ops; struct i915_perf_stream* exclusive_stream; TYPE_1__* oa_formats; int metrics_kobj; } ;
struct drm_i915_private {int runtime_pm; int uncore; TYPE_5__ drm; TYPE_4__ perf; } ;
struct drm_i915_perf_record_header {int dummy; } ;
struct drm_i915_perf_open_param {int dummy; } ;
struct TYPE_7__ {int size; int format; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct i915_perf_stream*) ;
 int FUNC_3 (struct i915_perf_stream*) ;
 int FUNC_4 (struct drm_i915_private*,int ,int *) ;
 int FUNC_5 (TYPE_6__*,int ,int ) ;
 int FUNC_6 (TYPE_5__*) ;
 int VAR_7 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct i915_perf_stream*) ;
 int VAR_8 ;
 int FUNC_14 (struct i915_perf_stream*) ;
 int FUNC_15 (struct drm_i915_private*,int ) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (struct i915_perf_stream*) ;
 int FUNC_18 (struct i915_perf_stream*) ;

__attribute__((used)) static int FUNC_19(struct i915_perf_stream *VAR_9,
          struct drm_i915_perf_open_param *VAR_10,
          struct perf_open_properties *VAR_11)
{
 struct drm_i915_private *VAR_12 = VAR_9->dev_priv;
 int VAR_13;
 int VAR_14;





 if (!VAR_12->perf.metrics_kobj) {
  FUNC_0("OA metrics weren't advertised via sysfs\n");
  return -VAR_2;
 }

 if (!(VAR_11->sample_flags & VAR_6)) {
  FUNC_0("Only OA report sampling supported\n");
  return -VAR_2;
 }

 if (!VAR_12->perf.ops.enable_metric_set) {
  FUNC_0("OA unit not supported\n");
  return -VAR_3;
 }





 if (VAR_12->perf.exclusive_stream) {
  FUNC_0("OA unit already in use\n");
  return -VAR_1;
 }

 if (!VAR_11->oa_format) {
  FUNC_0("OA report format not specified\n");
  return -VAR_2;
 }

 VAR_9->sample_size = sizeof(struct drm_i915_perf_record_header);

 VAR_13 = VAR_12->perf.oa_formats[VAR_11->oa_format].size;

 VAR_9->sample_flags |= VAR_6;
 VAR_9->sample_size += VAR_13;

 VAR_9->oa_buffer.format_size = VAR_13;
 if (FUNC_1(VAR_9->oa_buffer.format_size == 0))
  return -VAR_2;

 VAR_9->oa_buffer.format =
  VAR_12->perf.oa_formats[VAR_11->oa_format].format;

 VAR_9->periodic = VAR_11->oa_periodic;
 if (VAR_9->periodic)
  VAR_9->period_exponent = VAR_11->oa_period_exponent;

 if (VAR_9->ctx) {
  VAR_14 = FUNC_13(VAR_9);
  if (VAR_14) {
   FUNC_0("Invalid context id to filter with\n");
   return VAR_14;
  }
 }

 VAR_14 = FUNC_4(VAR_12, VAR_11->metrics_set, &VAR_9->oa_config);
 if (VAR_14) {
  FUNC_0("Invalid OA config id=%i\n", VAR_11->metrics_set);
  goto err_config;
 }
 VAR_9->wakeref = FUNC_8(&VAR_12->runtime_pm);
 FUNC_10(&VAR_12->uncore, VAR_4);

 VAR_14 = FUNC_2(VAR_9);
 if (VAR_14)
  goto err_oa_buf_alloc;

 VAR_14 = FUNC_6(&VAR_12->drm);
 if (VAR_14)
  goto err_lock;

 VAR_9->ops = &VAR_7;
 VAR_12->perf.exclusive_stream = VAR_9;

 VAR_14 = VAR_12->perf.ops.enable_metric_set(VAR_9);
 if (VAR_14) {
  FUNC_0("Unable to enable metric set\n");
  goto err_enable;
 }

 FUNC_12(&VAR_12->drm.struct_mutex);

 FUNC_5(&VAR_9->poll_check_timer,
       VAR_0, VAR_5);
 VAR_9->poll_check_timer.function = VAR_8;
 FUNC_7(&VAR_9->poll_wq);
 FUNC_16(&VAR_9->oa_buffer.ptr_lock);

 return 0;

err_enable:
 VAR_12->perf.exclusive_stream = ((void*)0);
 VAR_12->perf.ops.disable_metric_set(VAR_9);
 FUNC_12(&VAR_12->drm.struct_mutex);

err_lock:
 FUNC_3(VAR_9);

err_oa_buf_alloc:
 FUNC_15(VAR_12, VAR_9->oa_config);

 FUNC_11(&VAR_12->uncore, VAR_4);
 FUNC_9(&VAR_12->runtime_pm, VAR_9->wakeref);

err_config:
 if (VAR_9->ctx)
  FUNC_14(VAR_9);

 return VAR_14;
}
