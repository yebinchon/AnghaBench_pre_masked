
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_private {scalar_t__ audio_power_refcount; } ;
struct device {int dummy; } ;


 scalar_t__ FUNC_0 (struct drm_i915_private*) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 int VAR_0 ;
 int FUNC_2 (struct drm_i915_private*,int) ;
 int FUNC_3 (struct drm_i915_private*,int ,unsigned long) ;
 struct drm_i915_private* FUNC_4 (struct device*) ;

__attribute__((used)) static void FUNC_5(struct device *VAR_1,
        unsigned long VAR_2)
{
 struct drm_i915_private *VAR_3 = FUNC_4(VAR_1);


 if (--VAR_3->audio_power_refcount == 0)
  if (FUNC_0(VAR_3) || FUNC_1(VAR_3))
   FUNC_2(VAR_3, 0);

 FUNC_3(VAR_3, VAR_0, VAR_2);
}
