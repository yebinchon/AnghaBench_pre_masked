
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int const u32 ;
struct drm_i915_private {int dummy; } ;


 unsigned int const FUNC_0 (unsigned int const) ;
 size_t FUNC_1 (unsigned int const) ;
 size_t FUNC_2 (unsigned int const) ;

__attribute__((used)) static u32 FUNC_3(struct drm_i915_private *VAR_0, u32 VAR_1)
{
 const unsigned int VAR_2[8] = { 4, 8, 12, 16, 16, 16, 16, 16 };
 const unsigned int VAR_3[4] = { 1, 1, 2, 2 };

 return FUNC_0(VAR_1) *
  VAR_2[FUNC_2(VAR_1)] *
  VAR_3[FUNC_1(VAR_1)];
}
