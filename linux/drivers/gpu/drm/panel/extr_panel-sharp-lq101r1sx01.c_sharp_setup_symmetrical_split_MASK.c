
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mipi_dsi_device {int dev; } ;
struct drm_display_mode {int hdisplay; scalar_t__ vdisplay; } ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct mipi_dsi_device*,int,int) ;
 int FUNC_2 (struct mipi_dsi_device*,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct mipi_dsi_device *VAR_0,
      struct mipi_dsi_device *VAR_1,
      const struct drm_display_mode *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(VAR_0, 0, VAR_2->hdisplay / 2 - 1);
 if (VAR_3 < 0) {
  FUNC_0(&VAR_0->dev, "failed to set column address: %d\n", VAR_3);
  return VAR_3;
 }

 VAR_3 = FUNC_2(VAR_0, 0, VAR_2->vdisplay - 1);
 if (VAR_3 < 0) {
  FUNC_0(&VAR_0->dev, "failed to set page address: %d\n", VAR_3);
  return VAR_3;
 }

 VAR_3 = FUNC_1(VAR_1, VAR_2->hdisplay / 2,
           VAR_2->hdisplay - 1);
 if (VAR_3 < 0) {
  FUNC_0(&VAR_1->dev, "failed to set column address: %d\n", VAR_3);
  return VAR_3;
 }

 VAR_3 = FUNC_2(VAR_1, 0, VAR_2->vdisplay - 1);
 if (VAR_3 < 0) {
  FUNC_0(&VAR_1->dev, "failed to set page address: %d\n", VAR_3);
  return VAR_3;
 }

 return 0;
}
