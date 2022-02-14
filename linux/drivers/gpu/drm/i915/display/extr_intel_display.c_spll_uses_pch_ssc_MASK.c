
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static bool FUNC_2(struct drm_i915_private *VAR_7)
{
 u32 VAR_8 = FUNC_0(VAR_0);
 u32 VAR_9 = FUNC_0(VAR_2);

 if ((VAR_9 & VAR_3) == 0)
  return 0;

 if ((VAR_9 & VAR_4) == VAR_5 &&
     (VAR_8 & VAR_1) == 0)
  return 1;

 if (FUNC_1(VAR_7) &&
     (VAR_9 & VAR_4) == VAR_6)
  return 1;

 return 0;
}
