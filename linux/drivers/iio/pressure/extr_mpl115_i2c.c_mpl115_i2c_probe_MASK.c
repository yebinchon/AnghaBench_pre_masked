
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_device_id {int name; } ;
struct i2c_client {int dev; int adapter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int FUNC_1 (int *,int ,int *) ;

__attribute__((used)) static int FUNC_2(struct i2c_client *VAR_3,
    const struct i2c_device_id *VAR_4)
{
 if (!FUNC_0(VAR_3->adapter, VAR_1))
  return -VAR_0;

 return FUNC_1(&VAR_3->dev, VAR_4->name, &VAR_2);
}
