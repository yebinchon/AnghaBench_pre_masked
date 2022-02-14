
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcar_du_device {int dummy; } ;
struct rcar_du_crtc {struct rcar_du_device* dev; } ;
struct drm_display_mode {int flags; int htotal; int hsync_start; int vtotal; int vsync_end; } ;
struct drm_crtc {int dummy; } ;
typedef enum drm_mode_status { ____Placeholder_drm_mode_status } drm_mode_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct rcar_du_device*,int ) ;
 struct rcar_du_crtc* FUNC_1 (struct drm_crtc*) ;

__attribute__((used)) static enum drm_mode_status
FUNC_2(struct drm_crtc *VAR_6,
   const struct drm_display_mode *VAR_7)
{
 struct rcar_du_crtc *VAR_8 = FUNC_1(VAR_6);
 struct rcar_du_device *VAR_9 = VAR_8->dev;
 bool VAR_10 = VAR_7->flags & VAR_0;
 unsigned int VAR_11;

 if (VAR_10 && !FUNC_0(VAR_9, VAR_5))
  return VAR_2;





 if (VAR_7->htotal - VAR_7->hsync_start < 20)
  return VAR_1;

 VAR_11 = (VAR_7->vtotal - VAR_7->vsync_end) / (VAR_10 ? 2 : 1);
 if (VAR_11 < 3)
  return VAR_4;

 return VAR_3;
}
