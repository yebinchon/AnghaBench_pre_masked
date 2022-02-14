
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_device_id {int dummy; } ;
struct i2c_client {int adapter; int irq; int dev; } ;
struct adxl34x {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct adxl34x*) ;
 int FUNC_1 (struct adxl34x*) ;
 int VAR_3 ;
 struct adxl34x* FUNC_2 (int *,int ,int,int *) ;
 int VAR_4 ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct i2c_client*,struct adxl34x*) ;

__attribute__((used)) static int FUNC_6(struct i2c_client *VAR_5,
           const struct i2c_device_id *VAR_6)
{
 struct adxl34x *VAR_7;
 int VAR_8;

 VAR_8 = FUNC_4(VAR_5->adapter,
   VAR_1);
 if (!VAR_8) {
  FUNC_3(&VAR_5->dev, "SMBUS Byte Data not Supported\n");
  return -VAR_0;
 }

 VAR_7 = FUNC_2(&VAR_5->dev, VAR_5->irq, 0,
      FUNC_4(VAR_5->adapter,
         VAR_2) ?
    &VAR_4 : &VAR_3);
 if (FUNC_0(VAR_7))
  return FUNC_1(VAR_7);

 FUNC_5(VAR_5, VAR_7);

 return 0;
}
