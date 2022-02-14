
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {int dummy; } ;
typedef enum pipe { ____Placeholder_pipe } pipe ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,char*) ;
 scalar_t__ FUNC_4 (struct drm_i915_private*,int) ;

__attribute__((used)) static void FUNC_5(struct drm_i915_private *VAR_1,
          enum pipe VAR_2)
{
 u32 VAR_3;


 if (FUNC_4(VAR_1, 5))
  return;


 if (FUNC_1(VAR_1))
  return;

 VAR_3 = FUNC_2(FUNC_0(VAR_2));
 FUNC_3(!(VAR_3 & VAR_0), "FDI TX PLL assertion failure, should be active but is disabled\n");
}
