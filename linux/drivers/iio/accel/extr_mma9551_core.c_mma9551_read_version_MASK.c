
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mma9551_version_info {int * fw_version; int device_id; } ;
struct i2c_client {int dev; } ;
typedef int info ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,int ,int ,int ) ;
 int FUNC_2 (struct i2c_client*,int ,int,int,int *,int ,int *,int) ;

int FUNC_3(struct i2c_client *VAR_1)
{
 struct mma9551_version_info VAR_2;
 int VAR_3;

 VAR_3 = FUNC_2(VAR_1, VAR_0, 0x00, 0x00,
          ((void*)0), 0, (u8 *)&VAR_2, sizeof(VAR_2));
 if (VAR_3 < 0)
  return VAR_3;

 FUNC_1(&VAR_1->dev, "device ID 0x%x, firmware version %02x.%02x\n",
   FUNC_0(VAR_2.device_id), VAR_2.fw_version[0],
   VAR_2.fw_version[1]);

 return 0;
}
