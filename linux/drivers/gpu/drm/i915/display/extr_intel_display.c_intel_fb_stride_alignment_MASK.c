
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct drm_i915_private {int dummy; } ;
struct drm_framebuffer {scalar_t__* pitches; int modifier; TYPE_1__* format; int dev; } ;
struct TYPE_2__ {int format; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct drm_i915_private*,int ,int ) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 scalar_t__ FUNC_2 (struct drm_framebuffer const*,int) ;
 struct drm_i915_private* FUNC_3 (int ) ;

__attribute__((used)) static u32
FUNC_4(const struct drm_framebuffer *VAR_1, int VAR_2)
{
 struct drm_i915_private *VAR_3 = FUNC_3(VAR_1->dev);

 if (VAR_1->modifier == VAR_0) {
  u32 VAR_4 = FUNC_0(VAR_3,
          VAR_1->format->format,
          VAR_1->modifier);





  if (VAR_1->pitches[VAR_2] > VAR_4)
   return FUNC_1(VAR_3);
  else
   return 64;
 } else {
  return FUNC_2(VAR_1, VAR_2);
 }
}
