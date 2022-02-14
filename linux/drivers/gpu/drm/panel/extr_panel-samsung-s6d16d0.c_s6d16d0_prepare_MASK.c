
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s6d16d0 {int dev; int reset_gpio; int supply; } ;
struct mipi_dsi_device {int dummy; } ;
struct drm_panel {int dummy; } ;


 int FUNC_0 (int ,char*,int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct mipi_dsi_device*) ;
 int FUNC_3 (struct mipi_dsi_device*,int ) ;
 int FUNC_4 (int) ;
 struct s6d16d0* FUNC_5 (struct drm_panel*) ;
 int FUNC_6 (int ) ;
 struct mipi_dsi_device* FUNC_7 (int ) ;
 int FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(struct drm_panel *VAR_1)
{
 struct s6d16d0 *VAR_2 = FUNC_5(VAR_1);
 struct mipi_dsi_device *VAR_3 = FUNC_7(VAR_2->dev);
 int VAR_4;

 VAR_4 = FUNC_6(VAR_2->supply);
 if (VAR_4) {
  FUNC_0(VAR_2->dev, "failed to enable supply (%d)\n", VAR_4);
  return VAR_4;
 }


 FUNC_1(VAR_2->reset_gpio, 1);
 FUNC_8(10);

 FUNC_1(VAR_2->reset_gpio, 0);
 FUNC_4(120);


 VAR_4 = FUNC_3(VAR_3,
           VAR_0);
 if (VAR_4) {
  FUNC_0(VAR_2->dev, "failed to enable vblank TE (%d)\n",
         VAR_4);
  return VAR_4;
 }

 VAR_4 = FUNC_2(VAR_3);
 if (VAR_4) {
  FUNC_0(VAR_2->dev, "failed to exit sleep mode (%d)\n",
         VAR_4);
  return VAR_4;
 }

 return 0;
}
