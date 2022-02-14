
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct drm_i915_private {int dummy; } ;
typedef int i915_reg_t ;


 int FUNC_0 (int const*) ;







 scalar_t__ FUNC_1 (int const) ;

__attribute__((used)) static bool FUNC_2(struct drm_i915_private *VAR_0, u32 VAR_1)
{
 static const i915_reg_t VAR_2[] = {
  134,
  133,
  132,
  131,
  130,
  129,
  128,
 };
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_2); VAR_3++) {
  if (FUNC_1(VAR_2[VAR_3]) == VAR_1)
   return 1;
 }
 return 0;
}
