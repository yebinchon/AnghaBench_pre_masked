
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bd2802_led {TYPE_1__* client; } ;
typedef enum led_ids { ____Placeholder_led_ids } led_ids ;
typedef enum led_colors { ____Placeholder_led_colors } led_colors ;
typedef enum led_bits { ____Placeholder_led_bits } led_bits ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bd2802_led*,int,int) ;
 int FUNC_1 (struct bd2802_led*,int,int) ;
 int FUNC_2 (int *,char*) ;

__attribute__((used)) static void FUNC_3(struct bd2802_led *VAR_2, enum led_ids VAR_3,
    enum led_colors VAR_4, enum led_bits VAR_5)
{
 if (VAR_5 == VAR_1) {
  FUNC_2(&VAR_2->client->dev,
     "Only 'blink' and 'on' are allowed\n");
  return;
 }

 if (VAR_5 == VAR_0)
  FUNC_0(VAR_2, VAR_3, VAR_4);
 else
  FUNC_1(VAR_2, VAR_3, VAR_4);
}
