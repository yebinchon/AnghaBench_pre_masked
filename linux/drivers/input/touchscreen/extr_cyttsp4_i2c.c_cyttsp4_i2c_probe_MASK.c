
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_device_id {int dummy; } ;
struct i2c_client {int irq; int dev; int adapter; } ;
struct cyttsp4 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cyttsp4*) ;
 int VAR_3 ;
 struct cyttsp4* FUNC_1 (int *,int *,int ,int ) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_4,
          const struct i2c_device_id *VAR_5)
{
 struct cyttsp4 *VAR_6;

 if (!FUNC_3(VAR_4->adapter, VAR_2)) {
  FUNC_2(&VAR_4->dev, "I2C functionality not Supported\n");
  return -VAR_1;
 }

 VAR_6 = FUNC_1(&VAR_3, &VAR_4->dev, VAR_4->irq,
     VAR_0);

 return FUNC_0(VAR_6);
}
