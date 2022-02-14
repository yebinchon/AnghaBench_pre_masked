
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {int dummy; } ;


 scalar_t__ FUNC_0 (struct drm_i915_private*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*) ;
 scalar_t__ FUNC_4 (struct drm_i915_private*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (int) ;

void FUNC_6(struct drm_i915_private *VAR_2)
{
 int VAR_3;
 int VAR_4;

 if (FUNC_0(VAR_2))
  return;




 if (FUNC_4(VAR_2) || FUNC_3(VAR_2))
  VAR_3 = 2;
 else
  VAR_3 = 1;

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  u32 VAR_5 = FUNC_1(FUNC_5(VAR_4));

  VAR_5 = (VAR_5 & ~VAR_0) | VAR_1;
  FUNC_2(FUNC_5(VAR_4), VAR_5);
 }
}
