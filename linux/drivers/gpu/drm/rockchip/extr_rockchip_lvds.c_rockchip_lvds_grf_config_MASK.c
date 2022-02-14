
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct rockchip_lvds {scalar_t__ output; int format; int dev; TYPE_2__* soc_data; int grf; TYPE_1__* pins; } ;
struct drm_encoder {int dummy; } ;
struct drm_display_mode {int flags; int htotal; int hsync_start; } ;
struct TYPE_4__ {int grf_soc_con7; } ;
struct TYPE_3__ {int default_state; int p; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct rockchip_lvds* FUNC_2 (struct drm_encoder*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int) ;

__attribute__((used)) static void FUNC_5(struct drm_encoder *VAR_9,
         struct drm_display_mode *VAR_10)
{
 struct rockchip_lvds *VAR_11 = FUNC_2(VAR_9);
 u8 VAR_12 = (VAR_10->flags & VAR_3) ? 1 : 0;
 u8 VAR_13 = (VAR_10->flags & VAR_2) ? 1 : 0;
 u32 VAR_14;
 int VAR_15;


 if (VAR_11->output == VAR_1)
  if (VAR_11->pins && !FUNC_1(VAR_11->pins->default_state))
   FUNC_3(VAR_11->pins->p,
          VAR_11->pins->default_state);
 VAR_14 = VAR_11->format | VAR_4;
 if (VAR_11->output == VAR_1)
  VAR_14 |= VAR_8 | VAR_5;
 else if (VAR_11->output == VAR_0)
  VAR_14 |= VAR_6 | VAR_5;

 if ((VAR_10->htotal - VAR_10->hsync_start) & 0x01)
  VAR_14 |= VAR_7;

 VAR_14 |= (VAR_13 << 8) | (VAR_12 << 9);
 VAR_14 |= (0xffff << 16);
 VAR_15 = FUNC_4(VAR_11->grf, VAR_11->soc_data->grf_soc_con7, VAR_14);
 if (VAR_15 != 0) {
  FUNC_0(VAR_11->dev, "Could not write to GRF: %d\n", VAR_15);
  return;
 }
}
