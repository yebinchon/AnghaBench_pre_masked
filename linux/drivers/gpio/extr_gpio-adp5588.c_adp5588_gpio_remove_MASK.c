
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct i2c_client {int dev; } ;
struct adp5588_gpio_platform_data {int (* teardown ) (struct i2c_client*,int ,int ,int ) ;int context; } ;
struct TYPE_3__ {int ngpio; int base; } ;
struct adp5588_gpio {TYPE_2__* client; TYPE_1__ gpio_chip; } ;
struct TYPE_4__ {scalar_t__ irq; } ;


 int FUNC_0 (int *,char*,int) ;
 struct adp5588_gpio_platform_data* FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__,struct adp5588_gpio*) ;
 struct adp5588_gpio* FUNC_3 (struct i2c_client*) ;
 int FUNC_4 (struct i2c_client*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_0)
{
 struct adp5588_gpio_platform_data *VAR_1 =
   FUNC_1(&VAR_0->dev);
 struct adp5588_gpio *VAR_2 = FUNC_3(VAR_0);
 int VAR_3;

 if (VAR_1 && VAR_1->teardown) {
  VAR_3 = VAR_1->teardown(VAR_0,
          VAR_2->gpio_chip.base, VAR_2->gpio_chip.ngpio,
          VAR_1->context);
  if (VAR_3 < 0) {
   FUNC_0(&VAR_0->dev, "teardown failed %d\n", VAR_3);
   return VAR_3;
  }
 }

 if (VAR_2->client->irq)
  FUNC_2(VAR_2->client->irq, VAR_2);

 return 0;
}
