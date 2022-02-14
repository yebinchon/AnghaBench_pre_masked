
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct i2c_msg {scalar_t__ addr; int len; scalar_t__* buf; int flags; } ;
struct cxd2841er_priv {scalar_t__ i2c_addr_slvx; scalar_t__ i2c_addr_slvt; TYPE_1__* i2c; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct cxd2841er_priv*,scalar_t__,scalar_t__,int ,scalar_t__*,int) ;
 int FUNC_1 (int *,char*,int ,int,scalar_t__,scalar_t__) ;
 int FUNC_2 (TYPE_1__*,struct i2c_msg*,int) ;

__attribute__((used)) static int FUNC_3(struct cxd2841er_priv *VAR_4,
          u8 VAR_5, u8 VAR_6, u8 *VAR_7, u32 VAR_8)
{
 int VAR_9;
 u8 VAR_10 = (VAR_5 == VAR_2 ?
  VAR_4->i2c_addr_slvx : VAR_4->i2c_addr_slvt);
 struct i2c_msg VAR_11[2] = {
  {
   .addr = VAR_10,
   .flags = 0,
   .len = 1,
   .buf = &VAR_6,
  }, {
   .addr = VAR_10,
   .flags = VAR_1,
   .len = VAR_8,
   .buf = VAR_7,
  }
 };

 VAR_9 = FUNC_2(VAR_4->i2c, VAR_11, 2);
 if (VAR_9 >= 0 && VAR_9 != 2)
  VAR_9 = -VAR_0;
 if (VAR_9 < 0) {
  FUNC_1(&VAR_4->i2c->dev,
   "%s: i2c rd failed=%d addr=%02x reg=%02x\n",
   VAR_3, VAR_9, VAR_10, VAR_6);
  return VAR_9;
 }
 FUNC_0(VAR_4, VAR_10, VAR_6, 0, VAR_7, VAR_8);
 return 0;
}
