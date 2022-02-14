
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct gpiod_data {scalar_t__ irq; unsigned char irq_flags; int value_kn; struct gpio_desc* desc; } ;
struct gpio_desc {TYPE_2__* gdev; int flags; } ;
struct TYPE_3__ {int sd; } ;
struct device {TYPE_1__ kobj; } ;
struct TYPE_4__ {int chip; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 struct gpiod_data* FUNC_0 (struct device*) ;
 int FUNC_1 (struct gpio_desc*) ;
 int VAR_8 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (struct gpio_desc*) ;
 int FUNC_5 (scalar_t__,int ,unsigned long,char*,struct gpiod_data*) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ,int *) ;

__attribute__((used)) static int FUNC_9(struct device *VAR_9, unsigned char VAR_10)
{
 struct gpiod_data *VAR_11 = FUNC_0(VAR_9);
 struct gpio_desc *VAR_12 = VAR_11->desc;
 unsigned long VAR_13;
 int VAR_14;

 VAR_11->irq = FUNC_4(VAR_12);
 if (VAR_11->irq < 0)
  return -VAR_0;

 VAR_11->value_kn = FUNC_6(VAR_9->kobj.sd, "value");
 if (!VAR_11->value_kn)
  return -VAR_1;

 VAR_13 = VAR_5;
 if (VAR_10 & VAR_3)
  VAR_13 |= FUNC_8(VAR_2, &VAR_12->flags) ?
   VAR_7 : VAR_6;
 if (VAR_10 & VAR_4)
  VAR_13 |= FUNC_8(VAR_2, &VAR_12->flags) ?
   VAR_6 : VAR_7;
 VAR_14 = FUNC_2(VAR_12->gdev->chip, FUNC_1(VAR_12));
 if (VAR_14 < 0)
  goto err_put_kn;

 VAR_14 = FUNC_5(VAR_11->irq, VAR_8, VAR_13,
    "gpiolib", VAR_11);
 if (VAR_14 < 0)
  goto err_unlock;

 VAR_11->irq_flags = VAR_10;

 return 0;

err_unlock:
 FUNC_3(VAR_12->gdev->chip, FUNC_1(VAR_12));
err_put_kn:
 FUNC_7(VAR_11->value_kn);

 return VAR_14;
}
