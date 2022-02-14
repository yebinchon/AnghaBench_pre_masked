
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct tc90522_state {TYPE_1__* i2c_client; } ;
struct reg_val {int dummy; } ;
struct i2c_msg {int len; int * buf; scalar_t__ flags; int addr; } ;
struct TYPE_2__ {int adapter; int addr; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct i2c_msg*,int) ;

__attribute__((used)) static int
FUNC_1(struct tc90522_state *VAR_1, const struct reg_val *VAR_2, int VAR_3)
{
 int VAR_4, VAR_5;
 struct i2c_msg VAR_6;

 VAR_5 = 0;
 VAR_6.addr = VAR_1->i2c_client->addr;
 VAR_6.flags = 0;
 VAR_6.len = 2;
 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  VAR_6.buf = (u8 *)&VAR_2[VAR_4];
  VAR_5 = FUNC_0(VAR_1->i2c_client->adapter, &VAR_6, 1);
  if (VAR_5 == 0)
   VAR_5 = -VAR_0;
  if (VAR_5 < 0)
   return VAR_5;
 }
 return 0;
}
