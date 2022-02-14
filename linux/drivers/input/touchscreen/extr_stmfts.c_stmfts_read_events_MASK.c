
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct stmfts_data {TYPE_1__* client; int * data; } ;
struct i2c_msg {int len; int * buf; int flags; int addr; } ;
struct TYPE_2__ {int adapter; int addr; } ;


 int FUNC_0 (struct i2c_msg*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,struct i2c_msg*,int) ;

__attribute__((used)) static int FUNC_2(struct stmfts_data *VAR_4)
{
 u8 VAR_5 = VAR_3;
 struct i2c_msg VAR_6[2] = {
  {
   .addr = VAR_4->client->addr,
   .len = 1,
   .buf = &VAR_5,
  },
  {
   .addr = VAR_4->client->addr,
   .flags = VAR_1,
   .len = VAR_2,
   .buf = VAR_4->data,
  },
 };
 int VAR_7;

 VAR_7 = FUNC_1(VAR_4->client->adapter, VAR_6, FUNC_0(VAR_6));
 if (VAR_7 < 0)
  return VAR_7;

 return VAR_7 == FUNC_0(VAR_6) ? 0 : -VAR_0;
}
