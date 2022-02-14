
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; int adapter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_5(struct i2c_client *VAR_3, const struct i2c_device_id *VAR_4)
{
 int VAR_5;

 if (!FUNC_2(VAR_3->adapter, VAR_1)) {
  FUNC_1(&VAR_3->dev, "adapter does not support I2C\n");
  return -VAR_0;
 }

 VAR_5 = FUNC_3(&VAR_3->dev);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_0(&VAR_3->dev, &VAR_2);
 if (VAR_5)
  FUNC_4(&VAR_3->dev);
 return VAR_5;
}
