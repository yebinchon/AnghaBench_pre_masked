
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_i915_private {int dummy; } ;
struct TYPE_2__ {int dev; } ;
struct drm_i915_gem_object {TYPE_1__ base; } ;


 unsigned int VAR_0 ;
 scalar_t__ FUNC_0 (struct drm_i915_private*) ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_1 (struct drm_i915_private*) ;
 int FUNC_2 (unsigned int,unsigned int) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*,int) ;
 int FUNC_4 (unsigned int) ;
 struct drm_i915_private* FUNC_5 (int ) ;

__attribute__((used)) static bool
FUNC_6(struct drm_i915_gem_object *VAR_5,
        unsigned int VAR_6, unsigned int VAR_7)
{
 struct drm_i915_private *VAR_8 = FUNC_5(VAR_5->base.dev);
 unsigned int VAR_9;


 if (VAR_6 == VAR_2)
  return 1;

 if (VAR_6 > VAR_1)
  return 0;




 if (FUNC_1(VAR_8) >= 7) {
  if (VAR_7 / 128 > VAR_0)
   return 0;
 } else if (FUNC_1(VAR_8) >= 4) {
  if (VAR_7 / 128 > VAR_4)
   return 0;
 } else {
  if (VAR_7 > 8192)
   return 0;

  if (!FUNC_4(VAR_7))
   return 0;
 }

 if (FUNC_3(VAR_8, 2) ||
     (VAR_6 == VAR_3 && FUNC_0(VAR_8)))
  VAR_9 = 128;
 else
  VAR_9 = 512;

 if (!VAR_7 || !FUNC_2(VAR_7, VAR_9))
  return 0;

 return 1;
}
