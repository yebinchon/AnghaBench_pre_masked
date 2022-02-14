
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
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct mipi_dsi_device*,int) ;
 int FUNC_1 (struct mipi_dsi_device*) ;
 int FUNC_2 (struct mipi_dsi_device*,int ) ;
 int FUNC_3 (int) ;
 struct s6e63j0x03* FUNC_4 (struct drm_panel*) ;
 int FUNC_5 (struct s6e63j0x03*,int) ;
 int FUNC_6 (struct s6e63j0x03*,int,int,...) ;
 struct mipi_dsi_device* FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct drm_panel *VAR_5)
{
 struct s6e63j0x03 *VAR_6 = FUNC_4(VAR_5);
 struct mipi_dsi_device *VAR_7 = FUNC_7(VAR_6->dev);
 int VAR_8;

 FUNC_3(120);

 VAR_8 = FUNC_5(VAR_6, 1);
 if (VAR_8 < 0)
  return VAR_8;


 VAR_8 = FUNC_6(VAR_6, 0xb1, 0x00, 0x09);
 if (VAR_8 < 0)
  return VAR_8;


 VAR_8 = FUNC_6(VAR_6,
  VAR_1, 0x40);
 if (VAR_8 < 0)
  return VAR_8;


 VAR_8 = FUNC_0(VAR_7, 0x00ff);
 if (VAR_8 < 0)
  return VAR_8;


 VAR_8 = FUNC_6(VAR_6,
  VAR_2, 0x20);
 if (VAR_8 < 0)
  return VAR_8;


 VAR_8 = FUNC_6(VAR_6,
  VAR_3, 0x00);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_8 = FUNC_2(VAR_7, VAR_4);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_8 = FUNC_5(VAR_6, 0);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_8 = FUNC_1(VAR_7);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_6->bl_dev->props.power = VAR_0;

 return 0;
}
