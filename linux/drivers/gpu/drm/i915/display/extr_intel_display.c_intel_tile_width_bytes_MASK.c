
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_i915_private {int dummy; } ;
struct drm_framebuffer {int modifier; TYPE_1__* format; int dev; } ;
struct TYPE_2__ {unsigned int* cpp; } ;



 int FUNC_0 (struct drm_i915_private*) ;





 int FUNC_1 (struct drm_i915_private*,int) ;
 int FUNC_2 (unsigned int) ;
 unsigned int FUNC_3 (struct drm_i915_private*) ;
 struct drm_i915_private* FUNC_4 (int ) ;

__attribute__((used)) static unsigned int
FUNC_5(const struct drm_framebuffer *VAR_0, int VAR_1)
{
 struct drm_i915_private *VAR_2 = FUNC_4(VAR_0->dev);
 unsigned int VAR_3 = VAR_0->format->cpp[VAR_1];

 switch (VAR_0->modifier) {
 case 133:
  return FUNC_3(VAR_2);
 case 132:
  if (FUNC_1(VAR_2, 2))
   return 128;
  else
   return 512;
 case 130:
  if (VAR_1 == 1)
   return 128;

 case 131:
  if (FUNC_1(VAR_2, 2) || FUNC_0(VAR_2))
   return 128;
  else
   return 512;
 case 128:
  if (VAR_1 == 1)
   return 128;

 case 129:
  switch (VAR_3) {
  case 1:
   return 64;
  case 2:
  case 4:
   return 128;
  case 8:
  case 16:
   return 256;
  default:
   FUNC_2(VAR_3);
   return VAR_3;
  }
  break;
 default:
  FUNC_2(VAR_0->modifier);
  return VAR_3;
 }
}
