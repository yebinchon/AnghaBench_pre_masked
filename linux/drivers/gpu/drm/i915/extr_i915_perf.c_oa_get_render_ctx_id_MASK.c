
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_context {int lrc_desc; int state; } ;
struct i915_perf_stream {int specific_ctx_id; unsigned int specific_ctx_id_mask; struct drm_i915_private* dev_priv; } ;
struct drm_i915_private {int dummy; } ;


 int FUNC_0 (char*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_1 (struct drm_i915_private*) ;
 scalar_t__ FUNC_2 (struct intel_context*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct intel_context*) ;
 int FUNC_5 (struct drm_i915_private*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 struct intel_context* FUNC_8 (struct i915_perf_stream*) ;
 void* FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(struct i915_perf_stream *VAR_7)
{
 struct drm_i915_private *VAR_8 = VAR_7->dev_priv;
 struct intel_context *VAR_9;

 VAR_9 = FUNC_8(VAR_7);
 if (FUNC_2(VAR_9))
  return FUNC_4(VAR_9);

 switch (FUNC_1(VAR_8)) {
 case 7: {




  VAR_7->specific_ctx_id = FUNC_6(VAR_9->state);
  VAR_7->specific_ctx_id_mask = 0;
  break;
 }

 case 8:
 case 9:
 case 10:
  if (FUNC_5(VAR_8)) {
   VAR_7->specific_ctx_id =
    FUNC_7(VAR_9->lrc_desc) >> 12;





   VAR_7->specific_ctx_id_mask =
    (1U << (VAR_6 - 1)) - 1;
  } else {
   VAR_7->specific_ctx_id_mask =
    (1U << VAR_6) - 1;
   VAR_7->specific_ctx_id =
    FUNC_9(VAR_9->lrc_desc);
   VAR_7->specific_ctx_id &=
    VAR_7->specific_ctx_id_mask;
  }
  break;

 case 11: {
  VAR_7->specific_ctx_id_mask =
   ((1U << VAR_5) - 1) << (VAR_4 - 32) |
   ((1U << VAR_3) - 1) << (VAR_2 - 32) |
   ((1 << VAR_1) - 1) << (VAR_0 - 32);
  VAR_7->specific_ctx_id = FUNC_9(VAR_9->lrc_desc);
  VAR_7->specific_ctx_id &=
   VAR_7->specific_ctx_id_mask;
  break;
 }

 default:
  FUNC_3(FUNC_1(VAR_8));
 }

 FUNC_0("filtering on ctx_id=0x%x ctx_id_mask=0x%x\n",
    VAR_7->specific_ctx_id,
    VAR_7->specific_ctx_id_mask);

 return 0;
}
