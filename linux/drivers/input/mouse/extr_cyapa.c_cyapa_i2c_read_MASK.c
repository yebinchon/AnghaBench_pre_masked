
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_msg {int len; int * buf; int flags; int addr; } ;
struct i2c_client {int adapter; int addr; } ;
struct cyapa {struct i2c_client* client; } ;
typedef int ssize_t ;


 int FUNC_0 (struct i2c_msg*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,struct i2c_msg*,int) ;

__attribute__((used)) static ssize_t FUNC_2(struct cyapa *VAR_2, u8 VAR_3, size_t VAR_4,
     u8 *VAR_5)
{
 struct i2c_client *VAR_6 = VAR_2->client;
 struct i2c_msg VAR_7[] = {
  {
   .addr = VAR_6->addr,
   .flags = 0,
   .len = 1,
   .buf = &VAR_3,
  },
  {
   .addr = VAR_6->addr,
   .flags = VAR_1,
   .len = VAR_4,
   .buf = VAR_5,
  },
 };
 int VAR_8;

 VAR_8 = FUNC_1(VAR_6->adapter, VAR_7, FUNC_0(VAR_7));

 if (VAR_8 != FUNC_0(VAR_7))
  return VAR_8 < 0 ? VAR_8 : -VAR_0;

 return 0;
}
