
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_private {int audio_power_refcount; } ;
struct device {int dummy; } ;
typedef unsigned long intel_wakeref_t ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 int VAR_0 ;
 int FUNC_3 (struct drm_i915_private*,int) ;
 unsigned long FUNC_4 (struct drm_i915_private*,int ) ;
 struct drm_i915_private* FUNC_5 (struct device*) ;

__attribute__((used)) static unsigned long FUNC_6(struct device *VAR_1)
{
 struct drm_i915_private *VAR_2 = FUNC_5(VAR_1);
 intel_wakeref_t VAR_3;


 FUNC_0(sizeof(intel_wakeref_t) > sizeof(unsigned long));

 VAR_3 = FUNC_4(VAR_2, VAR_0);


 if (VAR_2->audio_power_refcount++ == 0)
  if (FUNC_1(VAR_2) || FUNC_2(VAR_2))
   FUNC_3(VAR_2, 1);

 return VAR_3;
}
