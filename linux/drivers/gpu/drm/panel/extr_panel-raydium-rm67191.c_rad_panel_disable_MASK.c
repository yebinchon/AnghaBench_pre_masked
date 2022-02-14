
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rad_panel {int enabled; int backlight; struct mipi_dsi_device* dsi; } ;
struct device {int dummy; } ;
struct mipi_dsi_device {int mode_flags; struct device dev; } ;
struct drm_panel {int dummy; } ;


 int FUNC_0 (struct device*,char*,int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mipi_dsi_device*) ;
 int FUNC_3 (struct mipi_dsi_device*) ;
 struct rad_panel* FUNC_4 (struct drm_panel*) ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static int FUNC_6(struct drm_panel *VAR_1)
{
 struct rad_panel *VAR_2 = FUNC_4(VAR_1);
 struct mipi_dsi_device *VAR_3 = VAR_2->dsi;
 struct device *VAR_4 = &VAR_3->dev;
 int VAR_5;

 if (!VAR_2->enabled)
  return 0;

 VAR_3->mode_flags |= VAR_0;

 FUNC_1(VAR_2->backlight);

 FUNC_5(10000, 12000);

 VAR_5 = FUNC_3(VAR_3);
 if (VAR_5 < 0) {
  FUNC_0(VAR_4, "Failed to set display OFF (%d)\n", VAR_5);
  return VAR_5;
 }

 FUNC_5(5000, 10000);

 VAR_5 = FUNC_2(VAR_3);
 if (VAR_5 < 0) {
  FUNC_0(VAR_4, "Failed to enter sleep mode (%d)\n", VAR_5);
  return VAR_5;
 }

 VAR_2->enabled = 0;

 return 0;
}
