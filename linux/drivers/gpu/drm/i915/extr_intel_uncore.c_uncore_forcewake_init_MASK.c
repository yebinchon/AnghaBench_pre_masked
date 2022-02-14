
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int notifier_call; } ;
struct intel_uncore {TYPE_1__ pmic_bus_access_nb; struct drm_i915_private* i915; } ;
struct drm_i915_private {int dummy; } ;


 int FUNC_0 (struct intel_uncore*,int ) ;
 int FUNC_1 (struct intel_uncore*,int ) ;
 int FUNC_2 (struct intel_uncore*,int ) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (struct drm_i915_private*) ;
 scalar_t__ FUNC_5 (struct drm_i915_private*,int) ;
 scalar_t__ FUNC_6 (struct drm_i915_private*,int,int) ;
 scalar_t__ FUNC_7 (struct drm_i915_private*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_8 (struct intel_uncore*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_9 (struct intel_uncore*) ;
 int FUNC_10 (struct intel_uncore*) ;
 int FUNC_11 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_12(struct intel_uncore *VAR_9)
{
 struct drm_i915_private *VAR_10 = VAR_9->i915;
 int VAR_11;

 FUNC_3(!FUNC_10(VAR_9));

 VAR_11 = FUNC_9(VAR_9);
 if (VAR_11)
  return VAR_11;
 FUNC_8(VAR_9, 0);

 if (FUNC_6(VAR_10, 6, 7)) {
  FUNC_2(VAR_9, VAR_6);

  if (FUNC_7(VAR_10)) {
   FUNC_0(VAR_9, VAR_3);
   FUNC_1(VAR_9, VAR_4);
  } else {
   FUNC_1(VAR_9, VAR_6);
  }
 } else if (FUNC_5(VAR_10, 8)) {
  if (FUNC_4(VAR_10)) {
   FUNC_0(VAR_9, VAR_0);
   FUNC_2(VAR_9, VAR_4);
   FUNC_1(VAR_9, VAR_4);
  } else {
   FUNC_2(VAR_9, VAR_7);
   FUNC_1(VAR_9, VAR_6);
  }
 } else if (FUNC_6(VAR_10, 9, 10)) {
  FUNC_0(VAR_9, VAR_2);
  FUNC_2(VAR_9, VAR_4);
  FUNC_1(VAR_9, VAR_4);
 } else {
  FUNC_0(VAR_9, VAR_1);
  FUNC_2(VAR_9, VAR_5);
  FUNC_1(VAR_9, VAR_5);
 }

 VAR_9->pmic_bus_access_nb.notifier_call = VAR_8;
 FUNC_11(&VAR_9->pmic_bus_access_nb);

 return 0;
}
