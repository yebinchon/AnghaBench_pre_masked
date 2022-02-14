
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_uncore {int dummy; } ;
struct drm_i915_private {int gt; struct intel_uncore uncore; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct intel_uncore*,int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct drm_i915_private*,int) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct drm_i915_private*) ;
 int FUNC_5 (struct intel_uncore*,int ,int) ;

__attribute__((used)) static void FUNC_6(struct drm_i915_private *VAR_4)
{
 struct intel_uncore *VAR_5 = &VAR_4->uncore;

 FUNC_0(VAR_5, VAR_0);
 if (FUNC_1(VAR_4, 7))
  FUNC_5(VAR_5, VAR_3, 0xffffffff);

 if (FUNC_2(VAR_4)) {
  FUNC_5(VAR_5, VAR_2, 0xffffffff);
  FUNC_5(VAR_5, VAR_1, 0xffffffff);
 }

 FUNC_3(&VAR_4->gt);

 FUNC_4(VAR_4);
}
