
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lvds_dvo_timing {int hactive_hi; int hactive_lo; int hsync_off_hi; int hsync_off_lo; int hsync_pulse_width_hi; int hsync_pulse_width_lo; int hblank_hi; int hblank_lo; int vactive_hi; int vactive_lo; int vsync_off_hi; int vsync_off_lo; int vsync_pulse_width_hi; int vsync_pulse_width_lo; int vblank_hi; int vblank_lo; int clock; int himage_hi; int himage_lo; int vimage_hi; int vimage_lo; scalar_t__ vsync_positive; scalar_t__ hsync_positive; } ;
struct drm_display_mode {int hdisplay; int hsync_start; int hsync_end; int htotal; int vdisplay; int vsync_start; int vsync_end; int vtotal; int clock; int width_mm; int height_mm; int flags; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct drm_display_mode*) ;

__attribute__((used)) static void
FUNC_1(struct drm_display_mode *VAR_5,
   const struct lvds_dvo_timing *VAR_6)
{
 VAR_5->hdisplay = (VAR_6->hactive_hi << 8) |
  VAR_6->hactive_lo;
 VAR_5->hsync_start = VAR_5->hdisplay +
  ((VAR_6->hsync_off_hi << 8) | VAR_6->hsync_off_lo);
 VAR_5->hsync_end = VAR_5->hsync_start +
  ((VAR_6->hsync_pulse_width_hi << 8) |
   VAR_6->hsync_pulse_width_lo);
 VAR_5->htotal = VAR_5->hdisplay +
  ((VAR_6->hblank_hi << 8) | VAR_6->hblank_lo);

 VAR_5->vdisplay = (VAR_6->vactive_hi << 8) |
  VAR_6->vactive_lo;
 VAR_5->vsync_start = VAR_5->vdisplay +
  ((VAR_6->vsync_off_hi << 4) | VAR_6->vsync_off_lo);
 VAR_5->vsync_end = VAR_5->vsync_start +
  ((VAR_6->vsync_pulse_width_hi << 4) |
   VAR_6->vsync_pulse_width_lo);
 VAR_5->vtotal = VAR_5->vdisplay +
  ((VAR_6->vblank_hi << 8) | VAR_6->vblank_lo);
 VAR_5->clock = VAR_6->clock * 10;
 VAR_5->type = VAR_4;

 if (VAR_6->hsync_positive)
  VAR_5->flags |= VAR_2;
 else
  VAR_5->flags |= VAR_0;

 if (VAR_6->vsync_positive)
  VAR_5->flags |= VAR_3;
 else
  VAR_5->flags |= VAR_1;

 VAR_5->width_mm = (VAR_6->himage_hi << 8) |
  VAR_6->himage_lo;
 VAR_5->height_mm = (VAR_6->vimage_hi << 8) |
  VAR_6->vimage_lo;


 if (VAR_5->hsync_end > VAR_5->htotal)
  VAR_5->htotal = VAR_5->hsync_end + 1;
 if (VAR_5->vsync_end > VAR_5->vtotal)
  VAR_5->vtotal = VAR_5->vsync_end + 1;

 FUNC_0(VAR_5);
}
