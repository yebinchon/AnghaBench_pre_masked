
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct max77693_sub_led {int fled_cdev; int v4l2_flash; } ;
struct max77693_led_device {int lock; scalar_t__ iout_joint; struct max77693_sub_led* sub_leds; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct max77693_led_device*,size_t) ;
 int FUNC_2 (int *) ;
 struct max77693_led_device* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_2)
{
 struct max77693_led_device *VAR_3 = FUNC_3(VAR_2);
 struct max77693_sub_led *VAR_4 = VAR_3->sub_leds;

 if (VAR_3->iout_joint || FUNC_1(VAR_3, VAR_0)) {
  FUNC_4(VAR_4[VAR_0].v4l2_flash);
  FUNC_0(&VAR_4[VAR_0].fled_cdev);
 }

 if (!VAR_3->iout_joint && FUNC_1(VAR_3, VAR_1)) {
  FUNC_4(VAR_4[VAR_1].v4l2_flash);
  FUNC_0(&VAR_4[VAR_1].fled_cdev);
 }

 FUNC_2(&VAR_3->lock);

 return 0;
}
