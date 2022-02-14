
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct kxtj9_data {TYPE_1__* client; } ;
struct i2c_msg {int flags; int len; int * buf; int addr; } ;
struct TYPE_2__ {int flags; int adapter; int addr; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct i2c_msg*,int) ;

__attribute__((used)) static int FUNC_1(struct kxtj9_data *VAR_1, u8 VAR_2, u8 *VAR_3, int VAR_4)
{
 struct i2c_msg VAR_5[] = {
  {
   .addr = VAR_1->client->addr,
   .flags = VAR_1->client->flags,
   .len = 1,
   .buf = &VAR_2,
  },
  {
   .addr = VAR_1->client->addr,
   .flags = VAR_1->client->flags | VAR_0,
   .len = VAR_4,
   .buf = VAR_3,
  },
 };

 return FUNC_0(VAR_1->client->adapter, VAR_5, 2);
}
