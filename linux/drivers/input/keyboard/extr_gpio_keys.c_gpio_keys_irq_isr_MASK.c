
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int parent; } ;
struct input_dev {TYPE_2__ dev; } ;
struct gpio_button_data {int irq; int key_pressed; int lock; scalar_t__ release_delay; int release_timer; int * code; struct input_dev* input; TYPE_1__* button; } ;
typedef int irqreturn_t ;
struct TYPE_3__ {scalar_t__ wakeup; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct input_dev*,int ,int ,int) ;
 int FUNC_2 (struct input_dev*) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int *,scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_3, void *VAR_4)
{
 struct gpio_button_data *VAR_5 = VAR_4;
 struct input_dev *VAR_6 = VAR_5->input;
 unsigned long VAR_7;

 FUNC_0(VAR_3 != VAR_5->irq);

 FUNC_6(&VAR_5->lock, VAR_7);

 if (!VAR_5->key_pressed) {
  if (VAR_5->button->wakeup)
   FUNC_5(VAR_5->input->dev.parent, 0);

  FUNC_1(VAR_6, VAR_0, *VAR_5->code, 1);
  FUNC_2(VAR_6);

  if (!VAR_5->release_delay) {
   FUNC_1(VAR_6, VAR_0, *VAR_5->code, 0);
   FUNC_2(VAR_6);
   goto out;
  }

  VAR_5->key_pressed = 1;
 }

 if (VAR_5->release_delay)
  FUNC_3(&VAR_5->release_timer,
   VAR_2 + FUNC_4(VAR_5->release_delay));
out:
 FUNC_7(&VAR_5->lock, VAR_7);
 return VAR_1;
}
