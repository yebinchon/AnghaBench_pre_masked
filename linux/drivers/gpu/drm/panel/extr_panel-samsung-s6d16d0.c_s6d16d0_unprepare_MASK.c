
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s6d16d0 {int supply; int reset_gpio; int dev; } ;
struct mipi_dsi_device {int dummy; } ;
struct drm_panel {int dummy; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct mipi_dsi_device*) ;
 struct s6d16d0* FUNC_3 (struct drm_panel*) ;
 int FUNC_4 (int ) ;
 struct mipi_dsi_device* FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct drm_panel *VAR_0)
{
 struct s6d16d0 *VAR_1 = FUNC_3(VAR_0);
 struct mipi_dsi_device *VAR_2 = FUNC_5(VAR_1->dev);
 int VAR_3;


 VAR_3 = FUNC_2(VAR_2);
 if (VAR_3) {
  FUNC_0(VAR_1->dev, "failed to enter sleep mode (%d)\n",
         VAR_3);
  return VAR_3;
 }


 FUNC_1(VAR_1->reset_gpio, 1);
 FUNC_4(VAR_1->supply);

 return 0;
}
