
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct gpio_keys_platform_data {int nbuttons; struct gpio_keys_button* buttons; } ;
struct gpio_keys_button_dev {struct gpio_keys_button_data* data; struct gpio_keys_platform_data* pdata; } ;
struct gpio_keys_button_data {TYPE_1__* b; } ;
struct gpio_keys_button {scalar_t__ irq; int gpio; } ;
struct TYPE_2__ {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct gpio_keys_button_data*,scalar_t__,int ) ;
 int FUNC_1 (int *,char*,int ,scalar_t__) ;
 int FUNC_2 (int *,char*,scalar_t__,...) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,scalar_t__,int *,int ,int,int ,struct gpio_keys_button_data*) ;
 int FUNC_5 (struct gpio_keys_button_data*) ;
 int FUNC_6 (struct platform_device*,struct gpio_keys_button_dev**,int ) ;
 scalar_t__ FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_5)
{
 struct gpio_keys_platform_data *VAR_6;
 struct gpio_keys_button_dev *VAR_7;
 int VAR_8, VAR_9;


 VAR_8 = FUNC_6(VAR_5, &VAR_7, 0);

 if (VAR_8)
  return VAR_8;

 VAR_6 = VAR_7->pdata;
 for (VAR_9 = 0; VAR_9 < VAR_6->nbuttons; VAR_9++) {
  struct gpio_keys_button *VAR_10 = &VAR_6->buttons[VAR_9];
  struct gpio_keys_button_data *VAR_11 = &VAR_7->data[VAR_9];

  if (!VAR_10->irq)
   VAR_10->irq = FUNC_7(VAR_10->gpio);
  if (VAR_10->irq < 0) {
   FUNC_2(&VAR_5->dev, "failed to get irq for gpio:%d\n", VAR_10->gpio);
   continue;
  }

  VAR_8 = FUNC_4(&VAR_5->dev, VAR_10->irq, ((void*)0), VAR_4,
      VAR_3 | VAR_2 | VAR_1,
      FUNC_3(&VAR_5->dev), VAR_11);
  if (VAR_8 < 0)
   FUNC_2(&VAR_5->dev, "failed to request irq:%d for gpio:%d\n", VAR_10->irq, VAR_10->gpio);
  else
   FUNC_1(&VAR_5->dev, "gpio:%d has irq:%d\n", VAR_10->gpio, VAR_10->irq);

  if (VAR_11->b->type == VAR_0)
   FUNC_0(VAR_11, VAR_0, FUNC_5(VAR_11));
 }

 return 0;
}
