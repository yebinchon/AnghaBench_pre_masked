
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mipi_dsi_device {int mode_flags; } ;
struct TYPE_2__ {int brightness; } ;
struct backlight_device {TYPE_1__ props; } ;


 int VAR_0 ;
 struct mipi_dsi_device* FUNC_0 (struct backlight_device*) ;
 int FUNC_1 (struct mipi_dsi_device*,int ) ;

__attribute__((used)) static int FUNC_2(struct backlight_device *VAR_1)
{
 struct mipi_dsi_device *VAR_2 = FUNC_0(VAR_1);
 int VAR_3;

 VAR_2->mode_flags &= ~VAR_0;

 VAR_3 = FUNC_1(VAR_2, VAR_1->props.brightness);
 if (VAR_3 < 0)
  return VAR_3;

 VAR_2->mode_flags |= VAR_0;

 return 0;
}
