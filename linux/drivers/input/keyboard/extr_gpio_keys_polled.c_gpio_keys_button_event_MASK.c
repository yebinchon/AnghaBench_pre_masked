
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_polled_dev {struct input_dev* input; struct gpio_keys_polled_dev* private; } ;
struct input_dev {int dummy; } ;
struct gpio_keys_polled_dev {int abs_axis_seen; int rel_axis_seen; } ;
struct gpio_keys_button {int type; int value; int code; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct input_dev*,unsigned int,int ,int) ;
 int FUNC_2 (struct input_dev*) ;

__attribute__((used)) static void FUNC_3(struct input_polled_dev *VAR_3,
       const struct gpio_keys_button *VAR_4,
       int VAR_5)
{
 struct gpio_keys_polled_dev *VAR_6 = VAR_3->private;
 struct input_dev *VAR_7 = VAR_3->input;
 unsigned int VAR_8 = VAR_4->type ?: VAR_1;

 if (VAR_8 == VAR_2) {
  if (VAR_5) {
   FUNC_1(VAR_7, VAR_8, VAR_4->code, VAR_4->value);
   FUNC_0(VAR_4->code, VAR_6->rel_axis_seen);
  }
 } else if (VAR_8 == VAR_0) {
  if (VAR_5) {
   FUNC_1(VAR_7, VAR_8, VAR_4->code, VAR_4->value);
   FUNC_0(VAR_4->code, VAR_6->abs_axis_seen);
  }
 } else {
  FUNC_1(VAR_7, VAR_8, VAR_4->code, VAR_5);
  FUNC_2(VAR_7);
 }
}
