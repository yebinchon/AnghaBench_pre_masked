
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rm68200 {int prepared; scalar_t__ reset_gpio; int supply; int dev; } ;
struct mipi_dsi_device {int dummy; } ;
struct drm_panel {int dummy; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (struct mipi_dsi_device*) ;
 int FUNC_3 (struct mipi_dsi_device*) ;
 int FUNC_4 (int) ;
 struct rm68200* FUNC_5 (struct drm_panel*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct rm68200*) ;
 struct mipi_dsi_device* FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct drm_panel *VAR_0)
{
 struct rm68200 *VAR_1 = FUNC_5(VAR_0);
 struct mipi_dsi_device *VAR_2 = FUNC_8(VAR_1->dev);
 int VAR_3;

 if (VAR_1->prepared)
  return 0;

 VAR_3 = FUNC_6(VAR_1->supply);
 if (VAR_3 < 0) {
  FUNC_0("failed to enable supply: %d\n", VAR_3);
  return VAR_3;
 }

 if (VAR_1->reset_gpio) {
  FUNC_1(VAR_1->reset_gpio, 1);
  FUNC_4(20);
  FUNC_1(VAR_1->reset_gpio, 0);
  FUNC_4(100);
 }

 FUNC_7(VAR_1);

 VAR_3 = FUNC_2(VAR_2);
 if (VAR_3)
  return VAR_3;

 FUNC_4(125);

 VAR_3 = FUNC_3(VAR_2);
 if (VAR_3)
  return VAR_3;

 FUNC_4(20);

 VAR_1->prepared = 1;

 return 0;
}
