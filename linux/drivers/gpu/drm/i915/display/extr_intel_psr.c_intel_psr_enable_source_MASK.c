
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct intel_dp {int dummy; } ;
struct intel_crtc_state {int cpu_transcoder; } ;
struct TYPE_2__ {scalar_t__ psr2_enabled; } ;
struct drm_i915_private {TYPE_1__ psr; } ;
typedef int i915_reg_t ;
typedef enum transcoder { ____Placeholder_transcoder } transcoder ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct drm_i915_private*) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*) ;
 int FUNC_4 (struct drm_i915_private*) ;
 scalar_t__ FUNC_5 (struct drm_i915_private*,int) ;
 scalar_t__ FUNC_6 (struct drm_i915_private*) ;
 int VAR_6 ;
 int VAR_7 ;
 struct drm_i915_private* FUNC_7 (struct intel_dp*) ;
 int FUNC_8 (struct drm_i915_private*,int) ;
 int FUNC_9 (struct intel_dp*) ;

__attribute__((used)) static void FUNC_10(struct intel_dp *VAR_8,
        const struct intel_crtc_state *VAR_9)
{
 struct drm_i915_private *VAR_10 = FUNC_7(VAR_8);
 enum transcoder VAR_11 = VAR_9->cpu_transcoder;
 u32 VAR_12;




 if (FUNC_6(VAR_10) || FUNC_3(VAR_10))
  FUNC_9(VAR_8);

 if (VAR_10->psr.psr2_enabled && (FUNC_5(VAR_10, 9) &&
        !FUNC_4(VAR_10))) {
  i915_reg_t VAR_13 = FUNC_8(VAR_10,
       VAR_11);
  u32 VAR_14 = FUNC_0(VAR_13);

  VAR_14 |= VAR_7 |
      VAR_6;
  FUNC_1(VAR_13, VAR_14);
 }







 VAR_12 = VAR_5 |
        VAR_2 |
        VAR_3 |
        VAR_4;

 if (FUNC_2(VAR_10) < 11)
  VAR_12 |= VAR_1;

 FUNC_1(VAR_0, VAR_12);
}
