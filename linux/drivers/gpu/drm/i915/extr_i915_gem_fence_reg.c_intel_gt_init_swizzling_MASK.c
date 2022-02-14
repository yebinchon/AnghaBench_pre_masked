
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_uncore {int dummy; } ;
struct intel_gt {struct intel_uncore* uncore; struct drm_i915_private* i915; } ;
struct TYPE_2__ {scalar_t__ bit_6_swizzle_x; } ;
struct drm_i915_private {TYPE_1__ mm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (struct drm_i915_private*) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*,int) ;
 int FUNC_2 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct intel_uncore*,int ,int ,int ) ;
 int FUNC_5 (struct intel_uncore*,int ,int ) ;

void FUNC_6(struct intel_gt *VAR_10)
{
 struct drm_i915_private *VAR_11 = VAR_10->i915;
 struct intel_uncore *VAR_12 = VAR_10->uncore;

 if (FUNC_0(VAR_11) < 5 ||
     VAR_11->mm.bit_6_swizzle_x == VAR_7)
  return;

 FUNC_4(VAR_12, VAR_4, 0, VAR_5);

 if (FUNC_1(VAR_11, 5))
  return;

 FUNC_4(VAR_12, VAR_8, 0, VAR_9);

 if (FUNC_1(VAR_11, 6))
  FUNC_5(VAR_12,
       VAR_0,
       FUNC_3(VAR_3));
 else if (FUNC_1(VAR_11, 7))
  FUNC_5(VAR_12,
       VAR_0,
       FUNC_3(VAR_2));
 else if (FUNC_1(VAR_11, 8))
  FUNC_5(VAR_12,
       VAR_6,
       FUNC_3(VAR_1));
 else
  FUNC_2(FUNC_0(VAR_11));
}
