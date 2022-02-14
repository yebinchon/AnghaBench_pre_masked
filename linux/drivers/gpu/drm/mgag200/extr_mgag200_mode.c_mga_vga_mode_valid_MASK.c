
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int vram_size; } ;
struct mga_device {int unique_rev_id; scalar_t__ type; TYPE_1__ mc; } ;
struct drm_display_mode {int hdisplay; int vdisplay; int hsync_start; int hsync_end; int htotal; int crtc_hdisplay; int crtc_hsync_start; int crtc_hsync_end; int crtc_htotal; int crtc_vdisplay; int crtc_vsync_start; int crtc_vsync_end; int crtc_vtotal; } ;
struct drm_device {scalar_t__ dev_private; } ;
struct TYPE_4__ {int specified; int bpp; scalar_t__ bpp_specified; } ;
struct drm_connector {TYPE_2__ cmdline_mode; struct drm_device* dev; } ;
typedef enum drm_mode_status { ____Placeholder_drm_mode_status } drm_mode_status ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (struct mga_device*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct drm_display_mode*,int) ;

__attribute__((used)) static enum drm_mode_status FUNC_2(struct drm_connector *VAR_10,
     struct drm_display_mode *VAR_11)
{
 struct drm_device *VAR_12 = VAR_10->dev;
 struct mga_device *VAR_13 = (struct mga_device*)VAR_12->dev_private;
 int VAR_14 = 32;

 if (FUNC_0(VAR_13)) {
  if (VAR_13->unique_rev_id == 0x01) {
   if (VAR_11->hdisplay > 1600)
    return VAR_8;
   if (VAR_11->vdisplay > 1200)
    return VAR_9;
   if (FUNC_1(VAR_11, VAR_14)
    > (24400 * 1024))
    return VAR_5;
  } else if (VAR_13->unique_rev_id == 0x02) {
   if (VAR_11->hdisplay > 1920)
    return VAR_8;
   if (VAR_11->vdisplay > 1200)
    return VAR_9;
   if (FUNC_1(VAR_11, VAR_14)
    > (30100 * 1024))
    return VAR_5;
  } else {
   if (FUNC_1(VAR_11, VAR_14)
    > (55000 * 1024))
    return VAR_5;
  }
 } else if (VAR_13->type == VAR_3) {
  if (VAR_11->hdisplay > 1280)
   return VAR_8;
  if (VAR_11->vdisplay > 1024)
   return VAR_9;
  if (FUNC_1(VAR_11, VAR_14) >
      (31877 * 1024))
   return VAR_5;
 } else if (VAR_13->type == VAR_2 &&
  (FUNC_1(VAR_11, VAR_14)
   > (32700 * 1024))) {
  return VAR_5;
 } else if (VAR_13->type == VAR_0 &&
  (FUNC_1(VAR_11, VAR_14)
   > (37500 * 1024))) {
  return VAR_5;
 } else if (VAR_13->type == VAR_1 &&
  (FUNC_1(VAR_11,
   VAR_14) > (55000 * 1024))) {
  return VAR_5;
 }

 if ((VAR_11->hdisplay % 8) != 0 || (VAR_11->hsync_start % 8) != 0 ||
     (VAR_11->hsync_end % 8) != 0 || (VAR_11->htotal % 8) != 0) {
  return VAR_6;
 }

 if (VAR_11->crtc_hdisplay > 2048 || VAR_11->crtc_hsync_start > 4096 ||
     VAR_11->crtc_hsync_end > 4096 || VAR_11->crtc_htotal > 4096 ||
     VAR_11->crtc_vdisplay > 2048 || VAR_11->crtc_vsync_start > 4096 ||
     VAR_11->crtc_vsync_end > 4096 || VAR_11->crtc_vtotal > 4096) {
  return VAR_4;
 }


 if (VAR_10->cmdline_mode.specified) {
  if (VAR_10->cmdline_mode.bpp_specified)
   VAR_14 = VAR_10->cmdline_mode.bpp;
 }

 if ((VAR_11->hdisplay * VAR_11->vdisplay * (VAR_14/8)) > VAR_13->mc.vram_size) {
  if (VAR_10->cmdline_mode.specified)
   VAR_10->cmdline_mode.specified = 0;
  return VAR_4;
 }

 return VAR_7;
}
