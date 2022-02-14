
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct led_classdev {int dummy; } ;
typedef enum led_brightness { ____Placeholder_led_brightness } led_brightness ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int ) ;

__attribute__((used)) static void FUNC_1(struct led_classdev *VAR_4,
          enum led_brightness VAR_5)
{
 if (VAR_5)
  VAR_3 = VAR_0 | VAR_1;
 else
  VAR_3 = ~(VAR_0 | VAR_1);
 FUNC_0(VAR_3, VAR_2);
}
