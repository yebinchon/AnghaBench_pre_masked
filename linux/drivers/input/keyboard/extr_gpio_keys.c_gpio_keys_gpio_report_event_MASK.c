
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int parent; } ;
struct input_dev {TYPE_1__ dev; } ;
struct gpio_keys_button {int type; int value; int code; } ;
struct gpio_button_data {int * code; int gpiod; struct input_dev* input; struct gpio_keys_button* button; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct input_dev*,unsigned int,int ,int) ;
 int FUNC_3 (struct input_dev*) ;

__attribute__((used)) static void FUNC_4(struct gpio_button_data *VAR_2)
{
 const struct gpio_keys_button *VAR_3 = VAR_2->button;
 struct input_dev *VAR_4 = VAR_2->input;
 unsigned int VAR_5 = VAR_3->type ?: VAR_1;
 int VAR_6;

 VAR_6 = FUNC_1(VAR_2->gpiod);
 if (VAR_6 < 0) {
  FUNC_0(VAR_4->dev.parent,
   "failed to get gpio state: %d\n", VAR_6);
  return;
 }

 if (VAR_5 == VAR_0) {
  if (VAR_6)
   FUNC_2(VAR_4, VAR_5, VAR_3->code, VAR_3->value);
 } else {
  FUNC_2(VAR_4, VAR_5, *VAR_2->code, VAR_6);
 }
 FUNC_3(VAR_4);
}
