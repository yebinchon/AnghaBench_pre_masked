
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_display_mode {int vsync_start; int vdisplay; int vtotal; int vsync_end; int hsync_start; int hdisplay; int htotal; int hsync_end; } ;
struct atmel_hlcdc_dc {TYPE_1__* desc; } ;
typedef enum drm_mode_status { ____Placeholder_drm_mode_status } drm_mode_status ;
struct TYPE_2__ {int max_spw; int max_hpw; int max_vpw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

enum drm_mode_status
FUNC_0(struct atmel_hlcdc_dc *VAR_5,
     const struct drm_display_mode *VAR_6)
{
 int VAR_7 = VAR_6->vsync_start - VAR_6->vdisplay;
 int VAR_8 = VAR_6->vtotal - VAR_6->vsync_end;
 int VAR_9 = VAR_6->vsync_end - VAR_6->vsync_start;
 int VAR_10 = VAR_6->hsync_start - VAR_6->hdisplay;
 int VAR_11 = VAR_6->htotal - VAR_6->hsync_end;
 int VAR_12 = VAR_6->hsync_end - VAR_6->hsync_start;

 if (VAR_12 > VAR_5->desc->max_spw + 1 || VAR_12 < 1)
  return VAR_0;

 if (VAR_9 > VAR_5->desc->max_spw + 1 || VAR_9 < 1)
  return VAR_3;

 if (VAR_10 > VAR_5->desc->max_hpw + 1 || VAR_10 < 1 ||
     VAR_11 > VAR_5->desc->max_hpw + 1 || VAR_11 < 1 ||
     VAR_6->hdisplay < 1)
  return VAR_1;

 if (VAR_7 > VAR_5->desc->max_vpw + 1 || VAR_7 < 1 ||
     VAR_8 > VAR_5->desc->max_vpw || VAR_8 < 0 ||
     VAR_6->vdisplay < 1)
  return VAR_4;

 return VAR_2;
}
