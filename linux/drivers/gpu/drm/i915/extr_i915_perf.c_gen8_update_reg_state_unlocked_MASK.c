
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct intel_context {int sseu; TYPE_1__* engine; } ;
struct i915_perf_stream {int period_exponent; scalar_t__ periodic; } ;
struct i915_oa_config {int dummy; } ;
struct TYPE_4__ {scalar_t__ ctx_flexeu0_offset; scalar_t__ ctx_oactxctrl_offset; } ;
struct drm_i915_private {TYPE_2__ perf; } ;
typedef int i915_reg_t ;
struct TYPE_3__ {struct drm_i915_private* i915; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__*,scalar_t__,int ,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (struct drm_i915_private*,int *) ;
 int FUNC_3 (struct i915_oa_config const*,int ) ;

__attribute__((used)) static void
FUNC_4(struct i915_perf_stream *VAR_13,
          struct intel_context *VAR_14,
          u32 *VAR_15,
          const struct i915_oa_config *VAR_16)
{
 struct drm_i915_private *VAR_17 = VAR_14->engine->i915;
 u32 VAR_18 = VAR_17->perf.ctx_oactxctrl_offset;
 u32 VAR_19 = VAR_17->perf.ctx_flexeu0_offset;

 i915_reg_t VAR_20[] = {
  VAR_1,
  VAR_2,
  VAR_3,
  VAR_4,
  VAR_5,
  VAR_6,
  VAR_7,
 };
 int VAR_21;

 FUNC_1(VAR_15, VAR_18, VAR_8,
  (VAR_13->period_exponent << VAR_11) |
  (VAR_13->periodic ? VAR_10 : 0) |
  VAR_9);

 for (VAR_21 = 0; VAR_21 < FUNC_0(VAR_20); VAR_21++) {
  FUNC_1(VAR_15, VAR_19 + VAR_21 * 2, VAR_20[VAR_21],
   FUNC_3(VAR_16, VAR_20[VAR_21]));
 }

 FUNC_1(VAR_15,
  VAR_0, VAR_12,
  FUNC_2(VAR_17, &VAR_14->sseu));
}
