
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct regmask {int gen_mask; int reg; } ;
struct drm_i915_private {int dummy; } ;
typedef int i915_reg_t ;
struct TYPE_2__ {int gen_mask; } ;


 TYPE_1__* FUNC_0 (struct drm_i915_private*) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static bool FUNC_2(struct drm_i915_private *VAR_0,
       i915_reg_t VAR_1,
       const struct regmask *VAR_2,
       unsigned long VAR_3)
{
 u32 VAR_4 = FUNC_1(VAR_1);

 while (VAR_3--) {
  if (FUNC_0(VAR_0)->gen_mask & VAR_2->gen_mask &&
      FUNC_1(VAR_2->reg) == VAR_4)
   return 1;
  VAR_2++;
 }

 return 0;
}
