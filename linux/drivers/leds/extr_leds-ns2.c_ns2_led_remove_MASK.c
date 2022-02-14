
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct ns2_led_priv {int num_leds; int * leds_data; } ;


 int FUNC_0 (int *) ;
 struct ns2_led_priv* FUNC_1 (struct platform_device*) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_0)
{
 int VAR_1;
 struct ns2_led_priv *VAR_2;

 VAR_2 = FUNC_1(VAR_0);

 for (VAR_1 = 0; VAR_1 < VAR_2->num_leds; VAR_1++)
  FUNC_0(&VAR_2->leds_data[VAR_1]);

 return 0;
}
