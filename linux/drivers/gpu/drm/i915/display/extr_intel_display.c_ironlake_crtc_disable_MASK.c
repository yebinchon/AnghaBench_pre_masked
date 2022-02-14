
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {struct drm_crtc* crtc; } ;
struct intel_crtc_state {scalar_t__ has_pch_encoder; TYPE_1__ base; } ;
struct intel_crtc {int pipe; } ;
struct intel_atomic_state {int dummy; } ;
struct drm_i915_private {int dummy; } ;
struct drm_device {int dummy; } ;
struct drm_crtc {struct drm_device* dev; } ;
typedef int i915_reg_t ;


 scalar_t__ FUNC_0 (struct drm_i915_private*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int VAR_0 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (struct drm_crtc*) ;
 int FUNC_7 (struct drm_crtc*) ;
 int FUNC_8 (struct intel_crtc_state*) ;
 int FUNC_9 (struct intel_crtc*,struct intel_crtc_state*,struct intel_atomic_state*) ;
 int FUNC_10 (struct intel_crtc*,struct intel_crtc_state*,struct intel_atomic_state*) ;
 int FUNC_11 (struct drm_i915_private*,int,int) ;
 int FUNC_12 (struct drm_i915_private*,int,int) ;
 int FUNC_13 (struct drm_i915_private*,int) ;
 int FUNC_14 (struct drm_crtc*) ;
 int FUNC_15 (struct intel_crtc*) ;
 int FUNC_16 (struct intel_crtc_state*) ;
 struct drm_i915_private* FUNC_17 (struct drm_device*) ;
 struct intel_crtc* FUNC_18 (struct drm_crtc*) ;

__attribute__((used)) static void FUNC_19(struct intel_crtc_state *VAR_4,
      struct intel_atomic_state *VAR_5)
{
 struct drm_crtc *VAR_6 = VAR_4->base.crtc;
 struct drm_device *VAR_7 = VAR_6->dev;
 struct drm_i915_private *VAR_8 = FUNC_17(VAR_7);
 struct intel_crtc *VAR_9 = FUNC_18(VAR_6);
 int VAR_10 = VAR_9->pipe;






 FUNC_11(VAR_8, VAR_10, 0);
 FUNC_12(VAR_8, VAR_10, 0);

 FUNC_9(VAR_9, VAR_4, VAR_5);

 FUNC_7(VAR_6);
 FUNC_6(VAR_6);

 FUNC_8(VAR_4);

 FUNC_16(VAR_4);

 if (VAR_4->has_pch_encoder)
  FUNC_14(VAR_6);

 FUNC_10(VAR_9, VAR_4, VAR_5);

 if (VAR_4->has_pch_encoder) {
  FUNC_13(VAR_8, VAR_10);

  if (FUNC_0(VAR_8)) {
   i915_reg_t VAR_11;
   u32 VAR_12;


   VAR_11 = FUNC_5(VAR_10);
   VAR_12 = FUNC_1(VAR_11);
   VAR_12 &= ~(VAR_1 |
      VAR_2);
   VAR_12 |= VAR_3;
   FUNC_2(VAR_11, VAR_12);


   VAR_12 = FUNC_1(VAR_0);
   VAR_12 &= ~(FUNC_4(VAR_10) | FUNC_3(VAR_10));
   FUNC_2(VAR_0, VAR_12);
  }

  FUNC_15(VAR_9);
 }

 FUNC_11(VAR_8, VAR_10, 1);
 FUNC_12(VAR_8, VAR_10, 1);
}
