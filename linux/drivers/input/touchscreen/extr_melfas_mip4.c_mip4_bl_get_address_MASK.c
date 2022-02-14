
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct mip4_ts {TYPE_1__* client; } ;
struct i2c_msg {int len; int * buf; int flags; int addr; } ;
typedef int result ;
typedef int cmd ;
struct TYPE_2__ {int dev; int adapter; int addr; } ;


 int FUNC_0 (struct i2c_msg*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,struct i2c_msg*,int) ;

__attribute__((used)) static int FUNC_5(struct mip4_ts *VAR_4, u16 *VAR_5)
{
 u8 VAR_6[] = { VAR_2, VAR_3 };
 u8 VAR_7[sizeof(u16)];
 struct i2c_msg VAR_8[] = {
  {
   .addr = VAR_4->client->addr,
   .flags = 0,
   .buf = VAR_6,
   .len = sizeof(VAR_6),
  }, {
   .addr = VAR_4->client->addr,
   .flags = VAR_1,
   .buf = VAR_7,
   .len = sizeof(VAR_7),
  },
 };
 int VAR_9;
 int VAR_10;

 VAR_9 = FUNC_4(VAR_4->client->adapter, VAR_8, FUNC_0(VAR_8));
 if (VAR_9 != FUNC_0(VAR_8)) {
  VAR_10 = VAR_9 < 0 ? VAR_9 : -VAR_0;
  FUNC_2(&VAR_4->client->dev,
   "Failed to retrieve bootloader buffer address: %d\n",
   VAR_10);
  return VAR_10;
 }

 *VAR_5 = FUNC_3(VAR_7);
 FUNC_1(&VAR_4->client->dev,
  "Bootloader buffer address %#04x\n", *VAR_5);

 return 0;
}
