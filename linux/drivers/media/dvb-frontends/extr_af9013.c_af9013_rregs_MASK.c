
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct i2c_msg {int len; int* buf; int flags; int addr; } ;
struct i2c_client {int dev; int adapter; int addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct i2c_msg*,int) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_3, u8 VAR_4, u16 VAR_5,
   u8 *VAR_6, int VAR_7, u8 VAR_8)
{
 int VAR_9;
 u8 VAR_10[3];
 struct i2c_msg VAR_11[2] = {
  {
   .addr = VAR_3->addr,
   .flags = 0,
   .len = 3,
   .buf = VAR_10,
  }, {
   .addr = VAR_3->addr,
   .flags = VAR_2,
   .len = VAR_7,
   .buf = VAR_6,
  }
 };

 VAR_10[0] = (VAR_5 >> 8) & 0xff;
 VAR_10[1] = (VAR_5 >> 0) & 0xff;
 VAR_10[2] = VAR_4;

 if (VAR_8)
  FUNC_2(VAR_3->adapter, VAR_1);
 VAR_9 = FUNC_0(VAR_3->adapter, VAR_11, 2);
 if (VAR_8)
  FUNC_3(VAR_3->adapter, VAR_1);
 if (VAR_9 < 0) {
  goto err;
 } else if (VAR_9 != 2) {
  VAR_9 = -VAR_0;
  goto err;
 }

 return 0;
err:
 FUNC_1(&VAR_3->dev, "failed %d\n", VAR_9);
 return VAR_9;
}
