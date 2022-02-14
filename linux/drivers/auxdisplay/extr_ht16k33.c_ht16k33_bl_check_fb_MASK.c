
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ht16k33_priv {int dummy; } ;
struct fb_info {struct ht16k33_priv* par; } ;
struct backlight_device {int dummy; } ;


 struct ht16k33_priv* FUNC_0 (struct backlight_device*) ;

__attribute__((used)) static int FUNC_1(struct backlight_device *VAR_0, struct fb_info *VAR_1)
{
 struct ht16k33_priv *VAR_2 = FUNC_0(VAR_0);

 return (VAR_1 == ((void*)0)) || (VAR_1->par == VAR_2);
}
