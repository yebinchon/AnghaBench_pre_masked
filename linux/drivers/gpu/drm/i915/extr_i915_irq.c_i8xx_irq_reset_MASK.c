
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_uncore {int dummy; } ;
struct drm_i915_private {struct intel_uncore uncore; } ;


 int FUNC_0 (struct intel_uncore*) ;
 int FUNC_1 (struct drm_i915_private*) ;

__attribute__((used)) static void FUNC_2(struct drm_i915_private *VAR_0)
{
 struct intel_uncore *VAR_1 = &VAR_0->uncore;

 FUNC_1(VAR_0);

 FUNC_0(VAR_1);
}
