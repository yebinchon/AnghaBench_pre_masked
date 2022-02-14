
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max732x_platform_data {scalar_t__ irq_base; } ;
struct max732x_chip {struct i2c_client* client; } ;
struct i2c_device_id {size_t driver_data; } ;
struct i2c_client {int dev; scalar_t__ irq; } ;


 int VAR_0 ;
 struct max732x_platform_data* FUNC_0 (int *) ;
 int FUNC_1 (int *,char*) ;
 int* VAR_1 ;

__attribute__((used)) static int FUNC_2(struct max732x_chip *VAR_2,
        const struct i2c_device_id *VAR_3)
{
 struct i2c_client *VAR_4 = VAR_2->client;
 struct max732x_platform_data *VAR_5 = FUNC_0(&VAR_4->dev);
 int VAR_6 = VAR_1[VAR_3->driver_data] >> 32;

 if (((VAR_5 && VAR_5->irq_base) || VAR_4->irq) && VAR_6 != VAR_0)
  FUNC_1(&VAR_4->dev, "interrupt support not compiled in\n");

 return 0;
}
