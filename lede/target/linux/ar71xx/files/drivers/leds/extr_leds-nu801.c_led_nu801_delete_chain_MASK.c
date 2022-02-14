
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct led_nu801_led_data {int cdev; } ;
struct led_nu801_data {int num_leds; scalar_t__ cki; scalar_t__ sdi; scalar_t__ lei; int work; struct led_nu801_led_data* led_chain; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct led_nu801_led_data*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct led_nu801_data *VAR_0)
{
 struct led_nu801_led_data *VAR_1;
 struct led_nu801_led_data *VAR_2;
 int VAR_3;
 int VAR_4;

 VAR_1 = VAR_0->led_chain;
 VAR_0->led_chain = 0;
 VAR_4 = VAR_0->num_leds;
 VAR_0->num_leds = 0;
 FUNC_0(&VAR_0->work);

 for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++) {
  VAR_2 = &VAR_1[VAR_3];
  FUNC_3(&VAR_2->cdev);
 }

 FUNC_1(VAR_0->cki);
 FUNC_1(VAR_0->sdi);
 if (VAR_0->lei >= 0)
  FUNC_1(VAR_0->lei);

 FUNC_2(VAR_1);
}
