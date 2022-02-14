
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct drm_crtc* crtc; } ;
struct intel_crtc_state {scalar_t__ has_pch_encoder; int fdi_m_n; TYPE_1__ base; } ;
struct intel_crtc {int pipe; int active; } ;
struct intel_atomic_state {int dummy; } ;
struct TYPE_4__ {int (* initial_watermarks ) (struct intel_atomic_state*,struct intel_crtc_state*) ;} ;
struct drm_i915_private {TYPE_2__ display; } ;
struct drm_device {int dummy; } ;
struct drm_crtc {struct drm_device* dev; } ;


 scalar_t__ FUNC_0 (struct drm_i915_private*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct drm_i915_private*,int) ;
 int FUNC_3 (struct drm_i915_private*,int) ;
 int FUNC_4 (struct drm_crtc*) ;
 int FUNC_5 (struct drm_device*,int) ;
 int FUNC_6 (struct intel_crtc_state*) ;
 int FUNC_7 (struct intel_crtc_state*) ;
 int FUNC_8 (struct intel_crtc_state*,int *,int *) ;
 scalar_t__ FUNC_9 (struct intel_crtc_state*) ;
 int FUNC_10 (struct intel_crtc_state*) ;
 int FUNC_11 (struct intel_crtc_state*) ;
 int FUNC_12 (struct intel_crtc_state*,int ) ;
 int FUNC_13 (struct intel_crtc_state*) ;
 int FUNC_14 (struct intel_crtc*,struct intel_crtc_state*,struct intel_atomic_state*) ;
 int FUNC_15 (struct intel_crtc*,struct intel_crtc_state*,struct intel_atomic_state*) ;
 int FUNC_16 (struct intel_crtc_state*) ;
 int FUNC_17 (struct drm_i915_private*,int,int) ;
 int FUNC_18 (struct drm_i915_private*,int,int) ;
 int FUNC_19 (struct intel_crtc_state*) ;
 int FUNC_20 (struct intel_crtc_state*) ;
 int FUNC_21 (struct drm_i915_private*,int) ;
 int FUNC_22 (struct intel_crtc_state*) ;
 int FUNC_23 (struct intel_atomic_state*,struct intel_crtc_state*) ;
 int FUNC_24 (struct intel_crtc_state*) ;
 int FUNC_25 (struct intel_crtc_state*) ;
 int FUNC_26 (struct intel_atomic_state*,struct intel_crtc_state*) ;
 struct drm_i915_private* FUNC_27 (struct drm_device*) ;
 struct intel_crtc* FUNC_28 (struct drm_crtc*) ;

__attribute__((used)) static void FUNC_29(struct intel_crtc_state *VAR_1,
     struct intel_atomic_state *VAR_2)
{
 struct drm_crtc *VAR_3 = VAR_1->base.crtc;
 struct drm_device *VAR_4 = VAR_3->dev;
 struct drm_i915_private *VAR_5 = FUNC_27(VAR_4);
 struct intel_crtc *VAR_6 = FUNC_28(VAR_3);
 int VAR_7 = VAR_6->pipe;

 if (FUNC_1(VAR_6->active))
  return;
 FUNC_17(VAR_5, VAR_7, 0);
 FUNC_18(VAR_5, VAR_7, 0);

 if (VAR_1->has_pch_encoder)
  FUNC_16(VAR_1);

 if (FUNC_9(VAR_1))
  FUNC_12(VAR_1, VAR_0);

 FUNC_20(VAR_1);
 FUNC_19(VAR_1);

 if (VAR_1->has_pch_encoder) {
  FUNC_8(VAR_1,
          &VAR_1->fdi_m_n, ((void*)0));
 }

 FUNC_25(VAR_1);

 VAR_6->active = 1;

 FUNC_15(VAR_6, VAR_1, VAR_2);

 if (VAR_1->has_pch_encoder) {



  FUNC_22(VAR_1);
 } else {
  FUNC_3(VAR_5, VAR_7);
  FUNC_2(VAR_5, VAR_7);
 }

 FUNC_24(VAR_1);





 FUNC_7(VAR_1);
 FUNC_6(VAR_1);

 FUNC_11(VAR_1);

 if (VAR_5->display.initial_watermarks != ((void*)0))
  VAR_5->display.initial_watermarks(VAR_2, VAR_1);
 FUNC_13(VAR_1);

 if (VAR_1->has_pch_encoder)
  FUNC_23(VAR_2, VAR_1);

 FUNC_4(VAR_3);
 FUNC_10(VAR_1);

 FUNC_14(VAR_6, VAR_1, VAR_2);

 if (FUNC_0(VAR_5))
  FUNC_5(VAR_4, VAR_6->pipe);







 if (VAR_1->has_pch_encoder) {
  FUNC_21(VAR_5, VAR_7);
  FUNC_21(VAR_5, VAR_7);
 }
 FUNC_17(VAR_5, VAR_7, 1);
 FUNC_18(VAR_5, VAR_7, 1);
}
