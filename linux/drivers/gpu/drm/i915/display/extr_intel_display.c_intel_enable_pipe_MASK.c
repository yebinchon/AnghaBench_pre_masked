
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int crtc; } ;
struct intel_crtc_state {int cpu_transcoder; scalar_t__ has_pch_encoder; TYPE_1__ base; } ;
struct TYPE_4__ {int dev; } ;
struct intel_crtc {int pipe; TYPE_2__ base; } ;
struct drm_i915_private {int dummy; } ;
typedef int i915_reg_t ;
typedef enum transcoder { ____Placeholder_transcoder } transcoder ;
typedef enum pipe { ____Placeholder_pipe } pipe ;


 int FUNC_0 (char*,int ) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int VAR_0 ;
 int FUNC_4 (struct drm_i915_private*) ;
 int FUNC_5 (int) ;
 int VAR_1 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (struct drm_i915_private*) ;
 int FUNC_9 (struct drm_i915_private*,int ) ;
 int FUNC_10 (struct drm_i915_private*,int) ;
 int FUNC_11 (struct intel_crtc*) ;
 int FUNC_12 (struct drm_i915_private*,int) ;
 scalar_t__ FUNC_13 (struct intel_crtc_state const*,int ) ;
 scalar_t__ FUNC_14 (struct intel_crtc_state const*) ;
 int FUNC_15 (struct intel_crtc*) ;
 int FUNC_16 (struct intel_crtc*) ;
 int FUNC_17 (int) ;
 struct drm_i915_private* FUNC_18 (int ) ;
 struct intel_crtc* FUNC_19 (int ) ;
 int FUNC_20 (struct intel_crtc*) ;

__attribute__((used)) static void FUNC_21(const struct intel_crtc_state *VAR_2)
{
 struct intel_crtc *VAR_3 = FUNC_19(VAR_2->base.crtc);
 struct drm_i915_private *VAR_4 = FUNC_18(VAR_3->base.dev);
 enum transcoder VAR_5 = VAR_2->cpu_transcoder;
 enum pipe VAR_6 = VAR_3->pipe;
 i915_reg_t VAR_7;
 u32 VAR_8;

 FUNC_0("enabling pipe %c\n", FUNC_17(VAR_6));

 FUNC_11(VAR_3);






 if (FUNC_1(VAR_4)) {
  if (FUNC_13(VAR_2, VAR_0))
   FUNC_8(VAR_4);
  else
   FUNC_12(VAR_4, VAR_6);
 } else {
  if (VAR_2->has_pch_encoder) {

   FUNC_9(VAR_4,
        FUNC_15(VAR_3));
   FUNC_10(VAR_4,
        (enum pipe) VAR_5);
  }

 }

 FUNC_20(VAR_3);

 VAR_7 = FUNC_5(VAR_5);
 VAR_8 = FUNC_2(VAR_7);
 if (VAR_8 & VAR_1) {

  FUNC_7(!FUNC_4(VAR_4));
  return;
 }

 FUNC_3(VAR_7, VAR_8 | VAR_1);
 FUNC_6(VAR_7);
 if (FUNC_14(VAR_2) == 0)
  FUNC_16(VAR_3);
}
