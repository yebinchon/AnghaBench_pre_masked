
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mms114_data {int core_reg; int io_reg; struct i2c_client* client; } ;
struct i2c_client {int irq; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mms114_data*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct mms114_data *VAR_1)
{
 struct i2c_client *VAR_2 = VAR_1->client;
 int VAR_3;

 VAR_3 = FUNC_5(VAR_1->core_reg);
 if (VAR_3) {
  FUNC_0(&VAR_2->dev, "Failed to enable avdd: %d\n", VAR_3);
  return VAR_3;
 }

 VAR_3 = FUNC_5(VAR_1->io_reg);
 if (VAR_3) {
  FUNC_0(&VAR_2->dev, "Failed to enable vdd: %d\n", VAR_3);
  FUNC_4(VAR_1->core_reg);
  return VAR_3;
 }

 FUNC_3(VAR_0);

 VAR_3 = FUNC_2(VAR_1);
 if (VAR_3 < 0) {
  FUNC_4(VAR_1->io_reg);
  FUNC_4(VAR_1->core_reg);
  return VAR_3;
 }

 FUNC_1(VAR_2->irq);

 return 0;
}
