
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_minor {int dev; } ;
struct drm_i915_private {int dummy; } ;
struct device {int dummy; } ;


 struct drm_minor* FUNC_0 (struct device*) ;
 struct drm_i915_private* FUNC_1 (int ) ;

__attribute__((used)) static inline struct drm_i915_private *FUNC_2(struct device *VAR_0)
{
 struct drm_minor *VAR_1 = FUNC_0(VAR_0);
 return FUNC_1(VAR_1->dev);
}
