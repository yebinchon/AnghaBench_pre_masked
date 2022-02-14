
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct input_dev {int dummy; } ;
struct gpio_vibrator {int running; int play_work; } ;
struct TYPE_3__ {int strong_magnitude; int weak_magnitude; } ;
struct TYPE_4__ {TYPE_1__ rumble; } ;
struct ff_effect {TYPE_2__ u; } ;


 struct gpio_vibrator* FUNC_0 (struct input_dev*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct input_dev *VAR_0, void *VAR_1,
         struct ff_effect *VAR_2)
{
 struct gpio_vibrator *VAR_3 = FUNC_0(VAR_0);
 int VAR_4;

 VAR_4 = VAR_2->u.rumble.strong_magnitude;
 if (!VAR_4)
  VAR_4 = VAR_2->u.rumble.weak_magnitude;

 VAR_3->running = VAR_4;
 FUNC_1(&VAR_3->play_work);

 return 0;
}
