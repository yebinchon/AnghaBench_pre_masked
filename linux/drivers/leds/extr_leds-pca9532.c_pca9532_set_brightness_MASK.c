
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pca9532_led {scalar_t__ state; int client; } ;
struct led_classdev {int dummy; } ;
typedef enum led_brightness { ____Placeholder_led_brightness } led_brightness ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 struct pca9532_led* FUNC_0 (struct led_classdev*) ;
 int FUNC_1 (int ,int ,int ,int) ;
 int FUNC_2 (struct pca9532_led*) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct led_classdev *VAR_5,
 enum led_brightness VAR_6)
{
 int VAR_7 = 0;
 struct pca9532_led *VAR_8 = FUNC_0(VAR_5);

 if (VAR_6 == VAR_1)
  VAR_8->state = VAR_2;
 else if (VAR_6 == VAR_0)
  VAR_8->state = VAR_3;
 else {
  VAR_8->state = VAR_4;
  VAR_7 = FUNC_1(VAR_8->client, 0, 0, VAR_6);
  if (VAR_7)
   return VAR_7;
 }
 if (VAR_8->state == VAR_4)
  FUNC_3(VAR_8->client, 0);
 FUNC_2(VAR_8);
 return VAR_7;
}
