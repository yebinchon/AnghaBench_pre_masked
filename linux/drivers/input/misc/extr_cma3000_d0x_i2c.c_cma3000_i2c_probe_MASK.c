
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_device_id {int dummy; } ;
struct i2c_client {int irq; int dev; } ;
struct cma3000_accl_data {int dummy; } ;


 scalar_t__ FUNC_0 (struct cma3000_accl_data*) ;
 int FUNC_1 (struct cma3000_accl_data*) ;
 int VAR_0 ;
 struct cma3000_accl_data* FUNC_2 (int *,int ,int *) ;
 int FUNC_3 (struct i2c_client*,struct cma3000_accl_data*) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_1,
     const struct i2c_device_id *VAR_2)
{
 struct cma3000_accl_data *VAR_3;

 VAR_3 = FUNC_2(&VAR_1->dev, VAR_1->irq, &VAR_0);
 if (FUNC_0(VAR_3))
  return FUNC_1(VAR_3);

 FUNC_3(VAR_1, VAR_3);

 return 0;
}
