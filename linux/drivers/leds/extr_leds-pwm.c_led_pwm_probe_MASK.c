
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct led_pwm_priv {int dummy; } ;
struct led_pwm_platform_data {int num_leds; int * leds; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct led_pwm_platform_data* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct led_pwm_priv* FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *,struct led_pwm_priv*,int *,int *) ;
 int FUNC_4 (int *,struct led_pwm_priv*) ;
 int VAR_3 ;
 int FUNC_5 (struct platform_device*,struct led_pwm_priv*) ;
 int FUNC_6 (struct led_pwm_priv*,int ,int) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_4)
{
 struct led_pwm_platform_data *VAR_5 = FUNC_0(&VAR_4->dev);
 struct led_pwm_priv *VAR_6;
 int VAR_7, VAR_8;
 int VAR_9 = 0;

 if (VAR_5)
  VAR_7 = VAR_5->num_leds;
 else
  VAR_7 = FUNC_1(&VAR_4->dev);

 if (!VAR_7)
  return -VAR_0;

 VAR_6 = FUNC_2(&VAR_4->dev, FUNC_6(VAR_6, VAR_3, VAR_7),
       VAR_2);
 if (!VAR_6)
  return -VAR_1;

 if (VAR_5) {
  for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
   VAR_9 = FUNC_3(&VAR_4->dev, VAR_6, &VAR_5->leds[VAR_8],
       ((void*)0));
   if (VAR_9)
    break;
  }
 } else {
  VAR_9 = FUNC_4(&VAR_4->dev, VAR_6);
 }

 if (VAR_9)
  return VAR_9;

 FUNC_5(VAR_4, VAR_6);

 return 0;
}
