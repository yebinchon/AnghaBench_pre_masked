
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct oaktrail_timing_info {int hactive_hi; int hactive_lo; int vactive_hi; int vactive_lo; int hsync_offset_hi; int hsync_offset_lo; int hsync_pulse_width_hi; int hsync_pulse_width_lo; int hblank_hi; int hblank_lo; int vsync_offset_hi; int vsync_offset_lo; int vsync_pulse_width_hi; int vsync_pulse_width_lo; int vblank_hi; int vblank_lo; int pixel_clock; } ;
struct TYPE_2__ {struct oaktrail_timing_info DTD; } ;
struct drm_psb_private {TYPE_1__ gct_data; } ;
struct drm_display_mode {int hdisplay; int vdisplay; int hsync_start; int hsync_end; int htotal; int vsync_start; int vsync_end; int vtotal; int clock; int type; } ;
struct drm_device {int dev; struct drm_psb_private* dev_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct drm_display_mode*,int ) ;
 int FUNC_2 (struct drm_display_mode*) ;
 struct drm_display_mode* FUNC_3 (int,int ) ;

__attribute__((used)) static struct drm_display_mode *FUNC_4(struct drm_device *VAR_2)
{
 struct drm_display_mode *VAR_3;
 struct drm_psb_private *VAR_4 = VAR_2->dev_private;
 struct oaktrail_timing_info *VAR_5 = &VAR_4->gct_data.DTD;
 bool VAR_6 = 0;

 VAR_3 = FUNC_3(sizeof(*VAR_3), VAR_1);
 if (!VAR_3)
  return ((void*)0);

 if (VAR_6) {
  VAR_3->hdisplay = (VAR_5->hactive_hi << 8) | VAR_5->hactive_lo;
  VAR_3->vdisplay = (VAR_5->vactive_hi << 8) | VAR_5->vactive_lo;
  VAR_3->hsync_start = VAR_3->hdisplay + ((VAR_5->hsync_offset_hi << 8) | VAR_5->hsync_offset_lo);


  VAR_3->hsync_end = VAR_3->hsync_start + ((VAR_5->hsync_pulse_width_hi << 8) | VAR_5->hsync_pulse_width_lo);


  VAR_3->htotal = VAR_3->hdisplay + ((VAR_5->hblank_hi << 8) | VAR_5->hblank_lo);

  VAR_3->vsync_start = VAR_3->vdisplay + ((VAR_5->vsync_offset_hi << 8) | VAR_5->vsync_offset_lo);


  VAR_3->vsync_end = VAR_3->vsync_start + ((VAR_5->vsync_pulse_width_hi << 8) | VAR_5->vsync_pulse_width_lo);


  VAR_3->vtotal = VAR_3->vdisplay + ((VAR_5->vblank_hi << 8) | VAR_5->vblank_lo);

  VAR_3->clock = VAR_5->pixel_clock * 10;

  FUNC_0(VAR_2->dev, "hdisplay is %d\n", VAR_3->hdisplay);
  FUNC_0(VAR_2->dev, "vdisplay is %d\n", VAR_3->vdisplay);
  FUNC_0(VAR_2->dev, "HSS is %d\n", VAR_3->hsync_start);
  FUNC_0(VAR_2->dev, "HSE is %d\n", VAR_3->hsync_end);
  FUNC_0(VAR_2->dev, "htotal is %d\n", VAR_3->htotal);
  FUNC_0(VAR_2->dev, "VSS is %d\n", VAR_3->vsync_start);
  FUNC_0(VAR_2->dev, "VSE is %d\n", VAR_3->vsync_end);
  FUNC_0(VAR_2->dev, "vtotal is %d\n", VAR_3->vtotal);
  FUNC_0(VAR_2->dev, "clock is %d\n", VAR_3->clock);
 } else {
  VAR_3->hdisplay = 480;
  VAR_3->vdisplay = 854;
  VAR_3->hsync_start = 487;
  VAR_3->hsync_end = 490;
  VAR_3->htotal = 499;
  VAR_3->vsync_start = 861;
  VAR_3->vsync_end = 865;
  VAR_3->vtotal = 873;
  VAR_3->clock = 33264;
 }

 FUNC_2(VAR_3);
 FUNC_1(VAR_3, 0);

 VAR_3->type |= VAR_0;

 return VAR_3;
}
