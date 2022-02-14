
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_private {int dummy; } ;
struct bxt_ddi_phy_info {int dummy; } ;
typedef enum dpio_phy { ____Placeholder_dpio_phy } dpio_phy ;


 struct bxt_ddi_phy_info* FUNC_0 (struct drm_i915_private*,int*) ;

__attribute__((used)) static const struct bxt_ddi_phy_info *
FUNC_1(struct drm_i915_private *VAR_0, enum dpio_phy VAR_1)
{
 int VAR_2;
 const struct bxt_ddi_phy_info *VAR_3 =
  FUNC_0(VAR_0, &VAR_2);

 return &VAR_3[VAR_1];
}
