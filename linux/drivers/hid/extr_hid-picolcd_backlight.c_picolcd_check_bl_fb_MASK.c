
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct picolcd_data {int dummy; } ;
struct fb_info {int dummy; } ;
struct backlight_device {int dummy; } ;


 scalar_t__ FUNC_0 (struct backlight_device*) ;
 struct fb_info* FUNC_1 (struct picolcd_data*) ;

__attribute__((used)) static int FUNC_2(struct backlight_device *VAR_0, struct fb_info *VAR_1)
{
 return VAR_1 && VAR_1 == FUNC_1((struct picolcd_data *)FUNC_0(VAR_0));
}
