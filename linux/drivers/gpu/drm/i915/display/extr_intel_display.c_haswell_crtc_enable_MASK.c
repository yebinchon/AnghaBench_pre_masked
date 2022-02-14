
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ enabled; } ;
struct TYPE_4__ {struct drm_crtc* crtc; } ;
struct intel_crtc_state {int cpu_transcoder; int hsw_workaround_pipe; scalar_t__ has_pch_encoder; TYPE_2__ pch_pfit; int fdi_m_n; scalar_t__ pixel_multiplier; scalar_t__ shared_dpll; TYPE_1__ base; } ;
struct intel_crtc {int pipe; int active; } ;
struct intel_atomic_state {int dummy; } ;
struct TYPE_6__ {int (* initial_watermarks ) (struct intel_atomic_state*,struct intel_crtc_state*) ;} ;
struct drm_i915_private {TYPE_3__ display; } ;
struct drm_crtc {int dev; } ;
typedef enum transcoder { ____Placeholder_transcoder } transcoder ;


 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (struct drm_i915_private*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*) ;
 scalar_t__ FUNC_4 (struct drm_i915_private*) ;
 scalar_t__ FUNC_5 (struct drm_i915_private*) ;
 int VAR_2 ;
 int FUNC_6 (int) ;
 int VAR_3 ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (struct drm_crtc*) ;
 int FUNC_9 (struct intel_crtc_state*) ;
 int FUNC_10 (struct drm_i915_private*,int,int) ;
 int FUNC_11 (struct intel_crtc_state*) ;
 int FUNC_12 (struct intel_crtc*) ;
 int FUNC_13 (struct intel_crtc*) ;
 int FUNC_14 (struct intel_crtc_state*) ;
 int FUNC_15 (struct intel_crtc_state*) ;
 int FUNC_16 (struct intel_crtc_state*,int *,int *) ;
 scalar_t__ FUNC_17 (struct intel_crtc_state*) ;
 scalar_t__ FUNC_18 (struct intel_crtc_state*,int ) ;
 int FUNC_19 (struct intel_crtc_state*) ;
 int FUNC_20 (struct intel_crtc_state*) ;
 int FUNC_21 (struct intel_crtc_state*) ;
 int FUNC_22 (struct intel_crtc_state*,int) ;
 int FUNC_23 (struct intel_crtc_state*) ;
 int FUNC_24 (struct intel_crtc_state*,int ) ;
 int FUNC_25 (struct intel_crtc_state*) ;
 int FUNC_26 (struct intel_crtc_state*) ;
 int FUNC_27 (struct intel_crtc*,struct intel_crtc_state*,struct intel_atomic_state*) ;
 int FUNC_28 (struct intel_crtc*,struct intel_crtc_state*,struct intel_atomic_state*) ;
 int FUNC_29 (struct intel_crtc*,struct intel_crtc_state*,struct intel_atomic_state*) ;
 int FUNC_30 (struct intel_crtc_state*) ;
 int FUNC_31 (struct intel_crtc_state*) ;
 int FUNC_32 (struct drm_i915_private*,int) ;
 int FUNC_33 (struct intel_crtc_state*) ;
 int FUNC_34 (struct intel_atomic_state*,struct intel_crtc_state*) ;
 int FUNC_35 (struct intel_crtc_state*) ;
 int FUNC_36 (struct intel_atomic_state*,struct intel_crtc_state*) ;
 struct drm_i915_private* FUNC_37 (int ) ;
 struct intel_crtc* FUNC_38 (struct drm_crtc*) ;
 int FUNC_39 (int) ;

__attribute__((used)) static void FUNC_40(struct intel_crtc_state *VAR_4,
    struct intel_atomic_state *VAR_5)
{
 struct drm_crtc *VAR_6 = VAR_4->base.crtc;
 struct drm_i915_private *VAR_7 = FUNC_37(VAR_6->dev);
 struct intel_crtc *VAR_8 = FUNC_38(VAR_6);
 int VAR_9 = VAR_8->pipe, VAR_10;
 enum transcoder VAR_11 = VAR_4->cpu_transcoder;
 bool VAR_12;

 if (FUNC_7(VAR_8->active))
  return;

 FUNC_29(VAR_8, VAR_4, VAR_5);

 if (VAR_4->shared_dpll)
  FUNC_26(VAR_4);

 FUNC_28(VAR_8, VAR_4, VAR_5);

 if (FUNC_17(VAR_4))
  FUNC_24(VAR_4, VAR_2);

 if (!FUNC_39(VAR_11))
  FUNC_31(VAR_4);

 FUNC_30(VAR_4);

 if (VAR_11 != VAR_3 &&
     !FUNC_39(VAR_11)) {
  FUNC_0(FUNC_6(VAR_11),
      VAR_4->pixel_multiplier - 1);
 }

 if (VAR_4->has_pch_encoder) {
  FUNC_16(VAR_4,
          &VAR_4->fdi_m_n, ((void*)0));
 }

 if (!FUNC_39(VAR_11))
  FUNC_11(VAR_4);

 if (FUNC_1(VAR_7) >= 9 || FUNC_2(VAR_7))
  FUNC_9(VAR_4);

 VAR_8->active = 1;


 VAR_12 = (FUNC_4(VAR_7) || FUNC_3(VAR_7)) &&
    VAR_4->pch_pfit.enabled;
 if (VAR_12)
  FUNC_10(VAR_7, VAR_9, 1);

 if (FUNC_1(VAR_7) >= 9)
  FUNC_35(VAR_4);
 else
  FUNC_33(VAR_4);





 FUNC_15(VAR_4);
 FUNC_14(VAR_4);

 if (FUNC_1(VAR_7) < 9)
  FUNC_23(VAR_4);

 if (FUNC_1(VAR_7) >= 11)
  FUNC_13(VAR_8);

 FUNC_21(VAR_4);
 if (!FUNC_39(VAR_11))
  FUNC_20(VAR_4);

 if (VAR_7->display.initial_watermarks != ((void*)0))
  VAR_7->display.initial_watermarks(VAR_5, VAR_4);

 if (FUNC_1(VAR_7) >= 11)
  FUNC_12(VAR_8);


 if (!FUNC_39(VAR_11))
  FUNC_25(VAR_4);

 if (VAR_4->has_pch_encoder)
  FUNC_34(VAR_5, VAR_4);

 if (FUNC_18(VAR_4, VAR_0))
  FUNC_22(VAR_4, 1);

 FUNC_8(VAR_6);
 FUNC_19(VAR_4);

 FUNC_27(VAR_8, VAR_4, VAR_5);

 if (VAR_12) {
  FUNC_32(VAR_7, VAR_9);
  FUNC_10(VAR_7, VAR_9, 0);
 }



 VAR_10 = VAR_4->hsw_workaround_pipe;
 if (FUNC_5(VAR_7) && VAR_10 != VAR_1) {
  FUNC_32(VAR_7, VAR_10);
  FUNC_32(VAR_7, VAR_10);
 }
}
