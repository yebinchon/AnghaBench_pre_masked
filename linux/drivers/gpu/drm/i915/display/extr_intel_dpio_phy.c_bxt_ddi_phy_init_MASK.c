
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; } ;
struct drm_i915_private {TYPE_1__ power_domains; } ;
struct bxt_ddi_phy_info {int rcomp_phy; } ;
typedef enum dpio_phy { ____Placeholder_dpio_phy } dpio_phy ;


 int FUNC_0 (struct drm_i915_private*,int) ;
 int FUNC_1 (struct drm_i915_private*,int) ;
 int FUNC_2 (struct drm_i915_private*,int) ;
 struct bxt_ddi_phy_info* FUNC_3 (struct drm_i915_private*,int) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct drm_i915_private *VAR_0, enum dpio_phy VAR_1)
{
 const struct bxt_ddi_phy_info *VAR_2 =
  FUNC_3(VAR_0, VAR_1);
 enum dpio_phy VAR_3 = VAR_2->rcomp_phy;
 bool VAR_4;

 FUNC_4(&VAR_0->power_domains.lock);

 VAR_4 = 1;
 if (VAR_3 != -1)
  VAR_4 = FUNC_1(VAR_0, VAR_3);





 if (!VAR_4)
  FUNC_0(VAR_0, VAR_3);

 FUNC_0(VAR_0, VAR_1);

 if (!VAR_4)
  FUNC_2(VAR_0, VAR_3);
}
