
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ fb_blank; scalar_t__ power; int brightness; } ;
struct backlight_device {TYPE_1__ props; int dev; } ;
struct acx565akm_panel {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct acx565akm_panel*,int) ;
 struct acx565akm_panel* FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct backlight_device *VAR_1)
{
 struct acx565akm_panel *VAR_2 = FUNC_1(&VAR_1->dev);
 int VAR_3;

 if (VAR_1->props.fb_blank == VAR_0 &&
     VAR_1->props.power == VAR_0)
  VAR_3 = VAR_1->props.brightness;
 else
  VAR_3 = 0;

 FUNC_0(VAR_2, VAR_3);

 return 0;
}
