
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct ns2_led_priv {int num_leds; int * leds_data; } ;
struct ns2_led_platform_data {int num_leds; int * leds; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct platform_device*,int *,int *) ;
 int FUNC_1 (int *) ;
 struct ns2_led_platform_data* FUNC_2 (int *) ;
 void* FUNC_3 (int *,int,int ) ;
 int FUNC_4 (int *,struct ns2_led_platform_data*) ;
 int FUNC_5 (struct platform_device*,struct ns2_led_priv*) ;
 int FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_3)
{
 struct ns2_led_platform_data *VAR_4 = FUNC_2(&VAR_3->dev);
 struct ns2_led_priv *VAR_5;
 int VAR_6;
 int VAR_7;
 if (!VAR_4)
  return -VAR_0;


 VAR_5 = FUNC_3(&VAR_3->dev,
       FUNC_6(VAR_4->num_leds), VAR_2);
 if (!VAR_5)
  return -VAR_1;
 VAR_5->num_leds = VAR_4->num_leds;

 for (VAR_6 = 0; VAR_6 < VAR_5->num_leds; VAR_6++) {
  VAR_7 = FUNC_0(VAR_3, &VAR_5->leds_data[VAR_6],
         &VAR_4->leds[VAR_6]);
  if (VAR_7 < 0) {
   for (VAR_6 = VAR_6 - 1; VAR_6 >= 0; VAR_6--)
    FUNC_1(&VAR_5->leds_data[VAR_6]);
   return VAR_7;
  }
 }

 FUNC_5(VAR_3, VAR_5);

 return 0;
}
