
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int dev; } ;
struct intel_crtc {int pipe; TYPE_1__ base; } ;
struct drm_i915_private {int dummy; } ;
typedef enum pipe { ____Placeholder_pipe } pipe ;


 int FUNC_0 (int ,int const) ;
 int FUNC_1 (struct drm_i915_private*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int) ;
 struct drm_i915_private* FUNC_14 (int ) ;

__attribute__((used)) static void FUNC_15(struct intel_crtc *VAR_0,
    const u16 VAR_1[3],
    const u16 VAR_2[9],
    const u16 VAR_3[3])
{
 struct drm_i915_private *VAR_4 = FUNC_14(VAR_0->base.dev);
 enum pipe VAR_5 = VAR_0->pipe;

 FUNC_0(FUNC_11(VAR_5), VAR_1[0]);
 FUNC_0(FUNC_13(VAR_5), VAR_1[1]);
 FUNC_0(FUNC_12(VAR_5), VAR_1[2]);

 FUNC_0(FUNC_7(VAR_5), VAR_2[0] << 16 | VAR_2[1]);
 FUNC_0(FUNC_4(VAR_5), VAR_2[2] << 16);

 FUNC_0(FUNC_5(VAR_5), VAR_2[3] << 16 | VAR_2[4]);
 FUNC_0(FUNC_2(VAR_5), VAR_2[5] << 16);

 FUNC_0(FUNC_6(VAR_5), VAR_2[6] << 16 | VAR_2[7]);
 FUNC_0(FUNC_3(VAR_5), VAR_2[8] << 16);

 if (FUNC_1(VAR_4) >= 7) {
  FUNC_0(FUNC_8(VAR_5), VAR_3[0]);
  FUNC_0(FUNC_10(VAR_5), VAR_3[1]);
  FUNC_0(FUNC_9(VAR_5), VAR_3[2]);
 }
}
