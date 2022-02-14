
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct input_polled_dev {TYPE_2__* input; } ;
struct gpio_keys_button_data {int last_state; scalar_t__ count; int gpiod; } ;
struct gpio_keys_button {int dummy; } ;
struct TYPE_3__ {int parent; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct input_polled_dev*,struct gpio_keys_button const*,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct input_polled_dev *VAR_0,
      const struct gpio_keys_button *VAR_1,
      struct gpio_keys_button_data *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_2(VAR_2->gpiod);
 if (VAR_3 < 0) {
  FUNC_0(VAR_0->input->dev.parent,
   "failed to get gpio state: %d\n", VAR_3);
 } else {
  FUNC_1(VAR_0, VAR_1, VAR_3);

  if (VAR_3 != VAR_2->last_state) {
   VAR_2->count = 0;
   VAR_2->last_state = VAR_3;
  }
 }
}
