
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct led_classdev {int dev; } ;
typedef enum led_brightness { ____Placeholder_led_brightness } led_brightness ;


 int VAR_0 ;
 int* VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(struct led_classdev *VAR_4,
      enum led_brightness VAR_5)
{
 int VAR_6;

 VAR_1[0] = VAR_5;
 VAR_6 = FUNC_1(VAR_0, &VAR_2);

 if (VAR_3 && (!VAR_6))
  FUNC_0(VAR_4->dev, "work was already on the queue.\n");
}
