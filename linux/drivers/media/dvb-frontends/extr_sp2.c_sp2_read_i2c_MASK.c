
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sp2 {struct i2c_client* client; } ;
struct i2c_msg {int len; int * buf; int flags; int addr; } ;
struct i2c_client {int addr; int dev; struct i2c_adapter* adapter; } ;
struct i2c_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int ,int ,int ) ;
 int FUNC_1 (int *,char*,int ,int) ;
 int FUNC_2 (struct i2c_adapter*,struct i2c_msg*,int) ;

__attribute__((used)) static int FUNC_3(struct sp2 *VAR_2, u8 VAR_3, u8 *VAR_4, int VAR_5)
{
 int VAR_6;
 struct i2c_client *VAR_7 = VAR_2->client;
 struct i2c_adapter *VAR_8 = VAR_7->adapter;
 struct i2c_msg VAR_9[] = {
  {
   .addr = VAR_7->addr,
   .flags = 0,
   .buf = &VAR_3,
   .len = 1
  }, {
   .addr = VAR_7->addr,
   .flags = VAR_1,
   .buf = VAR_4,
   .len = VAR_5
  }
 };

 VAR_6 = FUNC_2(VAR_8, VAR_9, 2);

 if (VAR_6 != 2) {
  FUNC_1(&VAR_7->dev, "i2c read error, reg = 0x%02x, status = %d\n",
    VAR_3, VAR_6);
  if (VAR_6 < 0)
   return VAR_6;
  else
   return -VAR_0;
 }

 FUNC_0(&VAR_2->client->dev, "addr=0x%04x, reg = 0x%02x, data = %02x\n",
    VAR_7->addr, VAR_3, VAR_4[0]);

 return 0;
}
