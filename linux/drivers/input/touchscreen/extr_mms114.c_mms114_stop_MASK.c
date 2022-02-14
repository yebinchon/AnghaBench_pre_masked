
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mms114_data {int core_reg; int io_reg; struct i2c_client* client; } ;
struct i2c_client {int dev; int irq; } ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct mms114_data *VAR_0)
{
 struct i2c_client *VAR_1 = VAR_0->client;
 int VAR_2;

 FUNC_1(VAR_1->irq);

 VAR_2 = FUNC_2(VAR_0->io_reg);
 if (VAR_2)
  FUNC_0(&VAR_1->dev, "Failed to disable vdd: %d\n", VAR_2);

 VAR_2 = FUNC_2(VAR_0->core_reg);
 if (VAR_2)
  FUNC_0(&VAR_1->dev, "Failed to disable avdd: %d\n", VAR_2);
}
