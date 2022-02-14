
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ brightness; } ;
struct pca963x_led {TYPE_1__* chip; int led_num; TYPE_2__ led_cdev; } ;
struct TYPE_3__ {unsigned long leds_on; int client; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,unsigned long*) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,unsigned long*) ;

__attribute__((used)) static int FUNC_4(struct pca963x_led *VAR_1)
{
 unsigned long *VAR_2 = &VAR_1->chip->leds_on;
 unsigned long VAR_3 = VAR_1->chip->leds_on;

 if (VAR_1->led_cdev.brightness)
  FUNC_3(VAR_1->led_num, VAR_2);
 else
  FUNC_1(VAR_1->led_num, VAR_2);

 if (!(*VAR_2) != !VAR_3)
  return FUNC_2(VAR_1->chip->client,
   VAR_0, *VAR_2 ? 0 : FUNC_0(4));

 return 0;
}
