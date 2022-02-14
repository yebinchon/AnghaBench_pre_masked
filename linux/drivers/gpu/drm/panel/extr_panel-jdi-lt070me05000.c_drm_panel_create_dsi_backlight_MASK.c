
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct mipi_dsi_device {struct device dev; } ;
struct backlight_properties {int brightness; int max_brightness; int type; } ;
struct backlight_device {int dummy; } ;
typedef int props ;


 int VAR_0 ;
 int FUNC_0 (struct device*) ;
 struct backlight_device* FUNC_1 (struct device*,int ,struct device*,struct mipi_dsi_device*,int *,struct backlight_properties*) ;
 int VAR_1 ;
 int FUNC_2 (struct backlight_properties*,int ,int) ;

__attribute__((used)) static struct backlight_device *
FUNC_3(struct mipi_dsi_device *VAR_2)
{
 struct device *VAR_3 = &VAR_2->dev;
 struct backlight_properties VAR_4;

 FUNC_2(&VAR_4, 0, sizeof(VAR_4));
 VAR_4.type = VAR_0;
 VAR_4.brightness = 255;
 VAR_4.max_brightness = 255;

 return FUNC_1(VAR_3, FUNC_0(VAR_3), VAR_3, VAR_2,
           &VAR_1, &VAR_4);
}
