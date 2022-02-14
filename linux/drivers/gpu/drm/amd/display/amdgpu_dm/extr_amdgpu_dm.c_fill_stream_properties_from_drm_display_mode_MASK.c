
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_display_mode {int flags; int crtc_clock; scalar_t__ crtc_vsync_start; scalar_t__ crtc_vsync_end; scalar_t__ crtc_vdisplay; int crtc_vtotal; scalar_t__ crtc_hdisplay; scalar_t__ crtc_hsync_start; scalar_t__ crtc_hsync_end; int crtc_htotal; } ;
struct drm_display_info {int color_formats; } ;
struct drm_connector_state {int dummy; } ;
struct drm_connector {struct drm_display_info display_info; } ;
struct TYPE_3__ {int HSYNC_POSITIVE_POLARITY; int VSYNC_POSITIVE_POLARITY; } ;
struct dc_crtc_timing {int pix_clk_100hz; int aspect_ratio; scalar_t__ v_sync_width; scalar_t__ v_front_porch; scalar_t__ v_addressable; int v_total; scalar_t__ h_front_porch; scalar_t__ h_sync_width; int h_total; scalar_t__ h_addressable; TYPE_1__ flags; int vic; scalar_t__ hdmi_vic; int scan_type; int display_color_depth; int timing_3d_format; int pixel_encoding; scalar_t__ v_border_bottom; scalar_t__ v_border_top; scalar_t__ h_border_right; scalar_t__ h_border_left; } ;
struct dc_stream_state {scalar_t__ signal; TYPE_2__* out_transfer_func; int output_color_space; struct dc_crtc_timing timing; } ;
struct TYPE_4__ {int tf; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct dc_crtc_timing*,struct drm_display_info const*) ;
 int FUNC_1 (struct drm_connector const*,struct drm_connector_state const*) ;
 int FUNC_2 (struct drm_display_mode const*) ;
 scalar_t__ FUNC_3 (struct drm_display_info const*,struct drm_display_mode const*) ;
 int FUNC_4 (struct drm_display_mode const*) ;
 int FUNC_5 (struct dc_crtc_timing*) ;
 int FUNC_6 (struct dc_crtc_timing*,int ,int) ;

__attribute__((used)) static void FUNC_7(
 struct dc_stream_state *VAR_11,
 const struct drm_display_mode *VAR_12,
 const struct drm_connector *VAR_13,
 const struct drm_connector_state *VAR_14,
 const struct dc_stream_state *VAR_15)
{
 struct dc_crtc_timing *VAR_16 = &VAR_11->timing;
 const struct drm_display_info *VAR_17 = &VAR_13->display_info;

 FUNC_6(VAR_16, 0, sizeof(struct dc_crtc_timing));

 VAR_16->h_border_left = 0;
 VAR_16->h_border_right = 0;
 VAR_16->v_border_top = 0;
 VAR_16->v_border_bottom = 0;

 if (FUNC_3(VAR_17, VAR_12)
   && VAR_11->signal == VAR_7)
  VAR_16->pixel_encoding = VAR_4;
 else if ((VAR_13->display_info.color_formats & VAR_0)
   && VAR_11->signal == VAR_7)
  VAR_16->pixel_encoding = VAR_5;
 else
  VAR_16->pixel_encoding = VAR_3;

 VAR_16->timing_3d_format = VAR_9;
 VAR_16->display_color_depth = FUNC_1(
  VAR_13, VAR_14);
 VAR_16->scan_type = VAR_6;
 VAR_16->hdmi_vic = 0;

 if(VAR_15) {
  VAR_16->vic = VAR_15->timing.vic;
  VAR_16->flags.HSYNC_POSITIVE_POLARITY = VAR_15->timing.flags.HSYNC_POSITIVE_POLARITY;
  VAR_16->flags.VSYNC_POSITIVE_POLARITY = VAR_15->timing.flags.VSYNC_POSITIVE_POLARITY;
 } else {
  VAR_16->vic = FUNC_2(VAR_12);
  if (VAR_12->flags & VAR_1)
   VAR_16->flags.HSYNC_POSITIVE_POLARITY = 1;
  if (VAR_12->flags & VAR_2)
   VAR_16->flags.VSYNC_POSITIVE_POLARITY = 1;
 }

 VAR_16->h_addressable = VAR_12->crtc_hdisplay;
 VAR_16->h_total = VAR_12->crtc_htotal;
 VAR_16->h_sync_width =
  VAR_12->crtc_hsync_end - VAR_12->crtc_hsync_start;
 VAR_16->h_front_porch =
  VAR_12->crtc_hsync_start - VAR_12->crtc_hdisplay;
 VAR_16->v_total = VAR_12->crtc_vtotal;
 VAR_16->v_addressable = VAR_12->crtc_vdisplay;
 VAR_16->v_front_porch =
  VAR_12->crtc_vsync_start - VAR_12->crtc_vdisplay;
 VAR_16->v_sync_width =
  VAR_12->crtc_vsync_end - VAR_12->crtc_vsync_start;
 VAR_16->pix_clk_100hz = VAR_12->crtc_clock * 10;
 VAR_16->aspect_ratio = FUNC_4(VAR_12);

 VAR_11->output_color_space = FUNC_5(VAR_16);

 VAR_11->out_transfer_func->type = VAR_8;
 VAR_11->out_transfer_func->tf = VAR_10;
 if (VAR_11->signal == VAR_7)
  FUNC_0(VAR_16, VAR_17);
}
