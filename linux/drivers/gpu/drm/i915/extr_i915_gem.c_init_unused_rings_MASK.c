
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_gt {struct drm_i915_private* i915; } ;
struct drm_i915_private {int dummy; } ;


 scalar_t__ FUNC_0 (struct drm_i915_private*,int) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct intel_gt*,int ) ;

__attribute__((used)) static void FUNC_3(struct intel_gt *VAR_6)
{
 struct drm_i915_private *VAR_7 = VAR_6->i915;

 if (FUNC_1(VAR_7)) {
  FUNC_2(VAR_6, VAR_0);
  FUNC_2(VAR_6, VAR_2);
  FUNC_2(VAR_6, VAR_3);
  FUNC_2(VAR_6, VAR_4);
  FUNC_2(VAR_6, VAR_5);
 } else if (FUNC_0(VAR_7, 2)) {
  FUNC_2(VAR_6, VAR_2);
  FUNC_2(VAR_6, VAR_3);
 } else if (FUNC_0(VAR_7, 3)) {
  FUNC_2(VAR_6, VAR_0);
  FUNC_2(VAR_6, VAR_1);
 }
}
