
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {int dummy; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (struct drm_i915_private*) ;
 int FUNC_5 (struct drm_i915_private*) ;

__attribute__((used)) static void FUNC_6(struct drm_i915_private *VAR_2)
{
 u32 VAR_3;

 FUNC_0("Disabling package C8+\n");

 FUNC_4(VAR_2);
 FUNC_5(VAR_2);

 if (FUNC_1(VAR_2)) {
  VAR_3 = FUNC_2(VAR_1);
  VAR_3 |= VAR_0;
  FUNC_3(VAR_1, VAR_3);
 }
}
