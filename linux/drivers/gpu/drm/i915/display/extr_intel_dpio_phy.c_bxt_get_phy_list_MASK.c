
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_private {int dummy; } ;
struct bxt_ddi_phy_info {int dummy; } ;


 int FUNC_0 (struct bxt_ddi_phy_info const*) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 struct bxt_ddi_phy_info const* VAR_0 ;
 struct bxt_ddi_phy_info const* VAR_1 ;

__attribute__((used)) static const struct bxt_ddi_phy_info *
FUNC_2(struct drm_i915_private *VAR_2, int *VAR_3)
{
 if (FUNC_1(VAR_2)) {
  *VAR_3 = FUNC_0(VAR_1);
  return VAR_1;
 } else {
  *VAR_3 = FUNC_0(VAR_0);
  return VAR_0;
 }
}
