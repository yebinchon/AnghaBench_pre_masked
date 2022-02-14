
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_reg_descriptor {int addr; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static const struct drm_i915_reg_descriptor *
FUNC_1(const struct drm_i915_reg_descriptor *VAR_0, int VAR_1, u32 VAR_2)
{
 int VAR_3 = 0, VAR_4 = VAR_1;
 while (VAR_3 < VAR_4) {
  int VAR_5 = VAR_3 + (VAR_4 - VAR_3) / 2;
  int VAR_6 = VAR_2 - FUNC_0(VAR_0[VAR_5].addr);
  if (VAR_6 < 0)
   VAR_4 = VAR_5;
  else if (VAR_6 > 0)
   VAR_3 = VAR_5 + 1;
  else
   return &VAR_0[VAR_5];
 }
 return ((void*)0);
}
