
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct max77693_sub_led {int fled_id; } ;
struct max77693_led_device {int lock; TYPE_1__* pdev; } ;
struct led_classdev_flash {int dummy; } ;
struct led_classdev {int dummy; } ;
typedef enum led_brightness { ____Placeholder_led_brightness } led_brightness ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *,char*,int) ;
 struct max77693_sub_led* FUNC_2 (struct led_classdev_flash*) ;
 struct led_classdev_flash* FUNC_3 (struct led_classdev*) ;
 int FUNC_4 (struct max77693_led_device*,int ) ;
 int FUNC_5 (struct max77693_led_device*,int ) ;
 int FUNC_6 (struct max77693_led_device*,int,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 struct max77693_led_device* FUNC_9 (struct max77693_sub_led*) ;

__attribute__((used)) static int FUNC_10(struct led_classdev *VAR_1,
     enum led_brightness VAR_2)
{
 struct led_classdev_flash *VAR_3 = FUNC_3(VAR_1);
 struct max77693_sub_led *VAR_4 = FUNC_2(VAR_3);
 struct max77693_led_device *VAR_5 = FUNC_9(VAR_4);
 int VAR_6 = VAR_4->fled_id, VAR_7;

 FUNC_7(&VAR_5->lock);

 if (VAR_2 == 0) {
  VAR_7 = FUNC_5(VAR_5, FUNC_0(VAR_6));
  if (VAR_7 < 0)
   FUNC_1(&VAR_5->pdev->dev,
    "Failed to clear torch mode (%d)\n",
    VAR_7);
  goto unlock;
 }

 VAR_7 = FUNC_6(VAR_5, VAR_6, VAR_2 * VAR_0);
 if (VAR_7 < 0) {
  FUNC_1(&VAR_5->pdev->dev,
   "Failed to set torch current (%d)\n",
   VAR_7);
  goto unlock;
 }

 VAR_7 = FUNC_4(VAR_5, FUNC_0(VAR_6));
 if (VAR_7 < 0)
  FUNC_1(&VAR_5->pdev->dev,
   "Failed to set torch mode (%d)\n",
   VAR_7);
unlock:
 FUNC_8(&VAR_5->lock);

 return VAR_7;
}
