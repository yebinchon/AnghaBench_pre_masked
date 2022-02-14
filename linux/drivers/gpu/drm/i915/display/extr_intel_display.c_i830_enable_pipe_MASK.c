
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_crtc {int dummy; } ;
struct drm_i915_private {int dummy; } ;
struct dpll {int m1; int m2; int p1; int p2; int n; int dot; int vco; } ;
typedef enum pipe { ____Placeholder_pipe } pipe ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,int ,int ,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_9 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int) ;
 int FUNC_14 (int) ;
 int FUNC_15 (int,struct dpll*) ;
 int FUNC_16 (struct dpll*) ;
 struct intel_crtc* FUNC_17 (struct drm_i915_private*,int) ;
 int FUNC_18 (struct intel_crtc*) ;
 int FUNC_19 (int) ;
 int FUNC_20 (int) ;

void FUNC_21(struct drm_i915_private *VAR_8, enum pipe VAR_9)
{
 struct intel_crtc *VAR_10 = FUNC_17(VAR_8, VAR_9);

 struct dpll VAR_11 = {
  .m1 = 18,
  .m2 = 7,
  .p1 = 13,
  .p2 = 4,
  .n = 2,
 };
 u32 VAR_12, VAR_13;
 int VAR_14;

 FUNC_14(FUNC_15(48000, &VAR_11) != 25154);

 FUNC_1("enabling pipe %c due to force quirk (vco=%d dot=%d)\n",
        FUNC_19(VAR_9), VAR_11.vco, VAR_11.dot);

 VAR_13 = FUNC_16(&VAR_11);
 VAR_12 = VAR_0 |
  VAR_3 |
  ((VAR_11.p1 - 2) << VAR_1) |
  VAR_6 |
  VAR_7 |
  VAR_2;

 FUNC_7(FUNC_2(VAR_9), VAR_13);
 FUNC_7(FUNC_3(VAR_9), VAR_13);

 FUNC_7(FUNC_6(VAR_9), (640 - 1) | ((800 - 1) << 16));
 FUNC_7(FUNC_4(VAR_9), (640 - 1) | ((800 - 1) << 16));
 FUNC_7(FUNC_5(VAR_9), (656 - 1) | ((752 - 1) << 16));
 FUNC_7(FUNC_13(VAR_9), (480 - 1) | ((525 - 1) << 16));
 FUNC_7(FUNC_11(VAR_9), (480 - 1) | ((525 - 1) << 16));
 FUNC_7(FUNC_12(VAR_9), (490 - 1) | ((492 - 1) << 16));
 FUNC_7(FUNC_9(VAR_9), ((640 - 1) << 16) | (480 - 1));






 FUNC_7(FUNC_0(VAR_9), VAR_12 & ~VAR_3);
 FUNC_7(FUNC_0(VAR_9), VAR_12);


 FUNC_10(FUNC_0(VAR_9));
 FUNC_20(150);






 FUNC_7(FUNC_0(VAR_9), VAR_12);


 for (VAR_14 = 0; VAR_14 < 3 ; VAR_14++) {
  FUNC_7(FUNC_0(VAR_9), VAR_12);
  FUNC_10(FUNC_0(VAR_9));
  FUNC_20(150);
 }

 FUNC_7(FUNC_8(VAR_9), VAR_4 | VAR_5);
 FUNC_10(FUNC_8(VAR_9));

 FUNC_18(VAR_10);
}
