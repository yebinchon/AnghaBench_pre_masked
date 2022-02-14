
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {int dummy; } ;
typedef scalar_t__ intel_wakeref_t ;
typedef enum transcoder { ____Placeholder_transcoder } transcoder ;
typedef enum pipe { ____Placeholder_pipe } pipe ;
typedef enum intel_display_power_domain { ____Placeholder_intel_display_power_domain } intel_display_power_domain ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,char*,int ,int ,int ) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 int FUNC_3 (int) ;
 int VAR_0 ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (struct drm_i915_private*,int) ;
 int FUNC_6 (struct drm_i915_private*,int,scalar_t__) ;
 int FUNC_7 (struct drm_i915_private*,int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;

void FUNC_10(struct drm_i915_private *VAR_1,
   enum pipe VAR_2, bool VAR_3)
{
 bool VAR_4;
 enum transcoder VAR_5 = FUNC_7(VAR_1,
              VAR_2);
 enum intel_display_power_domain VAR_6;
 intel_wakeref_t VAR_7;


 if (FUNC_2(VAR_1))
  VAR_3 = 1;

 VAR_6 = FUNC_4(VAR_5);
 VAR_7 = FUNC_5(VAR_1, VAR_6);
 if (VAR_7) {
  u32 VAR_8 = FUNC_0(FUNC_3(VAR_5));
  VAR_4 = !!(VAR_8 & VAR_0);

  FUNC_6(VAR_1, VAR_6, VAR_7);
 } else {
  VAR_4 = 0;
 }

 FUNC_1(VAR_4 != VAR_3,
      "pipe %c assertion failure (expected %s, current %s)\n",
   FUNC_9(VAR_2), FUNC_8(VAR_3), FUNC_8(VAR_4));
}
