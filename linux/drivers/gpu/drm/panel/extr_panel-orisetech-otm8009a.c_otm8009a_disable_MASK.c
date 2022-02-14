
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct otm8009a {int enabled; int bl_dev; int dev; } ;
struct mipi_dsi_device {int dummy; } ;
struct drm_panel {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct mipi_dsi_device*) ;
 int FUNC_2 (struct mipi_dsi_device*) ;
 int FUNC_3 (int) ;
 struct otm8009a* FUNC_4 (struct drm_panel*) ;
 struct mipi_dsi_device* FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct drm_panel *VAR_0)
{
 struct otm8009a *VAR_1 = FUNC_4(VAR_0);
 struct mipi_dsi_device *VAR_2 = FUNC_5(VAR_1->dev);
 int VAR_3;

 if (!VAR_1->enabled)
  return 0;

 FUNC_0(VAR_1->bl_dev);

 VAR_3 = FUNC_2(VAR_2);
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_1(VAR_2);
 if (VAR_3)
  return VAR_3;

 FUNC_3(120);

 VAR_1->enabled = 0;

 return 0;
}
