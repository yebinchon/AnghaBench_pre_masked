
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int crtc; } ;
struct intel_crtc_state {int cpu_transcoder; TYPE_1__ base; } ;
struct TYPE_4__ {int dev; } ;
struct intel_crtc {TYPE_2__ base; } ;
struct drm_i915_private {int dummy; } ;
typedef enum transcoder { ____Placeholder_transcoder } transcoder ;
typedef enum pipe { ____Placeholder_pipe } pipe ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int) ;
 int FUNC_14 (int) ;
 int FUNC_15 (int) ;
 struct drm_i915_private* FUNC_16 (int ) ;
 struct intel_crtc* FUNC_17 (int ) ;

__attribute__((used)) static void FUNC_18(const struct intel_crtc_state *VAR_0,
      enum pipe VAR_1)
{
 struct intel_crtc *VAR_2 = FUNC_17(VAR_0->base.crtc);
 struct drm_i915_private *VAR_3 = FUNC_16(VAR_2->base.dev);
 enum transcoder VAR_4 = VAR_0->cpu_transcoder;

 FUNC_4(FUNC_7(VAR_1),
     FUNC_3(FUNC_2(VAR_4)));
 FUNC_4(FUNC_5(VAR_1),
     FUNC_3(FUNC_0(VAR_4)));
 FUNC_4(FUNC_6(VAR_1),
     FUNC_3(FUNC_1(VAR_4)));

 FUNC_4(FUNC_11(VAR_1),
     FUNC_3(FUNC_15(VAR_4)));
 FUNC_4(FUNC_8(VAR_1),
     FUNC_3(FUNC_12(VAR_4)));
 FUNC_4(FUNC_9(VAR_1),
     FUNC_3(FUNC_13(VAR_4)));
 FUNC_4(FUNC_10(VAR_1),
     FUNC_3(FUNC_14(VAR_4)));
}
