
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct input_leds {int num_leds; struct input_led* leds; } ;
struct TYPE_2__ {struct input_leds* name; } ;
struct input_led {TYPE_1__ cdev; } ;
struct input_handle {struct input_leds* private; } ;


 int FUNC_0 (struct input_handle*) ;
 int FUNC_1 (struct input_handle*) ;
 int FUNC_2 (struct input_leds*) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_4(struct input_handle *VAR_0)
{
 struct input_leds *VAR_1 = VAR_0->private;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->num_leds; VAR_2++) {
  struct input_led *VAR_3 = &VAR_1->leds[VAR_2];

  FUNC_3(&VAR_3->cdev);
  FUNC_2(VAR_3->cdev.name);
 }

 FUNC_0(VAR_0);
 FUNC_1(VAR_0);

 FUNC_2(VAR_1);
}
