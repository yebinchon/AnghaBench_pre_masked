
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct s6e63j0x03 {TYPE_2__* bl_dev; int dev; } ;
struct mipi_dsi_device {int dummy; } ;
struct drm_panel {int dummy; } ;
struct TYPE_3__ {int power; } ;
struct TYPE_4__ {TYPE_1__ props; } ;


 int VAR_0 ;
 int FUNC_0 (struct mipi_dsi_device*) ;
 int FUNC_1 (struct mipi_dsi_device*) ;
 int FUNC_2 (int) ;
 struct s6e63j0x03* FUNC_3 (struct drm_panel*) ;
 struct mipi_dsi_device* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct drm_panel *VAR_1)
{
 struct s6e63j0x03 *VAR_2 = FUNC_3(VAR_1);
 struct mipi_dsi_device *VAR_3 = FUNC_4(VAR_2->dev);
 int VAR_4;

 VAR_4 = FUNC_1(VAR_3);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_2->bl_dev->props.power = VAR_0;

 VAR_4 = FUNC_0(VAR_3);
 if (VAR_4 < 0)
  return VAR_4;

 FUNC_2(120);

 return 0;
}
