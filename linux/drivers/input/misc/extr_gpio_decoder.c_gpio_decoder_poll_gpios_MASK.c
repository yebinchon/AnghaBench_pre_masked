
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_polled_dev {int input; struct gpio_decoder* private; } ;
struct gpio_decoder {int last_stable; int axis; } ;


 int FUNC_0 (struct gpio_decoder*) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct input_polled_dev *VAR_0)
{
 struct gpio_decoder *VAR_1 = VAR_0->private;
 int VAR_2;

 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2 >= 0 && VAR_2 != VAR_1->last_stable) {
  FUNC_1(VAR_0->input, VAR_1->axis, VAR_2);
  FUNC_2(VAR_0->input);
  VAR_1->last_stable = VAR_2;
 }
}
