
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_uncore {int dummy; } ;
struct drm_i915_private {struct intel_uncore uncore; } ;


 int FUNC_0 (struct intel_uncore*,int ) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*) ;
 int FUNC_4 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_5(struct drm_i915_private *VAR_2)
{
 struct intel_uncore *VAR_3 = &VAR_2->uncore;

 if (FUNC_3(VAR_2))
  return;

 FUNC_0(VAR_3, VAR_0);

 if (FUNC_1(VAR_2) || FUNC_2(VAR_2))
  FUNC_4(VAR_1, 0xffffffff);
}
