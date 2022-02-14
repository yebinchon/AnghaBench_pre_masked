
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct psb_intel_mode_device {struct drm_display_mode* panel_fixed_mode; scalar_t__ vbt_mode; } ;
struct oaktrail_timing_info {int hactive_hi; int hactive_lo; int vactive_hi; int vactive_lo; int hsync_offset_hi; int hsync_offset_lo; int hsync_pulse_width_hi; int hsync_pulse_width_lo; int hblank_hi; int hblank_lo; int vsync_offset_hi; int vsync_offset_lo; int vsync_pulse_width_hi; int vsync_pulse_width_lo; int vblank_hi; int vblank_lo; int pixel_clock; } ;
struct TYPE_2__ {struct oaktrail_timing_info DTD; } ;
struct drm_psb_private {scalar_t__ lfp_lvds_vbt_mode; scalar_t__ has_gct; TYPE_1__ gct_data; } ;
struct drm_display_mode {int hdisplay; int vdisplay; int hsync_start; int hsync_end; int htotal; int vsync_start; int vsync_end; int vtotal; int clock; } ;
struct drm_device {struct drm_psb_private* dev_private; } ;


 int VAR_0 ;
 void* FUNC_0 (struct drm_device*,scalar_t__) ;
 int FUNC_1 (struct drm_display_mode*,int ) ;
 int FUNC_2 (struct drm_display_mode*) ;
 struct drm_display_mode* FUNC_3 (int,int ) ;
 int FUNC_4 (char*,int) ;

__attribute__((used)) static void FUNC_5(struct drm_device *VAR_1,
     struct psb_intel_mode_device *VAR_2)
{
 struct drm_display_mode *VAR_3 = ((void*)0);
 struct drm_psb_private *VAR_4 = VAR_1->dev_private;
 struct oaktrail_timing_info *VAR_5 = &VAR_4->gct_data.DTD;

 VAR_2->panel_fixed_mode = ((void*)0);


 if (VAR_4->has_gct) {
  VAR_3 = FUNC_3(sizeof(*VAR_3), VAR_0);
  if (!VAR_3)
   return;

  VAR_3->hdisplay = (VAR_5->hactive_hi << 8) | VAR_5->hactive_lo;
  VAR_3->vdisplay = (VAR_5->vactive_hi << 8) | VAR_5->vactive_lo;
  VAR_3->hsync_start = VAR_3->hdisplay + ((VAR_5->hsync_offset_hi << 8) | VAR_5->hsync_offset_lo);


  VAR_3->hsync_end = VAR_3->hsync_start + ((VAR_5->hsync_pulse_width_hi << 8) | VAR_5->hsync_pulse_width_lo);


  VAR_3->htotal = VAR_3->hdisplay + ((VAR_5->hblank_hi << 8) | VAR_5->hblank_lo);

  VAR_3->vsync_start = VAR_3->vdisplay + ((VAR_5->vsync_offset_hi << 4) | VAR_5->vsync_offset_lo);


  VAR_3->vsync_end = VAR_3->vsync_start + ((VAR_5->vsync_pulse_width_hi << 4) | VAR_5->vsync_pulse_width_lo);


  VAR_3->vtotal = VAR_3->vdisplay + ((VAR_5->vblank_hi << 8) | VAR_5->vblank_lo);

  VAR_3->clock = VAR_5->pixel_clock * 10;
  VAR_2->panel_fixed_mode = VAR_3;
 }


 if (VAR_2->panel_fixed_mode == ((void*)0) && VAR_2->vbt_mode)
  VAR_2->panel_fixed_mode = FUNC_0(VAR_1,
      VAR_2->vbt_mode);


 if (VAR_2->panel_fixed_mode == ((void*)0))
  if (VAR_4->lfp_lvds_vbt_mode)
   VAR_2->panel_fixed_mode =
    FUNC_0(VAR_1,
     VAR_4->lfp_lvds_vbt_mode);


 if (VAR_2->panel_fixed_mode == ((void*)0))
  return;

 FUNC_2(VAR_2->panel_fixed_mode);
 FUNC_1(VAR_2->panel_fixed_mode, 0);
}
