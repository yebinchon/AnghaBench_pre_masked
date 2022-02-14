
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct max77693_sub_led {int fled_id; } ;
struct max77693_led_device {int lock; } ;
struct led_classdev_flash {int dummy; } ;


 struct max77693_sub_led* FUNC_0 (struct led_classdev_flash*) ;
 int FUNC_1 (struct max77693_led_device*,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct max77693_led_device* FUNC_4 (struct max77693_sub_led*) ;

__attribute__((used)) static int FUNC_5(
    struct led_classdev_flash *VAR_0,
    u32 VAR_1)
{
 struct max77693_sub_led *VAR_2 = FUNC_0(VAR_0);
 struct max77693_led_device *VAR_3 = FUNC_4(VAR_2);
 int VAR_4;

 FUNC_2(&VAR_3->lock);
 VAR_4 = FUNC_1(VAR_3, VAR_2->fled_id, VAR_1);
 FUNC_3(&VAR_3->lock);

 return VAR_4;
}
