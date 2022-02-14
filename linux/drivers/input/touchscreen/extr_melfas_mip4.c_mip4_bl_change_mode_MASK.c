
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct mip4_ts {TYPE_1__* client; } ;
struct i2c_msg {int len; int * buf; int flags; int addr; } ;
typedef int result ;
typedef int mode_read_cmd ;
typedef int mode_chg_cmd ;
struct TYPE_2__ {int dev; int adapter; int addr; } ;


 int FUNC_0 (struct i2c_msg*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,char*,int ,...) ;
 int FUNC_2 (int *,char*,int,...) ;
 int FUNC_3 (TYPE_1__*,int *,int) ;
 int FUNC_4 (int ,struct i2c_msg*,int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct mip4_ts *VAR_4, u8 VAR_5)
{
 u8 VAR_6[] = { VAR_2, VAR_3, VAR_5 };
 u8 VAR_7[] = { VAR_2, VAR_3 };
 u8 VAR_8;
 struct i2c_msg VAR_9[] = {
  {
   .addr = VAR_4->client->addr,
   .flags = 0,
   .buf = VAR_7,
   .len = sizeof(VAR_7),
  }, {
   .addr = VAR_4->client->addr,
   .flags = VAR_1,
   .buf = &VAR_8,
   .len = sizeof(VAR_8),
  },
 };
 int VAR_10 = 10;
 int VAR_11;
 int VAR_12;

 do {

  VAR_11 = FUNC_3(VAR_4->client,
          VAR_6, sizeof(VAR_6));
  if (VAR_11 != sizeof(VAR_6)) {
   VAR_12 = VAR_11 < 0 ? VAR_11 : -VAR_0;
   FUNC_2(&VAR_4->client->dev,
    "Failed to send %d mode change: %d (%d)\n",
    VAR_5, VAR_12, VAR_11);
   return VAR_12;
  }

  FUNC_1(&VAR_4->client->dev,
   "Sent mode change request (mode: %d)\n", VAR_5);


  FUNC_5(1000);


  VAR_11 = FUNC_4(VAR_4->client->adapter, VAR_9, FUNC_0(VAR_9));
  if (VAR_11 != FUNC_0(VAR_9)) {
   VAR_12 = VAR_11 < 0 ? VAR_11 : -VAR_0;
   FUNC_2(&VAR_4->client->dev,
    "Failed to read device mode: %d\n", VAR_12);
   return VAR_12;
  }

  FUNC_1(&VAR_4->client->dev,
   "Current device mode: %d, want: %d\n", VAR_8, VAR_5);

  if (VAR_8 == VAR_5)
   return 0;

 } while (--VAR_10);

 return -VAR_0;
}
