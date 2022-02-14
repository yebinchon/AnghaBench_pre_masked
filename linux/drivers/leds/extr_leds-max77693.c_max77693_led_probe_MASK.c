
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int parent; } ;
struct platform_device {struct device dev; } ;
struct max77693_sub_led {int fled_cdev; int v4l2_flash; } ;
struct max77693_led_device {int lock; scalar_t__ iout_joint; struct max77693_sub_led* sub_leds; int allowed_modes; int regmap; struct platform_device* pdev; } ;
struct max77693_led_config_data {int dummy; } ;
struct max77693_dev {int regmap; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct max77693_dev* FUNC_0 (int ) ;
 struct max77693_led_device* FUNC_1 (struct device*,int,int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct max77693_led_device*,size_t) ;
 int FUNC_4 (struct max77693_sub_led*,struct max77693_led_config_data*) ;
 int FUNC_5 (struct max77693_led_device*,struct max77693_led_config_data*,struct device_node**) ;
 int FUNC_6 (struct max77693_sub_led*,struct max77693_led_config_data*,struct device_node*) ;
 int FUNC_7 (struct max77693_led_device*,struct max77693_led_config_data*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct platform_device*,struct max77693_led_device*) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static int FUNC_12(struct platform_device *VAR_5)
{
 struct device *VAR_6 = &VAR_5->dev;
 struct max77693_dev *VAR_7 = FUNC_0(VAR_6->parent);
 struct max77693_led_device *VAR_8;
 struct max77693_sub_led *VAR_9;
 struct device_node *VAR_10[2] = {};
 struct max77693_led_config_data VAR_11 = {};
 int VAR_12[2], VAR_13, VAR_14;

 VAR_8 = FUNC_1(VAR_6, sizeof(*VAR_8), VAR_3);
 if (!VAR_8)
  return -VAR_0;

 VAR_8->pdev = VAR_5;
 VAR_8->regmap = VAR_7->regmap;
 VAR_8->allowed_modes = VAR_4;
 VAR_9 = VAR_8->sub_leds;

 FUNC_10(VAR_5, VAR_8);
 VAR_14 = FUNC_5(VAR_8, &VAR_11, VAR_10);
 if (VAR_14 < 0)
  return VAR_14;

 VAR_14 = FUNC_7(VAR_8, &VAR_11);
 if (VAR_14 < 0)
  return VAR_14;

 FUNC_9(&VAR_8->lock);

 VAR_12[VAR_1] =
   VAR_8->iout_joint || FUNC_3(VAR_8, VAR_1);
 VAR_12[VAR_2] =
   !VAR_8->iout_joint && FUNC_3(VAR_8, VAR_2);

 for (VAR_13 = VAR_1; VAR_13 <= VAR_2; ++VAR_13) {
  if (!VAR_12[VAR_13])
   continue;


  FUNC_4(&VAR_9[VAR_13], &VAR_11);





  VAR_14 = FUNC_6(&VAR_9[VAR_13], &VAR_11,
      VAR_10[VAR_13]);
  if (VAR_14 < 0) {




   if (VAR_13 == VAR_2)
    goto err_register_led2;
   else
    goto err_register_led1;
  }
 }

 return 0;

err_register_led2:

 if (!VAR_12[VAR_1])
  goto err_register_led1;
 FUNC_11(VAR_9[VAR_1].v4l2_flash);
 FUNC_2(&VAR_9[VAR_1].fled_cdev);
err_register_led1:
 FUNC_8(&VAR_8->lock);

 return VAR_14;
}
