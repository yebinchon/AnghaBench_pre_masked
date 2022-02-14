
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {int runtime_pm; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
typedef int intel_wakeref_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct drm_i915_private*,int ) ;
 int FUNC_4 (struct drm_i915_private*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 struct drm_i915_private* FUNC_7 (struct device*) ;
 int FUNC_8 (char*,int ,char*,int) ;
 int FUNC_9 (struct drm_i915_private*) ;
 int FUNC_10 (struct drm_i915_private*) ;
 int FUNC_11 (struct drm_i915_private*,int ) ;

__attribute__((used)) static ssize_t FUNC_12(struct device *VAR_3,
        struct device_attribute *VAR_4, char *VAR_5)
{
 struct drm_i915_private *VAR_6 = FUNC_7(VAR_3);
 intel_wakeref_t VAR_7;
 u32 VAR_8;

 VAR_7 = FUNC_5(&VAR_6->runtime_pm);

 if (FUNC_2(VAR_6) || FUNC_1(VAR_6)) {
  FUNC_9(VAR_6);
  VAR_8 = FUNC_11(VAR_6, VAR_2);
  FUNC_10(VAR_6);

  VAR_8 = (VAR_8 >> 8) & 0xff;
 } else {
  VAR_8 = FUNC_3(VAR_6, FUNC_0(VAR_0));
 }

 FUNC_6(&VAR_6->runtime_pm, VAR_7);

 return FUNC_8(VAR_5, VAR_1, "%d\n", FUNC_4(VAR_6, VAR_8));
}
