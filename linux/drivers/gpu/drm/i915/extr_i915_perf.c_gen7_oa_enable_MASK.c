
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int format; } ;
struct i915_perf_stream {int specific_ctx_id; int periodic; int period_exponent; TYPE_1__ oa_buffer; struct i915_gem_context* ctx; struct drm_i915_private* dev_priv; } ;
struct i915_gem_context {int dummy; } ;
struct drm_i915_private {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct i915_perf_stream*) ;

__attribute__((used)) static void FUNC_2(struct i915_perf_stream *VAR_7)
{
 struct drm_i915_private *VAR_8 = VAR_7->dev_priv;
 struct i915_gem_context *VAR_9 = VAR_7->ctx;
 u32 VAR_10 = VAR_7->specific_ctx_id;
 bool VAR_11 = VAR_7->periodic;
 u32 VAR_12 = VAR_7->period_exponent;
 u32 VAR_13 = VAR_7->oa_buffer.format;
 FUNC_1(VAR_7);

 FUNC_0(VAR_0,
     (VAR_10 & VAR_1) |
     (VAR_12 <<
      VAR_6) |
     (VAR_11 ? VAR_5 : 0) |
     (VAR_13 << VAR_3) |
     (VAR_9 ? VAR_4 : 0) |
     VAR_2);
}
