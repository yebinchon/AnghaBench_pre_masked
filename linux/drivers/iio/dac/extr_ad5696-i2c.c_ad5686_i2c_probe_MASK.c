
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_device_id {int name; int driver_data; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct i2c_client *VAR_2,
       const struct i2c_device_id *VAR_3)
{
 return FUNC_0(&VAR_2->dev, VAR_3->driver_data, VAR_3->name,
       VAR_1, VAR_0);
}
