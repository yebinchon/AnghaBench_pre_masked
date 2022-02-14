
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct i2c_msg {int len; int * buf; int flags; int addr; } ;
struct ascot2e_priv {int i2c_address; TYPE_1__* i2c; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ascot2e_priv*,int ,int ,int *,int) ;
 int FUNC_1 (int *,char*,int ,int,int ,int ) ;
 int FUNC_2 (TYPE_1__*,struct i2c_msg*,int) ;

__attribute__((used)) static int FUNC_3(struct ascot2e_priv *VAR_3,
        u8 VAR_4, u8 *VAR_5, u32 VAR_6)
{
 int VAR_7;
 struct i2c_msg VAR_8[2] = {
  {
   .addr = VAR_3->i2c_address,
   .flags = 0,
   .len = 1,
   .buf = &VAR_4,
  }, {
   .addr = VAR_3->i2c_address,
   .flags = VAR_1,
   .len = VAR_6,
   .buf = VAR_5,
  }
 };

 VAR_7 = FUNC_2(VAR_3->i2c, &VAR_8[0], 1);
 if (VAR_7 >= 0 && VAR_7 != 1)
  VAR_7 = -VAR_0;
 if (VAR_7 < 0) {
  FUNC_1(&VAR_3->i2c->dev,
   "%s: I2C rw failed=%d addr=%02x reg=%02x\n",
   VAR_2, VAR_7, VAR_3->i2c_address, VAR_4);
  return VAR_7;
 }
 VAR_7 = FUNC_2(VAR_3->i2c, &VAR_8[1], 1);
 if (VAR_7 >= 0 && VAR_7 != 1)
  VAR_7 = -VAR_0;
 if (VAR_7 < 0) {
  FUNC_1(&VAR_3->i2c->dev,
   "%s: i2c rd failed=%d addr=%02x reg=%02x\n",
   VAR_2, VAR_7, VAR_3->i2c_address, VAR_4);
  return VAR_7;
 }
 FUNC_0(VAR_3, VAR_4, 0, VAR_5, VAR_6);
 return 0;
}
