
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {int dummy; } ;
typedef int long_pulse_detect_func ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct drm_i915_private*) ;
 int VAR_4 ;
 int VAR_5 ;
 int* VAR_6 ;
 int* VAR_7 ;
 int FUNC_4 (struct drm_i915_private*,int*,int*,int,int,int const*,int ) ;
 int FUNC_5 (struct drm_i915_private*,int,int) ;

__attribute__((used)) static void FUNC_6(struct drm_i915_private *VAR_8, u32 VAR_9)
{
 u32 VAR_10 = 0, VAR_11 = 0;
 u32 VAR_12 = VAR_9 & VAR_1;
 u32 VAR_13 = VAR_9 & VAR_0;
 long_pulse_detect_func VAR_14;
 const u32 *VAR_15;

 if (FUNC_3(VAR_8) >= 12) {
  VAR_14 = VAR_5;
  VAR_15 = VAR_7;
 } else {
  VAR_14 = VAR_4;
  VAR_15 = VAR_6;
 }

 if (VAR_12) {
  u32 VAR_16;

  VAR_16 = FUNC_1(VAR_3);
  FUNC_2(VAR_3, VAR_16);

  FUNC_4(VAR_8, &VAR_10, &VAR_11, VAR_12,
       VAR_16, VAR_15, VAR_14);
 }

 if (VAR_13) {
  u32 VAR_17;

  VAR_17 = FUNC_1(VAR_2);
  FUNC_2(VAR_2, VAR_17);

  FUNC_4(VAR_8, &VAR_10, &VAR_11, VAR_13,
       VAR_17, VAR_15, VAR_14);
 }

 if (VAR_10)
  FUNC_5(VAR_8, VAR_10, VAR_11);
 else
  FUNC_0("Unexpected DE HPD interrupt 0x%08x\n", VAR_9);
}
