
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s6e63m0 {int bl_dev; struct device* dev; } ;
struct device {int dummy; } ;
struct backlight_properties {int max_brightness; int brightness; int type; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,int) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct device*,char*,struct device*,struct s6e63m0*,int *,struct backlight_properties*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_4(struct s6e63m0 *VAR_3)
{
 struct backlight_properties VAR_4 = {
  .type = VAR_0,
  .brightness = VAR_1,
  .max_brightness = VAR_1
 };
 struct device *VAR_5 = VAR_3->dev;
 int VAR_6 = 0;

 VAR_3->bl_dev = FUNC_3(VAR_5, "panel", VAR_5, VAR_3,
           &VAR_2,
           &VAR_4);
 if (FUNC_1(VAR_3->bl_dev)) {
  VAR_6 = FUNC_2(VAR_3->bl_dev);
  FUNC_0(VAR_5, "error registering backlight device (%d)\n",
         VAR_6);
 }

 return VAR_6;
}
