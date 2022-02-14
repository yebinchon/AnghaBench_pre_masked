
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_device_id {int dummy; } ;
struct i2c_client {int irq; int dev; } ;


 int FUNC_0 (struct i2c_client*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ,int *,int ,int ) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_2(struct i2c_client *VAR_3,
    const struct i2c_device_id *VAR_4)

{
 return FUNC_1(&VAR_3->dev, VAR_3->irq, &VAR_1,
        FUNC_0(VAR_3, &VAR_2),
        VAR_0);
}
