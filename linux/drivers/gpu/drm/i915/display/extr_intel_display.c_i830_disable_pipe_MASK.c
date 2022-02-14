
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_crtc {int dummy; } ;
struct drm_i915_private {int dummy; } ;
typedef enum pipe { ____Placeholder_pipe } pipe ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int VAR_2 ;
 int FUNC_6 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int) ;
 struct intel_crtc* FUNC_9 (struct drm_i915_private*,int) ;
 int FUNC_10 (struct intel_crtc*) ;
 int FUNC_11 (int) ;

void FUNC_12(struct drm_i915_private *VAR_8, enum pipe VAR_9)
{
 struct intel_crtc *VAR_10 = FUNC_9(VAR_8, VAR_9);

 FUNC_2("disabling pipe %c due to force quirk\n",
        FUNC_11(VAR_9));

 FUNC_8(FUNC_4(FUNC_3(VAR_5)) & VAR_0);
 FUNC_8(FUNC_4(FUNC_3(VAR_6)) & VAR_0);
 FUNC_8(FUNC_4(FUNC_3(VAR_7)) & VAR_0);
 FUNC_8(FUNC_4(FUNC_0(VAR_3)) & VAR_2);
 FUNC_8(FUNC_4(FUNC_0(VAR_4)) & VAR_2);

 FUNC_5(FUNC_6(VAR_9), 0);
 FUNC_7(FUNC_6(VAR_9));

 FUNC_10(VAR_10);

 FUNC_5(FUNC_1(VAR_9), VAR_1);
 FUNC_7(FUNC_1(VAR_9));
}
