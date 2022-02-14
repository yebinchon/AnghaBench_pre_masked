
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct pl111_drm_dev_private {TYPE_3__* variant; scalar_t__ ctrl; scalar_t__ regs; int (* variant_display_enable ) (struct drm_device*,int) ;int tim2_lock; int clk; struct drm_bridge* bridge; struct drm_connector* connector; } ;
struct drm_plane {TYPE_2__* state; } ;
struct drm_crtc {struct drm_device* dev; } ;
struct drm_simple_display_pipe {struct drm_plane plane; struct drm_crtc crtc; } ;
struct drm_plane_state {int dummy; } ;
struct drm_framebuffer {TYPE_1__* format; } ;
struct drm_display_mode {int clock; int hdisplay; int hsync_end; int hsync_start; int htotal; int vdisplay; int vsync_end; int vsync_start; int vtotal; int flags; } ;
struct drm_device {int dev; struct pl111_drm_dev_private* dev_private; } ;
struct drm_crtc_state {struct drm_display_mode mode; } ;
struct TYPE_8__ {int bus_flags; int num_bus_formats; scalar_t__* bus_formats; } ;
struct drm_connector {TYPE_4__ display_info; } ;
struct drm_bridge_timings {int setup_time_ps; } ;
struct drm_bridge {struct drm_bridge_timings* timings; } ;
struct TYPE_7__ {int broken_vblank; scalar_t__ external_bgr; scalar_t__ st_bitmux_control; int is_pl110; scalar_t__ broken_clockdivider; } ;
struct TYPE_6__ {struct drm_framebuffer* fb; } ;
struct TYPE_5__ {int format; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_1 (int,char*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,char*,int,int) ;
 int FUNC_5 (struct drm_crtc*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct drm_device*,int) ;
 int FUNC_11 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_12(struct drm_simple_display_pipe *VAR_31,
     struct drm_crtc_state *VAR_32,
     struct drm_plane_state *VAR_33)
{
 struct drm_crtc *VAR_34 = &VAR_31->crtc;
 struct drm_plane *VAR_35 = &VAR_31->plane;
 struct drm_device *VAR_36 = VAR_34->dev;
 struct pl111_drm_dev_private *VAR_37 = VAR_36->dev_private;
 const struct drm_display_mode *VAR_38 = &VAR_32->mode;
 struct drm_framebuffer *VAR_39 = VAR_35->state->fb;
 struct drm_connector *VAR_40 = VAR_37->connector;
 struct drm_bridge *VAR_41 = VAR_37->bridge;
 bool VAR_42 = 0;
 u32 VAR_43;
 u32 VAR_44, VAR_45, VAR_46, VAR_47;
 u32 VAR_48, VAR_49, VAR_50, VAR_51;
 u32 VAR_52, VAR_53;
 int VAR_54;

 VAR_54 = FUNC_3(VAR_37->clk, VAR_38->clock * 1000);
 if (VAR_54) {
  FUNC_4(VAR_36->dev,
   "Failed to set pixel clock rate to %d: %d\n",
   VAR_38->clock * 1000, VAR_54);
 }

 FUNC_2(VAR_37->clk);

 VAR_44 = (VAR_38->hdisplay / 16) - 1;
 VAR_45 = VAR_38->hsync_end - VAR_38->hsync_start - 1;
 VAR_46 = VAR_38->hsync_start - VAR_38->hdisplay - 1;
 VAR_47 = VAR_38->htotal - VAR_38->hsync_end - 1;

 VAR_48 = VAR_38->vdisplay - 1;
 VAR_49 = VAR_38->vsync_end - VAR_38->vsync_start - 1;
 VAR_50 = VAR_38->vsync_start - VAR_38->vdisplay;
 VAR_51 = VAR_38->vtotal - VAR_38->vsync_end;

 VAR_52 = VAR_38->hdisplay - 1;

 FUNC_11((VAR_44 << 2) |
        (VAR_45 << 8) |
        (VAR_46 << 16) |
        (VAR_47 << 24),
        VAR_37->regs + VAR_0);
 FUNC_11(VAR_48 |
        (VAR_49 << 10) |
        (VAR_50 << 16) |
        (VAR_51 << 24),
        VAR_37->regs + VAR_1);

 FUNC_8(&VAR_37->tim2_lock);

 VAR_53 = FUNC_7(VAR_37->regs + VAR_2);
 VAR_53 &= (VAR_24 | VAR_30 | VAR_29);

 if (VAR_37->variant->broken_clockdivider)
  VAR_53 |= VAR_24;

 if (VAR_38->flags & VAR_20)
  VAR_53 |= VAR_25;

 if (VAR_38->flags & VAR_21)
  VAR_53 |= VAR_28;

 if (VAR_40) {
  if (VAR_40->display_info.bus_flags & VAR_18)
   VAR_53 |= VAR_26;

  if (VAR_40->display_info.bus_flags &
      VAR_19)
   VAR_53 |= VAR_27;

  if (VAR_40->display_info.num_bus_formats == 1 &&
      VAR_40->display_info.bus_formats[0] ==
      VAR_22)
   VAR_42 = 1;







  if (VAR_42)
   VAR_53 |= VAR_23;
 }

 if (VAR_41) {
  const struct drm_bridge_timings *VAR_55 = VAR_41->timings;
  if (VAR_55 && VAR_55->setup_time_ps >= 3000)
   VAR_53 ^= VAR_27;
 }

 VAR_53 |= VAR_52 << 16;
 FUNC_11(VAR_53, VAR_37->regs + VAR_2);
 FUNC_9(&VAR_37->tim2_lock);

 FUNC_11(0, VAR_37->regs + VAR_3);







 if (VAR_42)
  VAR_43 = VAR_9 | VAR_10;
 else

  VAR_43 = VAR_9 | VAR_12 | FUNC_0(1);


 if (VAR_37->variant->st_bitmux_control)
  VAR_43 |= VAR_16;







 switch (VAR_39->format->format) {
 case 136:

  if (VAR_37->variant->st_bitmux_control)
   VAR_43 |= VAR_17 | VAR_4;
  break;
 case 134:

  if (VAR_37->variant->st_bitmux_control)
   VAR_43 |= VAR_17;
  break;
 case 141:
 case 131:
  if (VAR_37->variant->st_bitmux_control)
   VAR_43 |= VAR_8 | VAR_4;
  else
   VAR_43 |= VAR_8;
  break;
 case 138:
 case 128:
  if (VAR_37->variant->st_bitmux_control)
   VAR_43 |= VAR_8;
  else
   VAR_43 |= VAR_8 | VAR_4;
  break;
 case 137:
  if (VAR_37->variant->is_pl110)
   VAR_43 |= VAR_5;
  else if (VAR_37->variant->st_bitmux_control)
   VAR_43 |= VAR_5 | VAR_15 | VAR_4;
  else
   VAR_43 |= VAR_7;
  break;
 case 135:
  if (VAR_37->variant->is_pl110)
   VAR_43 |= VAR_5 | VAR_4;
  else if (VAR_37->variant->st_bitmux_control)
   VAR_43 |= VAR_5 | VAR_15;
  else
   VAR_43 |= VAR_7 | VAR_4;
  break;
 case 143:
 case 133:
  VAR_43 |= VAR_5;
  if (VAR_37->variant->st_bitmux_control)
   VAR_43 |= VAR_14 | VAR_4;
  break;
 case 140:
 case 130:
  VAR_43 |= VAR_5;
  if (VAR_37->variant->st_bitmux_control)
   VAR_43 |= VAR_14;
  else
   VAR_43 |= VAR_4;
  break;
 case 142:
 case 132:
  VAR_43 |= VAR_6;
  if (VAR_37->variant->st_bitmux_control)
   VAR_43 |= VAR_13 | VAR_4;
  break;
 case 139:
 case 129:
  VAR_43 |= VAR_6;
  if (VAR_37->variant->st_bitmux_control)
   VAR_43 |= VAR_13;
  else
   VAR_43 |= VAR_4;
  break;
 default:
  FUNC_1(1, "Unknown FB format 0x%08x\n",
     VAR_39->format->format);
  break;
 }


 if (VAR_37->variant->external_bgr)
  VAR_43 &= ~VAR_4;


 FUNC_11(VAR_43, VAR_37->regs + VAR_37->ctrl);





 FUNC_6(20);

 if (VAR_37->variant_display_enable)
  VAR_37->variant_display_enable(VAR_36, VAR_39->format->format);


 VAR_43 |= VAR_11;
 FUNC_11(VAR_43, VAR_37->regs + VAR_37->ctrl);

 if (!VAR_37->variant->broken_vblank)
  FUNC_5(VAR_34);
}
