
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_uncore {int dummy; } ;
struct intel_gt {struct intel_uncore* uncore; struct drm_i915_private* i915; } ;
struct drm_i915_private {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (struct drm_i915_private*,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (struct drm_i915_private*) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*) ;
 scalar_t__ FUNC_4 (struct drm_i915_private*) ;
 scalar_t__ FUNC_5 (struct drm_i915_private*,int,int) ;
 int FUNC_6 (int) ;
 scalar_t__ FUNC_7 (struct intel_uncore*,int ) ;
 int FUNC_8 (struct intel_uncore*,int ,int ,int ) ;
 int FUNC_9 (struct intel_uncore*,int ,int ) ;

__attribute__((used)) static void FUNC_10(struct intel_gt *VAR_11)
{
 struct drm_i915_private *VAR_12 = VAR_11->i915;
 struct intel_uncore *VAR_13 = VAR_11->uncore;






 if (FUNC_2(VAR_12))
  FUNC_9(VAR_13,
       VAR_2,
       VAR_3);
 else if (FUNC_3(VAR_12))
  FUNC_9(VAR_13,
       VAR_2,
       VAR_4);
 else if (FUNC_4(VAR_12))
  FUNC_9(VAR_13,
       VAR_2,
       VAR_5);
 else if (FUNC_1(VAR_12) >= 9)
  FUNC_9(VAR_13,
       VAR_2,
       VAR_6);
 if (FUNC_0(VAR_12, VAR_10) &&
     FUNC_1(VAR_12) <= 10)
  FUNC_8(VAR_13,
     VAR_1,
     0,
     VAR_0);

 if (FUNC_5(VAR_12, 8, 11)) {
  bool VAR_14 = 1;







  if (FUNC_0(VAR_12, VAR_9))
   VAR_14 = 0;


  FUNC_9(VAR_13,
       VAR_8,
       VAR_14 ? VAR_7 : 0);
  FUNC_6(VAR_14 &&
        FUNC_7(VAR_13,
            VAR_8) == 0);
 }
}
