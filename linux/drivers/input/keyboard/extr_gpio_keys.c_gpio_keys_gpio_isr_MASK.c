
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct gpio_keys_button {scalar_t__ type; int code; scalar_t__ wakeup; } ;
struct gpio_button_data {int irq; int software_debounce; int work; TYPE_2__* input; scalar_t__ suspended; struct gpio_keys_button* button; } ;
typedef int irqreturn_t ;
struct TYPE_3__ {int parent; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*,int ,int) ;
 int FUNC_2 (int ,int *,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_2 ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_3, void *VAR_4)
{
 struct gpio_button_data *VAR_5 = VAR_4;

 FUNC_0(VAR_3 != VAR_5->irq);

 if (VAR_5->button->wakeup) {
  const struct gpio_keys_button *VAR_6 = VAR_5->button;

  FUNC_4(VAR_5->input->dev.parent);
  if (VAR_5->suspended &&
      (VAR_6->type == 0 || VAR_6->type == VAR_0)) {





   FUNC_1(VAR_5->input, VAR_6->code, 1);
  }
 }

 FUNC_2(VAR_2,
    &VAR_5->work,
    FUNC_3(VAR_5->software_debounce));

 return VAR_1;
}
