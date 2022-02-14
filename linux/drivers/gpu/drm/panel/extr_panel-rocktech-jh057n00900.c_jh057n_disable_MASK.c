
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mipi_dsi_device {int dummy; } ;
struct jh057n {int backlight; int dev; } ;
struct drm_panel {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct mipi_dsi_device*) ;
 struct jh057n* FUNC_2 (struct drm_panel*) ;
 struct mipi_dsi_device* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct drm_panel *VAR_0)
{
 struct jh057n *VAR_1 = FUNC_2(VAR_0);
 struct mipi_dsi_device *VAR_2 = FUNC_3(VAR_1->dev);

 FUNC_0(VAR_1->backlight);
 return FUNC_1(VAR_2);
}
