
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mipi_dsi_device {int lanes; int dev; } ;
struct drm_display_mode {int clock; } ;
struct adv7511 {int num_dsi_lanes; struct mipi_dsi_device* dsi; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct mipi_dsi_device*) ;
 int FUNC_2 (struct mipi_dsi_device*) ;

void FUNC_3(struct adv7511 *VAR_0, const struct drm_display_mode *VAR_1)
{
 struct mipi_dsi_device *VAR_2 = VAR_0->dsi;
 int VAR_3, VAR_4;

 if (VAR_0->num_dsi_lanes != 4)
  return;

 if (VAR_1->clock > 80000)
  VAR_3 = 4;
 else
  VAR_3 = 3;

 if (VAR_3 != VAR_2->lanes) {
  FUNC_2(VAR_2);
  VAR_2->lanes = VAR_3;
  VAR_4 = FUNC_1(VAR_2);
  if (VAR_4)
   FUNC_0(&VAR_2->dev, "failed to change host lanes\n");
 }
}
