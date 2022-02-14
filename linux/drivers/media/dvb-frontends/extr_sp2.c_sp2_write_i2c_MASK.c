
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sp2 {struct i2c_client* client; } ;
struct i2c_msg {int len; int * buf; int flags; int addr; } ;
struct i2c_client {int addr; int dev; struct i2c_adapter* adapter; } ;
struct i2c_adapter {int dummy; } ;
typedef int buffer ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int ,int ,int,int *) ;
 int FUNC_1 (int *,char*,int ,int) ;
 int FUNC_2 (struct i2c_adapter*,struct i2c_msg*,int) ;
 int FUNC_3 (int *,int *,int) ;

__attribute__((used)) static int FUNC_4(struct sp2 *VAR_2, u8 VAR_3, u8 *VAR_4, int VAR_5)
{
 int VAR_6;
 u8 VAR_7[35];
 struct i2c_client *VAR_8 = VAR_2->client;
 struct i2c_adapter *VAR_9 = VAR_8->adapter;
 struct i2c_msg VAR_10 = {
  .addr = VAR_8->addr,
  .flags = 0,
  .buf = &VAR_7[0],
  .len = VAR_5 + 1
 };

 if ((VAR_5 + 1) > sizeof(VAR_7)) {
  FUNC_1(&VAR_8->dev, "i2c wr reg=%02x: len=%d is too big!\n",
    VAR_3, VAR_5);
  return -VAR_0;
 }

 VAR_7[0] = VAR_3;
 FUNC_3(&VAR_7[1], VAR_4, VAR_5);

 VAR_6 = FUNC_2(VAR_9, &VAR_10, 1);

 if (VAR_6 != 1) {
  FUNC_1(&VAR_8->dev, "i2c write error, reg = 0x%02x, status = %d\n",
    VAR_3, VAR_6);
  if (VAR_6 < 0)
   return VAR_6;
  else
   return -VAR_1;
 }

 FUNC_0(&VAR_2->client->dev, "addr=0x%04x, reg = 0x%02x, data = %*ph\n",
    VAR_8->addr, VAR_3, VAR_5, VAR_4);

 return 0;
}
