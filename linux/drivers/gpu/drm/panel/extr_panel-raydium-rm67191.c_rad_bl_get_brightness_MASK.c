
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct rad_panel {int prepared; } ;
struct mipi_dsi_device {int mode_flags; } ;
struct TYPE_2__ {int brightness; } ;
struct backlight_device {TYPE_1__ props; } ;


 int VAR_0 ;
 struct mipi_dsi_device* FUNC_0 (struct backlight_device*) ;
 int FUNC_1 (struct mipi_dsi_device*,int*) ;
 struct rad_panel* FUNC_2 (struct mipi_dsi_device*) ;

__attribute__((used)) static int FUNC_3(struct backlight_device *VAR_1)
{
 struct mipi_dsi_device *VAR_2 = FUNC_0(VAR_1);
 struct rad_panel *VAR_3 = FUNC_2(VAR_2);
 u16 VAR_4;
 int VAR_5;

 if (!VAR_3->prepared)
  return 0;

 VAR_2->mode_flags &= ~VAR_0;

 VAR_5 = FUNC_1(VAR_2, &VAR_4);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_1->props.brightness = VAR_4;

 return VAR_4 & 0xff;
}
