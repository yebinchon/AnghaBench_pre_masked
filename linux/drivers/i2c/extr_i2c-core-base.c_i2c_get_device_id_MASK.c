
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union i2c_smbus_data {int* block; } ;
struct i2c_device_identity {int manufacturer_id; int part_id; int die_revision; } ;
struct i2c_client {int addr; struct i2c_adapter* adapter; } ;
struct i2c_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct i2c_adapter*,int ) ;
 int FUNC_1 (struct i2c_adapter*,int ,int ,int ,int,int ,union i2c_smbus_data*) ;

int FUNC_2(const struct i2c_client *VAR_5,
        struct i2c_device_identity *VAR_6)
{
 struct i2c_adapter *VAR_7 = VAR_5->adapter;
 union i2c_smbus_data VAR_8;
 int VAR_9;

 if (!FUNC_0(VAR_7, VAR_2))
  return -VAR_0;

 VAR_8.block[0] = 3;
 VAR_9 = FUNC_1(VAR_7, VAR_1, 0,
        VAR_4, VAR_5->addr << 1,
        VAR_3, &VAR_8);
 if (VAR_9)
  return VAR_9;

 VAR_6->manufacturer_id = (VAR_8.block[1] << 4) | (VAR_8.block[2] >> 4);
 VAR_6->part_id = ((VAR_8.block[2] & 0xf) << 5) | (VAR_8.block[3] >> 3);
 VAR_6->die_revision = VAR_8.block[3] & 0x7;
 return 0;
}
