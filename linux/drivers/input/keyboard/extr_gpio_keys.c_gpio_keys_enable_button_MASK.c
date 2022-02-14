
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_button_data {int disabled; int irq; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct gpio_button_data *VAR_0)
{
 if (VAR_0->disabled) {
  FUNC_0(VAR_0->irq);
  VAR_0->disabled = 0;
 }
}
