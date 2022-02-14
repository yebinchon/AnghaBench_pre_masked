
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {int dummy; } ;
struct bxt_ddi_phy_info {int pwron_mask; } ;
typedef enum dpio_phy { ____Placeholder_dpio_phy } dpio_phy ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 struct bxt_ddi_phy_info* FUNC_3 (struct drm_i915_private*,int) ;

void FUNC_4(struct drm_i915_private *VAR_2, enum dpio_phy VAR_3)
{
 const struct bxt_ddi_phy_info *VAR_4;
 u32 VAR_5;

 VAR_4 = FUNC_3(VAR_2, VAR_3);

 VAR_5 = FUNC_1(FUNC_0(VAR_3));
 VAR_5 &= ~VAR_1;
 FUNC_2(FUNC_0(VAR_3), VAR_5);

 VAR_5 = FUNC_1(VAR_0);
 VAR_5 &= ~VAR_4->pwron_mask;
 FUNC_2(VAR_0, VAR_5);
}
