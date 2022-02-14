
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct drm_crtc* crtc; } ;
struct intel_crtc_state {TYPE_1__ base; } ;
struct intel_crtc {int pipe; int active; } ;
struct intel_atomic_state {int dummy; } ;
struct TYPE_4__ {int (* initial_watermarks ) (struct intel_atomic_state*,struct intel_crtc_state*) ;} ;
struct drm_i915_private {TYPE_2__ display; } ;
struct drm_device {int dummy; } ;
struct drm_crtc {struct drm_device* dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (struct drm_crtc*) ;
 int FUNC_6 (struct intel_crtc*,struct intel_crtc_state*) ;
 int FUNC_7 (struct intel_crtc*,struct intel_crtc_state*) ;
 int FUNC_8 (struct intel_crtc_state*) ;
 int FUNC_9 (struct intel_crtc_state*) ;
 int FUNC_10 (struct intel_crtc_state*) ;
 int FUNC_11 (struct intel_crtc_state*) ;
 scalar_t__ FUNC_12 (struct intel_crtc_state*) ;
 int FUNC_13 (struct intel_crtc_state*) ;
 int FUNC_14 (struct intel_crtc_state*) ;
 int FUNC_15 (struct intel_crtc_state*,int ) ;
 int FUNC_16 (struct intel_crtc_state*) ;
 int FUNC_17 (struct intel_crtc*,struct intel_crtc_state*,struct intel_atomic_state*) ;
 int FUNC_18 (struct intel_crtc*,struct intel_crtc_state*,struct intel_atomic_state*) ;
 int FUNC_19 (struct intel_crtc*,struct intel_crtc_state*,struct intel_atomic_state*) ;
 int FUNC_20 (struct drm_i915_private*,int,int) ;
 int FUNC_21 (struct intel_crtc_state*) ;
 int FUNC_22 (struct intel_crtc_state*) ;
 int FUNC_23 (struct intel_atomic_state*,struct intel_crtc_state*) ;
 struct drm_i915_private* FUNC_24 (struct drm_device*) ;
 struct intel_crtc* FUNC_25 (struct drm_crtc*) ;
 int FUNC_26 (struct intel_crtc*,struct intel_crtc_state*) ;
 int FUNC_27 (struct intel_crtc*,struct intel_crtc_state*) ;

__attribute__((used)) static void FUNC_28(struct intel_crtc_state *VAR_3,
       struct intel_atomic_state *VAR_4)
{
 struct drm_crtc *VAR_5 = VAR_3->base.crtc;
 struct drm_device *VAR_6 = VAR_5->dev;
 struct drm_i915_private *VAR_7 = FUNC_24(VAR_6);
 struct intel_crtc *VAR_8 = FUNC_25(VAR_5);
 int VAR_9 = VAR_8->pipe;

 if (FUNC_4(VAR_8->active))
  return;

 if (FUNC_12(VAR_3))
  FUNC_15(VAR_3, VAR_1);

 FUNC_22(VAR_3);
 FUNC_21(VAR_3);

 if (FUNC_3(VAR_7) && VAR_9 == VAR_2) {
  FUNC_2(FUNC_0(VAR_9), VAR_0);
  FUNC_2(FUNC_1(VAR_9), 0);
 }

 FUNC_9(VAR_3);

 VAR_8->active = 1;

 FUNC_20(VAR_7, VAR_9, 1);

 FUNC_19(VAR_8, VAR_3, VAR_4);

 if (FUNC_3(VAR_7)) {
  FUNC_7(VAR_8, VAR_3);
  FUNC_6(VAR_8, VAR_3);
 } else {
  FUNC_27(VAR_8, VAR_3);
  FUNC_26(VAR_8, VAR_3);
 }

 FUNC_18(VAR_8, VAR_3, VAR_4);

 FUNC_8(VAR_3);

 FUNC_11(VAR_3);
 FUNC_10(VAR_3);

 FUNC_14(VAR_3);

 VAR_7->display.initial_watermarks(VAR_4, VAR_3);
 FUNC_16(VAR_3);

 FUNC_5(VAR_5);
 FUNC_13(VAR_3);

 FUNC_17(VAR_8, VAR_3, VAR_4);
}
