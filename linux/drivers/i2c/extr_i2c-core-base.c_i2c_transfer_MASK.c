
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2c_msg {int dummy; } ;
struct i2c_adapter {int dev; TYPE_1__* algo; } ;
struct TYPE_2__ {int master_xfer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct i2c_adapter*) ;
 int FUNC_1 (struct i2c_adapter*,struct i2c_msg*,int) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (struct i2c_adapter*,int ) ;

int FUNC_4(struct i2c_adapter *VAR_2, struct i2c_msg *VAR_3, int VAR_4)
{
 int VAR_5;

 if (!VAR_2->algo->master_xfer) {
  FUNC_2(&VAR_2->dev, "I2C level transfers not supported\n");
  return -VAR_0;
 }
 VAR_5 = FUNC_0(VAR_2);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_1(VAR_2, VAR_3, VAR_4);
 FUNC_3(VAR_2, VAR_1);

 return VAR_5;
}
