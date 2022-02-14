
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_dev {int dummy; } ;
struct gpio_beeper {int work; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct gpio_beeper*,int) ;
 struct gpio_beeper* FUNC_2 (struct input_dev*) ;

__attribute__((used)) static void FUNC_3(struct input_dev *VAR_0)
{
 struct gpio_beeper *VAR_1 = FUNC_2(VAR_0);

 FUNC_0(&VAR_1->work);
 FUNC_1(VAR_1, 0);
}
