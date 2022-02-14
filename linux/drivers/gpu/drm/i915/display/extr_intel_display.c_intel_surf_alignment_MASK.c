
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_private {int dummy; } ;
struct drm_framebuffer {int modifier; int dev; } ;
 int FUNC_0 (struct drm_i915_private*) ;
 int FUNC_1 (int) ;
 unsigned int FUNC_2 (struct drm_i915_private*) ;
 struct drm_i915_private* FUNC_3 (int ) ;

__attribute__((used)) static unsigned int FUNC_4(const struct drm_framebuffer *VAR_0,
      int VAR_1)
{
 struct drm_i915_private *VAR_2 = FUNC_3(VAR_0->dev);


 if (VAR_1 == 1)
  return 4096;

 switch (VAR_0->modifier) {
 case 133:
  return FUNC_2(VAR_2);
 case 132:
  if (FUNC_0(VAR_2) >= 9)
   return 256 * 1024;
  return 0;
 case 130:
 case 128:
 case 131:
 case 129:
  return 1 * 1024 * 1024;
 default:
  FUNC_1(VAR_0->modifier);
  return 0;
 }
}
