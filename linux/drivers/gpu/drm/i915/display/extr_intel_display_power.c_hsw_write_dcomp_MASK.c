
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct drm_i915_private*,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct drm_i915_private *VAR_2, u32 VAR_3)
{
 if (FUNC_2(VAR_2)) {
  if (FUNC_4(VAR_2,
         VAR_1, VAR_3))
   FUNC_0("Failed to write to D_COMP\n");
 } else {
  FUNC_1(VAR_0, VAR_3);
  FUNC_3(VAR_0);
 }
}
