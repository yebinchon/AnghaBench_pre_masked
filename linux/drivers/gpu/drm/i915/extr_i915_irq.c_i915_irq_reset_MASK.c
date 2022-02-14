
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_uncore {int dummy; } ;
struct drm_i915_private {struct intel_uncore uncore; } ;


 int VAR_0 ;
 int FUNC_0 (struct intel_uncore*,int ) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int VAR_1 ;
 int FUNC_4 (struct drm_i915_private*,int,int ) ;
 int FUNC_5 (struct drm_i915_private*) ;

__attribute__((used)) static void FUNC_6(struct drm_i915_private *VAR_2)
{
 struct intel_uncore *VAR_3 = &VAR_2->uncore;

 if (FUNC_1(VAR_2)) {
  FUNC_4(VAR_2, 0xffffffff, 0);
  FUNC_3(VAR_1, FUNC_2(VAR_1));
 }

 FUNC_5(VAR_2);

 FUNC_0(VAR_3, VAR_0);
}
