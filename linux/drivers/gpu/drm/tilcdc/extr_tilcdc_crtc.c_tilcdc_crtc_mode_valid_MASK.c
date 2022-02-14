
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct tilcdc_drm_private {scalar_t__ max_pixelclock; int max_width; unsigned int max_bandwidth; } ;
struct drm_display_mode {int hdisplay; int vdisplay; scalar_t__ clock; int htotal; int hsync_end; int hsync_start; int vtotal; int vsync_end; int vsync_start; } ;
struct drm_crtc {TYPE_1__* dev; } ;
typedef enum drm_mode_status { ____Placeholder_drm_mode_status } drm_mode_status ;
struct TYPE_2__ {struct tilcdc_drm_private* dev_private; } ;


 int FUNC_0 (char*,...) ;
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
 unsigned int FUNC_1 (struct drm_display_mode const*) ;
 int FUNC_2 (struct drm_crtc*) ;

__attribute__((used)) static enum drm_mode_status
FUNC_3(struct drm_crtc *VAR_10,
         const struct drm_display_mode *VAR_11)
{
 struct tilcdc_drm_private *VAR_12 = VAR_10->dev->dev_private;
 unsigned int VAR_13;
 uint32_t VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19;





 if (VAR_11->hdisplay > FUNC_2(VAR_10))
  return VAR_7;


 if (VAR_11->hdisplay & 0xf)
  return VAR_7;

 if (VAR_11->vdisplay > 2048)
  return VAR_8;

 FUNC_0("Processing mode %dx%d@%d with pixel clock %d",
  VAR_11->hdisplay, VAR_11->vdisplay,
  FUNC_1(VAR_11), VAR_11->clock);

 VAR_14 = VAR_11->htotal - VAR_11->hsync_end;
 VAR_15 = VAR_11->hsync_start - VAR_11->hdisplay;
 VAR_16 = VAR_11->hsync_end - VAR_11->hsync_start;
 VAR_17 = VAR_11->vtotal - VAR_11->vsync_end;
 VAR_18 = VAR_11->vsync_start - VAR_11->vdisplay;
 VAR_19 = VAR_11->vsync_end - VAR_11->vsync_start;

 if ((VAR_14-1) & ~0x3ff) {
  FUNC_0("Pruning mode: Horizontal Back Porch out of range");
  return VAR_3;
 }

 if ((VAR_15-1) & ~0x3ff) {
  FUNC_0("Pruning mode: Horizontal Front Porch out of range");
  return VAR_3;
 }

 if ((VAR_16-1) & ~0x3ff) {
  FUNC_0("Pruning mode: Horizontal Sync Width out of range");
  return VAR_4;
 }

 if (VAR_17 & ~0xff) {
  FUNC_0("Pruning mode: Vertical Back Porch out of range");
  return VAR_6;
 }

 if (VAR_18 & ~0xff) {
  FUNC_0("Pruning mode: Vertical Front Porch out of range");
  return VAR_6;
 }

 if ((VAR_19-1) & ~0x3f) {
  FUNC_0("Pruning mode: Vertical Sync Width out of range");
  return VAR_9;
 }





 if (VAR_11->clock > VAR_12->max_pixelclock) {
  FUNC_0("Pruning mode: pixel clock too high");
  return VAR_2;
 }





 if (VAR_11->hdisplay > VAR_12->max_width)
  return VAR_1;


 VAR_13 = VAR_11->hdisplay * VAR_11->vdisplay *
  FUNC_1(VAR_11);
 if (VAR_13 > VAR_12->max_bandwidth) {
  FUNC_0("Pruning mode: exceeds defined bandwidth limit");
  return VAR_0;
 }

 return VAR_5;
}
