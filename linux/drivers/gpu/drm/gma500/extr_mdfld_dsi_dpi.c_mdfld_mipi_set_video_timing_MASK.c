
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mdfld_dsi_dpi_timing {int hsync_count; int hbp_count; int hfp_count; int hactive_count; int vsync_count; int vbp_count; int vfp_count; } ;
struct mdfld_dsi_config {int bpp; int lane_count; struct drm_display_mode* mode; struct drm_device* dev; } ;
struct drm_display_mode {int vdisplay; int hdisplay; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (struct drm_display_mode*,struct mdfld_dsi_dpi_timing*,int ,int ) ;

__attribute__((used)) static void FUNC_10(struct mdfld_dsi_config *VAR_1,
     int VAR_2)
{
 struct drm_device *VAR_3 = VAR_1->dev;
 struct mdfld_dsi_dpi_timing VAR_4;
 struct drm_display_mode *VAR_5 = VAR_1->mode;

 FUNC_9(VAR_5, &VAR_4,
     VAR_1->lane_count,
     VAR_1->bpp);

 FUNC_8(FUNC_0(VAR_2),
  VAR_5->vdisplay << 16 | VAR_5->hdisplay);
 FUNC_8(FUNC_4(VAR_2),
  VAR_4.hsync_count & VAR_0);
 FUNC_8(FUNC_2(VAR_2),
  VAR_4.hbp_count & VAR_0);
 FUNC_8(FUNC_3(VAR_2),
  VAR_4.hfp_count & VAR_0);
 FUNC_8(FUNC_1(VAR_2),
  VAR_4.hactive_count & VAR_0);
 FUNC_8(FUNC_7(VAR_2),
  VAR_4.vsync_count & VAR_0);
 FUNC_8(FUNC_5(VAR_2),
  VAR_4.vbp_count & VAR_0);
 FUNC_8(FUNC_6(VAR_2),
  VAR_4.vfp_count & VAR_0);
}
