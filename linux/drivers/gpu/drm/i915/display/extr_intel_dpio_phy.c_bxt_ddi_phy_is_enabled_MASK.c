
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_private {int dummy; } ;
struct bxt_ddi_phy_info {int pwron_mask; } ;
typedef enum dpio_phy { ____Placeholder_dpio_phy } dpio_phy ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 struct bxt_ddi_phy_info* FUNC_4 (struct drm_i915_private*,int) ;

bool FUNC_5(struct drm_i915_private *VAR_4,
       enum dpio_phy VAR_5)
{
 const struct bxt_ddi_phy_info *VAR_6;

 VAR_6 = FUNC_4(VAR_4, VAR_5);

 if (!(FUNC_3(VAR_0) & VAR_6->pwron_mask))
  return 0;

 if ((FUNC_3(FUNC_1(VAR_5)) &
      (VAR_2 | VAR_3)) != VAR_2) {
  FUNC_2("DDI PHY %d powered, but power hasn't settled\n",
     VAR_5);

  return 0;
 }

 if (!(FUNC_3(FUNC_0(VAR_5)) & VAR_1)) {
  FUNC_2("DDI PHY %d powered, but still in reset\n",
     VAR_5);

  return 0;
 }

 return 1;
}
