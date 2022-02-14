
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct drm_crtc* crtc; } ;
struct intel_crtc_state {int cpu_transcoder; TYPE_1__ base; } ;
struct intel_crtc {int dummy; } ;
struct intel_atomic_state {int dummy; } ;
struct drm_i915_private {int dummy; } ;
struct drm_crtc {int dev; } ;
typedef enum transcoder { ____Placeholder_transcoder } transcoder ;


 int FUNC_0 (struct drm_i915_private*) ;
 int VAR_0 ;
 int FUNC_1 (struct drm_crtc*) ;
 int FUNC_2 (struct drm_crtc*) ;
 scalar_t__ FUNC_3 (struct intel_crtc_state*,int ) ;
 int FUNC_4 (struct intel_crtc_state*) ;
 int FUNC_5 (struct intel_crtc_state*,int) ;
 int FUNC_6 (struct intel_crtc_state*) ;
 int FUNC_7 (struct intel_crtc_state*) ;
 int FUNC_8 (struct intel_crtc*,struct intel_crtc_state*,struct intel_atomic_state*) ;
 int FUNC_9 (struct intel_crtc*,struct intel_crtc_state*,struct intel_atomic_state*) ;
 int FUNC_10 (struct intel_crtc*,struct intel_crtc_state*,struct intel_atomic_state*) ;
 int FUNC_11 (struct intel_crtc_state*) ;
 int FUNC_12 (struct intel_crtc*) ;
 struct drm_i915_private* FUNC_13 (int ) ;
 struct intel_crtc* FUNC_14 (struct drm_crtc*) ;
 int FUNC_15 (int) ;

__attribute__((used)) static void FUNC_16(struct intel_crtc_state *VAR_1,
     struct intel_atomic_state *VAR_2)
{
 struct drm_crtc *VAR_3 = VAR_1->base.crtc;
 struct drm_i915_private *VAR_4 = FUNC_13(VAR_3->dev);
 struct intel_crtc *VAR_5 = FUNC_14(VAR_3);
 enum transcoder VAR_6 = VAR_1->cpu_transcoder;

 FUNC_8(VAR_5, VAR_1, VAR_2);

 FUNC_2(VAR_3);
 FUNC_1(VAR_3);


 if (!FUNC_15(VAR_6))
  FUNC_6(VAR_1);

 if (FUNC_3(VAR_1, VAR_0))
  FUNC_5(VAR_1, 0);

 if (!FUNC_15(VAR_6))
  FUNC_4(VAR_1);

 FUNC_7(VAR_1);

 if (FUNC_0(VAR_4) >= 9)
  FUNC_12(VAR_5);
 else
  FUNC_11(VAR_1);

 FUNC_9(VAR_5, VAR_1, VAR_2);

 FUNC_10(VAR_5, VAR_1, VAR_2);
}
