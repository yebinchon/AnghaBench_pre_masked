
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct input_dev {int dummy; } ;
struct gpio_button_data {int key_pressed; int lock; int * code; struct input_dev* input; } ;


 int VAR_0 ;
 struct gpio_button_data* VAR_1 ;
 struct gpio_button_data* FUNC_0 (int ,struct timer_list*,int ) ;
 int FUNC_1 (struct input_dev*,int ,int ,int ) ;
 int FUNC_2 (struct input_dev*) ;
 int VAR_2 ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct timer_list *VAR_3)
{
 struct gpio_button_data *VAR_4 = FUNC_0(VAR_4, VAR_3, VAR_2);
 struct input_dev *VAR_5 = VAR_4->input;
 unsigned long VAR_6;

 FUNC_3(&VAR_4->lock, VAR_6);
 if (VAR_4->key_pressed) {
  FUNC_1(VAR_5, VAR_0, *VAR_4->code, 0);
  FUNC_2(VAR_5);
  VAR_4->key_pressed = 0;
 }
 FUNC_4(&VAR_4->lock, VAR_6);
}
