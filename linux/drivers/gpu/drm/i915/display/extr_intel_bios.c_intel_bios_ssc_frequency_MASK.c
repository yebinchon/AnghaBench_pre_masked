
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_private {int dummy; } ;


 int FUNC_0 (struct drm_i915_private*) ;

__attribute__((used)) static int FUNC_1(struct drm_i915_private *VAR_0,
        bool VAR_1)
{
 switch (FUNC_0(VAR_0)) {
 case 2:
  return VAR_1 ? 66667 : 48000;
 case 3:
 case 4:
  return VAR_1 ? 100000 : 96000;
 default:
  return VAR_1 ? 100000 : 120000;
 }
}
