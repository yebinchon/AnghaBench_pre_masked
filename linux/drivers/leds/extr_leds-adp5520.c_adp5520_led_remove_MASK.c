
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct adp5520_leds_platform_data {int num_leds; } ;
struct adp5520_led {int cdev; int master; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int) ;
 struct adp5520_leds_platform_data* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct adp5520_led* FUNC_3 (struct platform_device*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_4)
{
 struct adp5520_leds_platform_data *VAR_5 = FUNC_1(&VAR_4->dev);
 struct adp5520_led *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_3(VAR_4);

 FUNC_0(VAR_6->master, VAR_3,
   VAR_0 | VAR_1 | VAR_2);

 for (VAR_7 = 0; VAR_7 < VAR_5->num_leds; VAR_7++) {
  FUNC_2(&VAR_6[VAR_7].cdev);
 }

 return 0;
}
