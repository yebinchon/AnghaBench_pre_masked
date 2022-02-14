
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int videomode ;
struct xen_drm_front_drm_pipeline {int width; int height; } ;
struct videomode {int hactive; int vactive; int hfront_porch; int hback_porch; int hsync_len; int vfront_porch; int vback_porch; int vsync_len; int pixelclock; } ;
struct drm_display_mode {int type; } ;
struct drm_connector {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct videomode*,struct drm_display_mode*) ;
 struct drm_display_mode* FUNC_1 (int ) ;
 int FUNC_2 (struct drm_connector*,struct drm_display_mode*) ;
 int FUNC_3 (struct videomode*,int ,int) ;
 struct xen_drm_front_drm_pipeline* FUNC_4 (struct drm_connector*) ;

__attribute__((used)) static int FUNC_5(struct drm_connector *VAR_3)
{
 struct xen_drm_front_drm_pipeline *VAR_4 =
   FUNC_4(VAR_3);
 struct drm_display_mode *VAR_5;
 struct videomode VAR_6;
 int VAR_7, VAR_8;

 VAR_5 = FUNC_1(VAR_3->dev);
 if (!VAR_5)
  return 0;

 FUNC_3(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.hactive = VAR_4->width;
 VAR_6.vactive = VAR_4->height;
 VAR_7 = VAR_6.hactive + VAR_6.hfront_porch +
   VAR_6.hback_porch + VAR_6.hsync_len;
 VAR_8 = VAR_6.vactive + VAR_6.vfront_porch +
   VAR_6.vback_porch + VAR_6.vsync_len;
 VAR_6.pixelclock = VAR_7 * VAR_8 * VAR_2;
 VAR_5->type = VAR_1 | VAR_0;

 FUNC_0(&VAR_6, VAR_5);
 FUNC_2(VAR_3, VAR_5);
 return 1;
}
