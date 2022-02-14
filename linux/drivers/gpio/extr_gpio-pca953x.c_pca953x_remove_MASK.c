
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pca953x_platform_data {int (* teardown ) (struct i2c_client*,int ,int ,int ) ;int context; } ;
struct TYPE_2__ {int ngpio; int base; } ;
struct pca953x_chip {int regulator; TYPE_1__ gpio_chip; } ;
struct i2c_client {int dev; } ;


 int FUNC_0 (int *,char*,int) ;
 struct pca953x_platform_data* FUNC_1 (int *) ;
 struct pca953x_chip* FUNC_2 (struct i2c_client*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct i2c_client*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_0)
{
 struct pca953x_platform_data *VAR_1 = FUNC_1(&VAR_0->dev);
 struct pca953x_chip *VAR_2 = FUNC_2(VAR_0);
 int VAR_3;

 if (VAR_1 && VAR_1->teardown) {
  VAR_3 = VAR_1->teardown(VAR_0, VAR_2->gpio_chip.base,
    VAR_2->gpio_chip.ngpio, VAR_1->context);
  if (VAR_3 < 0)
   FUNC_0(&VAR_0->dev, "teardown failed, %d\n", VAR_3);
 } else {
  VAR_3 = 0;
 }

 FUNC_3(VAR_2->regulator);

 return VAR_3;
}
