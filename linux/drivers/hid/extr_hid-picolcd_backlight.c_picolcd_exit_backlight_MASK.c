
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct picolcd_data {struct backlight_device* backlight; } ;
struct backlight_device {int dummy; } ;


 int FUNC_0 (struct backlight_device*) ;

void FUNC_1(struct picolcd_data *VAR_0)
{
 struct backlight_device *VAR_1 = VAR_0->backlight;

 VAR_0->backlight = ((void*)0);
 FUNC_0(VAR_1);
}
