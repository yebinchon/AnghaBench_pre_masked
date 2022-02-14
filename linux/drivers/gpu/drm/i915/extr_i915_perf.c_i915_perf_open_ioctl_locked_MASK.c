
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct perf_open_properties {scalar_t__ sample_flags; int ctx_handle; scalar_t__ single_context; } ;
struct i915_perf_stream {scalar_t__ sample_flags; TYPE_2__* ops; int link; struct i915_gem_context* ctx; struct drm_i915_private* dev_priv; } ;
struct i915_gem_context {int dummy; } ;
struct TYPE_3__ {int streams; } ;
struct drm_i915_private {int drm; TYPE_1__ perf; } ;
struct drm_i915_perf_open_param {int flags; } ;
struct drm_i915_file_private {int dummy; } ;
struct drm_file {struct drm_i915_file_private* driver_priv; } ;
struct TYPE_4__ {int (* destroy ) (struct i915_perf_stream*) ;} ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 unsigned long VAR_9 ;
 unsigned long VAR_10 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (char*,int *,struct i915_perf_stream*,unsigned long) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int VAR_11 ;
 struct i915_gem_context* FUNC_6 (struct drm_i915_file_private*,int ) ;
 int FUNC_7 (struct i915_gem_context*) ;
 int FUNC_8 (struct i915_perf_stream*,struct drm_i915_perf_open_param*,struct perf_open_properties*) ;
 int FUNC_9 (struct i915_perf_stream*) ;
 scalar_t__ VAR_12 ;
 int FUNC_10 (struct i915_perf_stream*) ;
 struct i915_perf_stream* FUNC_11 (int,int ) ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct i915_perf_stream*) ;

__attribute__((used)) static int
FUNC_15(struct drm_i915_private *VAR_13,
       struct drm_i915_perf_open_param *VAR_14,
       struct perf_open_properties *VAR_15,
       struct drm_file *VAR_16)
{
 struct i915_gem_context *VAR_17 = ((void*)0);
 struct i915_perf_stream *VAR_18 = ((void*)0);
 unsigned long VAR_19 = 0;
 bool VAR_20 = 1;
 int VAR_21;
 int VAR_22;

 if (VAR_15->single_context) {
  u32 VAR_23 = VAR_15->ctx_handle;
  struct drm_i915_file_private *VAR_24 = VAR_16->driver_priv;

  VAR_17 = FUNC_6(VAR_24, VAR_23);
  if (!VAR_17) {
   FUNC_0("Failed to look up context with ID %u for opening perf stream\n",
      VAR_23);
   VAR_22 = -VAR_3;
   goto err;
  }
 }
 if (FUNC_1(VAR_13) && VAR_17)
  VAR_20 = 0;






 if (VAR_20 &&
     VAR_12 && !FUNC_4(VAR_0)) {
  FUNC_0("Insufficient privileges to open system-wide i915 perf stream\n");
  VAR_22 = -VAR_1;
  goto err_ctx;
 }

 VAR_18 = FUNC_11(sizeof(*VAR_18), VAR_5);
 if (!VAR_18) {
  VAR_22 = -VAR_4;
  goto err_ctx;
 }

 VAR_18->dev_priv = VAR_13;
 VAR_18->ctx = VAR_17;

 VAR_22 = FUNC_8(VAR_18, VAR_14, VAR_15);
 if (VAR_22)
  goto err_alloc;





 if (FUNC_2(VAR_18->sample_flags != VAR_15->sample_flags)) {
  VAR_22 = -VAR_2;
  goto err_flags;
 }

 FUNC_12(&VAR_18->link, &VAR_13->perf.streams);

 if (VAR_14->flags & VAR_7)
  VAR_19 |= VAR_9;
 if (VAR_14->flags & VAR_8)
  VAR_19 |= VAR_10;

 VAR_21 = FUNC_3("[i915_perf]", &VAR_11, VAR_18, VAR_19);
 if (VAR_21 < 0) {
  VAR_22 = VAR_21;
  goto err_open;
 }

 if (!(VAR_14->flags & VAR_6))
  FUNC_9(VAR_18);




 FUNC_5(&VAR_13->drm);

 return VAR_21;

err_open:
 FUNC_13(&VAR_18->link);
err_flags:
 if (VAR_18->ops->destroy)
  VAR_18->ops->destroy(VAR_18);
err_alloc:
 FUNC_10(VAR_18);
err_ctx:
 if (VAR_17)
  FUNC_7(VAR_17);
err:
 return VAR_22;
}
