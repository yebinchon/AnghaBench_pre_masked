
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_8__ {TYPE_3__* encoder; } ;
struct ti_sn_bridge {int regmap; TYPE_4__ bridge; } ;
struct drm_display_mode {int flags; int hdisplay; int vdisplay; int hsync_end; int hsync_start; int vsync_end; int vsync_start; int htotal; int vtotal; } ;
struct TYPE_7__ {TYPE_2__* crtc; } ;
struct TYPE_6__ {TYPE_1__* state; } ;
struct TYPE_5__ {struct drm_display_mode adjusted_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (struct ti_sn_bridge*,int ,int) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static void FUNC_3(struct ti_sn_bridge *VAR_14)
{
 struct drm_display_mode *VAR_15 =
  &VAR_14->bridge.encoder->crtc->state->adjusted_mode;
 u8 VAR_16 = 0, VAR_17 = 0;

 if (VAR_15->flags & VAR_2)
  VAR_16 = VAR_0;
 if (VAR_15->flags & VAR_3)
  VAR_17 = VAR_1;

 FUNC_1(VAR_14, VAR_4,
          VAR_15->hdisplay);
 FUNC_1(VAR_14, VAR_10,
          VAR_15->vdisplay);
 FUNC_0(VAR_14->regmap, VAR_8,
       (VAR_15->hsync_end - VAR_15->hsync_start) & 0xFF);
 FUNC_0(VAR_14->regmap, VAR_7,
       (((VAR_15->hsync_end - VAR_15->hsync_start) >> 8) & 0x7F) |
       VAR_16);
 FUNC_0(VAR_14->regmap, VAR_13,
       (VAR_15->vsync_end - VAR_15->vsync_start) & 0xFF);
 FUNC_0(VAR_14->regmap, VAR_12,
       (((VAR_15->vsync_end - VAR_15->vsync_start) >> 8) & 0x7F) |
       VAR_17);

 FUNC_0(VAR_14->regmap, VAR_5,
       (VAR_15->htotal - VAR_15->hsync_end) & 0xFF);
 FUNC_0(VAR_14->regmap, VAR_9,
       (VAR_15->vtotal - VAR_15->vsync_end) & 0xFF);

 FUNC_0(VAR_14->regmap, VAR_6,
       (VAR_15->hsync_start - VAR_15->hdisplay) & 0xFF);
 FUNC_0(VAR_14->regmap, VAR_11,
       (VAR_15->vsync_start - VAR_15->vdisplay) & 0xFF);

 FUNC_2(10000, 10500);
}
