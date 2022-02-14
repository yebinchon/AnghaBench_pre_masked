
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_private {int dummy; } ;
typedef enum dpio_phy { ____Placeholder_dpio_phy } dpio_phy ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (struct drm_i915_private*,int ,int ,int) ;

__attribute__((used)) static void FUNC_3(struct drm_i915_private *VAR_1,
      enum dpio_phy VAR_2)
{
 if (FUNC_2(VAR_1, FUNC_0(VAR_2),
      VAR_0, 10))
  FUNC_1("timeout waiting for PHY%d GRC\n", VAR_2);
}
