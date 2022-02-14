
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_button_data {int release_timer; int work; scalar_t__ gpiod; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(void *VAR_0)
{
 struct gpio_button_data *VAR_1 = VAR_0;

 if (VAR_1->gpiod)
  FUNC_0(&VAR_1->work);
 else
  FUNC_1(&VAR_1->release_timer);
}
