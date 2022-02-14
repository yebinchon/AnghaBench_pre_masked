
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct drm_i915_private {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct drm_i915_private*) ;




 int FUNC_1 (struct drm_i915_private*) ;
 int FUNC_2 (struct drm_i915_private*) ;
 int FUNC_3 (struct drm_i915_private*) ;

__attribute__((used)) static int
FUNC_4(struct drm_i915_private *VAR_2, u64 VAR_3)
{
 switch (VAR_3) {
 case 131:
  if (FUNC_3(VAR_2) || FUNC_2(VAR_2))

   return -VAR_0;

 case 128:
  if (FUNC_1(VAR_2) < 6)
   return -VAR_0;
  break;
 case 130:
  break;
 case 129:
  if (!FUNC_0(VAR_2))
   return -VAR_0;
  break;
 default:
  return -VAR_1;
 }

 return 0;
}
