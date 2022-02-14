
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct netxbig_led_platform_data {int num_leds; int * leds; int gpio_ext; } ;
struct netxbig_led_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct platform_device*,struct netxbig_led_platform_data*,struct netxbig_led_data*,int *) ;
 struct netxbig_led_data* FUNC_1 (int *,int,int,int ) ;
 struct netxbig_led_platform_data* FUNC_2 (int *,int,int ) ;
 int FUNC_3 (struct platform_device*,int ) ;
 int FUNC_4 (int *,struct netxbig_led_platform_data*) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_2)
{
 struct netxbig_led_platform_data *VAR_3;
 struct netxbig_led_data *VAR_4;
 int VAR_5;
 int VAR_6;

 VAR_3 = FUNC_2(&VAR_2->dev, sizeof(*VAR_3), VAR_1);
 if (!VAR_3)
  return -VAR_0;
 VAR_6 = FUNC_4(&VAR_2->dev, VAR_3);
 if (VAR_6)
  return VAR_6;

 VAR_4 = FUNC_1(&VAR_2->dev,
     VAR_3->num_leds, sizeof(*VAR_4),
     VAR_1);
 if (!VAR_4)
  return -VAR_0;

 VAR_6 = FUNC_3(VAR_2, VAR_3->gpio_ext);
 if (VAR_6 < 0)
  return VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_3->num_leds; VAR_5++) {
  VAR_6 = FUNC_0(VAR_2, VAR_3,
      &VAR_4[VAR_5], &VAR_3->leds[VAR_5]);
  if (VAR_6 < 0)
   return VAR_6;
 }

 return 0;
}
