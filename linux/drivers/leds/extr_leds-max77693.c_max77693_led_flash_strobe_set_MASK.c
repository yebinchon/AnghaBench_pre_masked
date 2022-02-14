
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max77693_sub_led {int fled_id; scalar_t__ flash_timeout; } ;
struct max77693_led_device {scalar_t__ current_flash_timeout; int strobing_sub_led_id; int lock; } ;
struct led_classdev_flash {int dummy; } ;


 int FUNC_0 (int) ;
 struct max77693_sub_led* FUNC_1 (struct led_classdev_flash*) ;
 int FUNC_2 (struct max77693_led_device*,int ) ;
 int FUNC_3 (struct max77693_led_device*,int ) ;
 int FUNC_4 (struct max77693_sub_led*) ;
 int FUNC_5 (struct max77693_led_device*,scalar_t__) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 struct max77693_led_device* FUNC_8 (struct max77693_sub_led*) ;

__attribute__((used)) static int FUNC_9(
    struct led_classdev_flash *VAR_0,
    bool VAR_1)
{
 struct max77693_sub_led *VAR_2 = FUNC_1(VAR_0);
 struct max77693_led_device *VAR_3 = FUNC_8(VAR_2);
 int VAR_4 = VAR_2->fled_id;
 int VAR_5;

 FUNC_6(&VAR_3->lock);

 if (!VAR_1) {
  VAR_5 = FUNC_3(VAR_3, FUNC_0(VAR_4));
  goto unlock;
 }

 if (VAR_2->flash_timeout != VAR_3->current_flash_timeout) {
  VAR_5 = FUNC_5(VAR_3, VAR_2->flash_timeout);
  if (VAR_5 < 0)
   goto unlock;
 }

 VAR_3->strobing_sub_led_id = VAR_4;

 VAR_5 = FUNC_2(VAR_3, FUNC_0(VAR_4));
 if (VAR_5 < 0)
  goto unlock;

 VAR_5 = FUNC_4(VAR_2);

unlock:
 FUNC_7(&VAR_3->lock);
 return VAR_5;
}
