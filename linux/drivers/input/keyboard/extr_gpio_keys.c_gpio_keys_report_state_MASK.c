
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct input_dev {int dummy; } ;
struct gpio_keys_drvdata {struct gpio_button_data* data; TYPE_1__* pdata; struct input_dev* input; } ;
struct gpio_button_data {scalar_t__ gpiod; } ;
struct TYPE_2__ {int nbuttons; } ;


 int FUNC_0 (struct gpio_button_data*) ;
 int FUNC_1 (struct input_dev*) ;

__attribute__((used)) static void FUNC_2(struct gpio_keys_drvdata *VAR_0)
{
 struct input_dev *VAR_1 = VAR_0->input;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->pdata->nbuttons; VAR_2++) {
  struct gpio_button_data *VAR_3 = &VAR_0->data[VAR_2];
  if (VAR_3->gpiod)
   FUNC_0(VAR_3);
 }
 FUNC_1(VAR_1);
}
