
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct i2c_msg {int * buf; int len; int flags; int addr; } ;
struct helene_priv {TYPE_1__* i2c; int i2c_address; } ;
typedef int buf ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,int ,int,int,...) ;
 int FUNC_1 (struct helene_priv*,int ,int,int const*,int ) ;
 int FUNC_2 (TYPE_1__*,struct i2c_msg*,int) ;
 int FUNC_3 (int *,int const*,int ) ;

__attribute__((used)) static int FUNC_4(struct helene_priv *VAR_4,
  u8 VAR_5, const u8 *VAR_6, u32 VAR_7)
{
 int VAR_8;
 u8 VAR_9[VAR_3 + 1];
 struct i2c_msg VAR_10[1] = {
  {
   .addr = VAR_4->i2c_address,
   .flags = 0,
   .len = VAR_7 + 1,
   .buf = VAR_9,
  }
 };

 if (VAR_7 + 1 > sizeof(VAR_9)) {
  FUNC_0(&VAR_4->i2c->dev,
    "wr reg=%04x: len=%d vs %zu is too big!\n",
    VAR_5, VAR_7 + 1, sizeof(VAR_9));
  return -VAR_0;
 }

 FUNC_1(VAR_4, VAR_5, 1, VAR_6, VAR_7);
 VAR_9[0] = VAR_5;
 FUNC_3(&VAR_9[1], VAR_6, VAR_7);
 VAR_8 = FUNC_2(VAR_4->i2c, VAR_10, 1);
 if (VAR_8 >= 0 && VAR_8 != 1)
  VAR_8 = -VAR_1;
 if (VAR_8 < 0) {
  FUNC_0(&VAR_4->i2c->dev,
    "%s: i2c wr failed=%d reg=%02x len=%d\n",
    VAR_2, VAR_8, VAR_5, VAR_7);
  return VAR_8;
 }
 return 0;
}
