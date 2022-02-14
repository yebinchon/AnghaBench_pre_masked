
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_button_data {int disabled; int release_timer; int work; scalar_t__ gpiod; int irq; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct gpio_button_data *VAR_0)
{
 if (!VAR_0->disabled) {



  FUNC_2(VAR_0->irq);

  if (VAR_0->gpiod)
   FUNC_0(&VAR_0->work);
  else
   FUNC_1(&VAR_0->release_timer);

  VAR_0->disabled = 1;
 }
}
