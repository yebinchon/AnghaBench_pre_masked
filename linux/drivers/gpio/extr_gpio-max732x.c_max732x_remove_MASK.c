
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct max732x_platform_data {int (* teardown ) (struct i2c_client*,int ,int ,int ) ;int context; } ;
struct TYPE_2__ {int ngpio; int base; } ;
struct max732x_chip {TYPE_1__ gpio_chip; } ;
struct i2c_client {int dev; } ;


 int FUNC_0 (int *,char*,char*,int) ;
 struct max732x_platform_data* FUNC_1 (int *) ;
 struct max732x_chip* FUNC_2 (struct i2c_client*) ;
 int FUNC_3 (struct i2c_client*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_0)
{
 struct max732x_platform_data *VAR_1 = FUNC_1(&VAR_0->dev);
 struct max732x_chip *VAR_2 = FUNC_2(VAR_0);

 if (VAR_1 && VAR_1->teardown) {
  int VAR_3;

  VAR_3 = VAR_1->teardown(VAR_0, VAR_2->gpio_chip.base,
    VAR_2->gpio_chip.ngpio, VAR_1->context);
  if (VAR_3 < 0) {
   FUNC_0(&VAR_0->dev, "%s failed, %d\n",
     "teardown", VAR_3);
   return VAR_3;
  }
 }

 return 0;
}
