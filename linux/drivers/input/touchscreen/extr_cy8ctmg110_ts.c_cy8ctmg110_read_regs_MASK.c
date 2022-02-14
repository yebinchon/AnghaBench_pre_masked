
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_msg {int len; unsigned char* buf; int flags; int addr; } ;
struct i2c_client {int adapter; int addr; } ;
struct cy8ctmg110 {struct i2c_client* client; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct i2c_msg*,int) ;

__attribute__((used)) static int FUNC_1(struct cy8ctmg110 *VAR_1,
  unsigned char *VAR_2, unsigned char VAR_3, unsigned char VAR_4)
{
 struct i2c_client *VAR_5 = VAR_1->client;
 int VAR_6;
 struct i2c_msg VAR_7[2] = {

  {
   .addr = VAR_5->addr,
   .len = 1,
   .buf = &VAR_4
  },

  {
   .addr = VAR_5->addr,
   .flags = VAR_0,
   .len = VAR_3,
   .buf = VAR_2
  }
 };

 VAR_6 = FUNC_0(VAR_5->adapter, VAR_7, 2);
 if (VAR_6 < 0)
  return VAR_6;

 return 0;
}
