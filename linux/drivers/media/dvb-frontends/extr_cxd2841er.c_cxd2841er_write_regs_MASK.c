
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct i2c_msg {scalar_t__ addr; scalar_t__* buf; int len; int flags; } ;
struct cxd2841er_priv {scalar_t__ i2c_addr_slvx; scalar_t__ i2c_addr_slvt; TYPE_1__* i2c; } ;
typedef int buf ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct cxd2841er_priv*,scalar_t__,scalar_t__,int,scalar_t__ const*,int ) ;
 int FUNC_1 (int *,char*,scalar_t__,int,...) ;
 int FUNC_2 (TYPE_1__*,struct i2c_msg*,int) ;
 int FUNC_3 (scalar_t__*,scalar_t__ const*,int ) ;

__attribute__((used)) static int FUNC_4(struct cxd2841er_priv *VAR_5,
    u8 VAR_6, u8 VAR_7, const u8 *VAR_8, u32 VAR_9)
{
 int VAR_10;
 u8 VAR_11[VAR_4 + 1];
 u8 VAR_12 = (VAR_6 == VAR_2 ?
  VAR_5->i2c_addr_slvx : VAR_5->i2c_addr_slvt);
 struct i2c_msg VAR_13[1] = {
  {
   .addr = VAR_12,
   .flags = 0,
   .len = VAR_9 + 1,
   .buf = VAR_11,
  }
 };

 if (VAR_9 + 1 >= sizeof(VAR_11)) {
  FUNC_1(&VAR_5->i2c->dev, "wr reg=%04x: len=%d is too big!\n",
    VAR_7, VAR_9 + 1);
  return -VAR_0;
 }

 FUNC_0(VAR_5, VAR_12, VAR_7, 1, VAR_8, VAR_9);
 VAR_11[0] = VAR_7;
 FUNC_3(&VAR_11[1], VAR_8, VAR_9);

 VAR_10 = FUNC_2(VAR_5->i2c, VAR_13, 1);
 if (VAR_10 >= 0 && VAR_10 != 1)
  VAR_10 = -VAR_1;
 if (VAR_10 < 0) {
  FUNC_1(&VAR_5->i2c->dev,
   "%s: i2c wr failed=%d addr=%02x reg=%02x len=%d\n",
   VAR_3, VAR_10, VAR_12, VAR_7, VAR_9);
  return VAR_10;
 }
 return 0;
}
