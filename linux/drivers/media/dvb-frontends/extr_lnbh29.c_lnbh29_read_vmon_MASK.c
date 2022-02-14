
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct lnbh29_priv {TYPE_1__* i2c; int i2c_address; } ;
struct i2c_msg {int len; int* buf; int flags; int addr; } ;
typedef int status ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (TYPE_1__*,struct i2c_msg*,int) ;

__attribute__((used)) static int FUNC_3(struct lnbh29_priv *VAR_4)
{
 u8 VAR_5 = 0x00;
 u8 VAR_6[2];
 int VAR_7;
 struct i2c_msg VAR_8[2] = {
  {
   .addr = VAR_4->i2c_address,
   .flags = 0,
   .len = 1,
   .buf = &VAR_5
  }, {
   .addr = VAR_4->i2c_address,
   .flags = VAR_1,
   .len = sizeof(VAR_6),
   .buf = VAR_6
  }
 };

 VAR_7 = FUNC_2(VAR_4->i2c, VAR_8, 2);
 if (VAR_7 >= 0 && VAR_7 != 2)
  VAR_7 = -VAR_0;
 if (VAR_7 < 0) {
  FUNC_0(&VAR_4->i2c->dev, "LNBH29 I2C transfer failed (%d)\n",
   VAR_7);
  return VAR_7;
 }

 if (VAR_6[0] & (VAR_2 | VAR_3)) {
  FUNC_1(&VAR_4->i2c->dev,
   "LNBH29 voltage in failure state, status reg 0x%x\n",
   VAR_6[0]);
  return -VAR_0;
 }

 return 0;
}
