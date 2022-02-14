
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct drm_crtc* crtc; } ;
struct intel_crtc_state {TYPE_1__ base; } ;
struct intel_crtc {int pipe; } ;
struct intel_atomic_state {int dummy; } ;
struct TYPE_4__ {int initial_watermarks; } ;
struct drm_i915_private {TYPE_2__ display; } ;
struct drm_device {int dummy; } ;
struct drm_crtc {struct drm_device* dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct drm_i915_private*) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*,int) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*) ;
 int FUNC_4 (struct drm_crtc*) ;
 int FUNC_5 (struct drm_i915_private*,int) ;
 int FUNC_6 (struct drm_crtc*) ;
 int FUNC_7 (struct drm_i915_private*,int) ;
 int FUNC_8 (struct intel_crtc_state*) ;
 int FUNC_9 (struct intel_crtc_state*) ;
 int FUNC_10 (struct intel_crtc_state*,int ) ;
 int FUNC_11 (struct intel_crtc_state*) ;
 int FUNC_12 (struct intel_crtc*,struct intel_crtc_state*,struct intel_atomic_state*) ;
 int FUNC_13 (struct intel_crtc*,struct intel_crtc_state*,struct intel_atomic_state*) ;
 int FUNC_14 (struct intel_crtc*,struct intel_crtc_state*,struct intel_atomic_state*) ;
 int FUNC_15 (struct drm_i915_private*,int,int) ;
 int FUNC_16 (struct intel_crtc*) ;
 int FUNC_17 (struct drm_i915_private*,int) ;
 struct drm_i915_private* FUNC_18 (struct drm_device*) ;
 struct intel_crtc* FUNC_19 (struct drm_crtc*) ;
 int FUNC_20 (struct drm_i915_private*,int) ;

__attribute__((used)) static void FUNC_21(struct intel_crtc_state *VAR_1,
         struct intel_atomic_state *VAR_2)
{
 struct drm_crtc *VAR_3 = VAR_1->base.crtc;
 struct drm_device *VAR_4 = VAR_3->dev;
 struct drm_i915_private *VAR_5 = FUNC_18(VAR_4);
 struct intel_crtc *VAR_6 = FUNC_19(VAR_3);
 int VAR_7 = VAR_6->pipe;





 if (FUNC_1(VAR_5, 2))
  FUNC_17(VAR_5, VAR_7);

 FUNC_12(VAR_6, VAR_1, VAR_2);

 FUNC_6(VAR_3);
 FUNC_4(VAR_3);

 FUNC_11(VAR_1);

 FUNC_9(VAR_1);

 FUNC_13(VAR_6, VAR_1, VAR_2);

 if (!FUNC_10(VAR_1, VAR_0)) {
  if (FUNC_0(VAR_5))
   FUNC_5(VAR_5, VAR_7);
  else if (FUNC_3(VAR_5))
   FUNC_20(VAR_5, VAR_7);
  else
   FUNC_8(VAR_1);
 }

 FUNC_14(VAR_6, VAR_1, VAR_2);

 if (!FUNC_1(VAR_5, 2))
  FUNC_15(VAR_5, VAR_7, 0);

 if (!VAR_5->display.initial_watermarks)
  FUNC_16(VAR_6);


 if (FUNC_2(VAR_5))
  FUNC_7(VAR_5, VAR_7);
}
