
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_msg {int flags; int len; int* buf; int addr; } ;
struct i2c_client {int flags; int adapter; int addr; } ;
typedef int s16 ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct i2c_msg*,int) ;

__attribute__((used)) static int FUNC_1(struct i2c_client *VAR_3, __be16 *VAR_4)
{
 u8 VAR_5 = 0x80 | VAR_1;
 struct i2c_msg VAR_6[2] = {
  {
   .addr = VAR_3->addr,
   .flags = VAR_3->flags,
   .len = 1,
   .buf = &VAR_5,
  },
  {
   .addr = VAR_3->addr,
   .flags = VAR_3->flags | VAR_0,
   .len = VAR_2 * sizeof(s16),
   .buf = (char *)&VAR_4,
  },
 };

 return FUNC_0(VAR_3->adapter, VAR_6, 2);
}
