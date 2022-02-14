
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max77693_sub_led {scalar_t__ fled_id; } ;
struct max77693_led_device {scalar_t__ strobing_sub_led_id; int lock; } ;
struct led_classdev_flash {int dummy; } ;


 int VAR_0 ;
 struct max77693_sub_led* FUNC_0 (struct led_classdev_flash*) ;
 int FUNC_1 (struct max77693_led_device*,int*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct max77693_led_device* FUNC_4 (struct max77693_sub_led*) ;

__attribute__((used)) static int FUNC_5(
    struct led_classdev_flash *VAR_1,
    bool *VAR_2)
{
 struct max77693_sub_led *VAR_3 = FUNC_0(VAR_1);
 struct max77693_led_device *VAR_4 = FUNC_4(VAR_3);
 int VAR_5;

 if (!VAR_2)
  return -VAR_0;

 FUNC_2(&VAR_4->lock);

 VAR_5 = FUNC_1(VAR_4, VAR_2);

 *VAR_2 = !!(*VAR_2 && (VAR_4->strobing_sub_led_id == VAR_3->fled_id));

 FUNC_3(&VAR_4->lock);

 return VAR_5;
}
