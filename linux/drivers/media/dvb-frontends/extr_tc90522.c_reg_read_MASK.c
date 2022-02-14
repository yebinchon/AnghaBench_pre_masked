
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct tc90522_state {TYPE_1__* i2c_client; } ;
struct i2c_msg {int* buf; int len; int flags; int addr; } ;
struct TYPE_2__ {int adapter; int addr; } ;


 int FUNC_0 (struct i2c_msg*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,struct i2c_msg*,int) ;

__attribute__((used)) static int FUNC_2(struct tc90522_state *VAR_2, u8 VAR_3, u8 *VAR_4, u8 VAR_5)
{
 struct i2c_msg VAR_6[2] = {
  {
   .addr = VAR_2->i2c_client->addr,
   .flags = 0,
   .buf = &VAR_3,
   .len = 1,
  },
  {
   .addr = VAR_2->i2c_client->addr,
   .flags = VAR_1,
   .buf = VAR_4,
   .len = VAR_5,
  },
 };
 int VAR_7;

 VAR_7 = FUNC_1(VAR_2->i2c_client->adapter, VAR_6, FUNC_0(VAR_6));
 if (VAR_7 == FUNC_0(VAR_6))
  VAR_7 = 0;
 else if (VAR_7 >= 0)
  VAR_7 = -VAR_0;
 return VAR_7;
}
