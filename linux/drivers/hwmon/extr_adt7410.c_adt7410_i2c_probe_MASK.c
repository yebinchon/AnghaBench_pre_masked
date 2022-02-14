
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_device_id {int dummy; } ;
struct i2c_client {int irq; int dev; int adapter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int *,int ,int *) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static int FUNC_2(struct i2c_client *VAR_4,
 const struct i2c_device_id *VAR_5)
{
 if (!FUNC_1(VAR_4->adapter,
   VAR_1 | VAR_2))
  return -VAR_0;

 return FUNC_0(&VAR_4->dev, ((void*)0), VAR_4->irq, &VAR_3);
}
