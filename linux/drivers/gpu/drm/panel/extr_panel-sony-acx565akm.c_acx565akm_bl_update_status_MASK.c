
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct backlight_device {int dev; } ;
struct acx565akm_panel {int mutex; } ;


 int FUNC_0 (struct backlight_device*) ;
 struct acx565akm_panel* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct backlight_device *VAR_0)
{
 struct acx565akm_panel *VAR_1 = FUNC_1(&VAR_0->dev);
 int VAR_2;

 FUNC_2(&VAR_1->mutex);
 VAR_2 = FUNC_0(VAR_0);
 FUNC_3(&VAR_1->mutex);

 return VAR_2;
}
