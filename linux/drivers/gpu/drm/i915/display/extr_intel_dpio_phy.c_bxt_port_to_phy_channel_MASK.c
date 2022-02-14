
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_i915_private {int dummy; } ;
struct bxt_ddi_phy_info {TYPE_1__* channel; scalar_t__ dual_channel; } ;
typedef enum port { ____Placeholder_port } port ;
typedef enum dpio_phy { ____Placeholder_dpio_phy } dpio_phy ;
typedef enum dpio_channel { ____Placeholder_dpio_channel } dpio_channel ;
struct TYPE_2__ {int port; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*,int ) ;
 struct bxt_ddi_phy_info* FUNC_1 (struct drm_i915_private*,int*) ;
 int FUNC_2 (int) ;

void FUNC_3(struct drm_i915_private *VAR_3, enum port VAR_4,
        enum dpio_phy *VAR_5, enum dpio_channel *VAR_6)
{
 const struct bxt_ddi_phy_info *VAR_7, *VAR_8;
 int VAR_9, VAR_10;

 VAR_8 = FUNC_1(VAR_3, &VAR_10);

 for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++) {
  VAR_7 = &VAR_8[VAR_9];

  if (VAR_4 == VAR_7->channel[VAR_0].port) {
   *VAR_5 = VAR_9;
   *VAR_6 = VAR_0;
   return;
  }

  if (VAR_7->dual_channel &&
      VAR_4 == VAR_7->channel[VAR_1].port) {
   *VAR_5 = VAR_9;
   *VAR_6 = VAR_1;
   return;
  }
 }

 FUNC_0(1, "PHY not found for PORT %c", FUNC_2(VAR_4));
 *VAR_5 = VAR_2;
 *VAR_6 = VAR_0;
}
