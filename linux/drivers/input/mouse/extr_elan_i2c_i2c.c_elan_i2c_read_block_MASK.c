
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct i2c_msg {int flags; int len; int * buf; int addr; } ;
struct i2c_client {int flags; int adapter; int addr; } ;
typedef int buf ;
typedef int __le16 ;


 int FUNC_0 (struct i2c_msg*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,struct i2c_msg*,int) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_3,
          u16 VAR_4, u8 *VAR_5, u16 VAR_6)
{
 __le16 VAR_7[] = {
  FUNC_1(VAR_4),
 };
 struct i2c_msg VAR_8[] = {
  {
   .addr = VAR_3->addr,
   .flags = VAR_3->flags & VAR_2,
   .len = sizeof(VAR_7),
   .buf = (u8 *)VAR_7,
  },
  {
   .addr = VAR_3->addr,
   .flags = (VAR_3->flags & VAR_2) | VAR_1,
   .len = VAR_6,
   .buf = VAR_5,
  }
 };
 int VAR_9;

 VAR_9 = FUNC_2(VAR_3->adapter, VAR_8, FUNC_0(VAR_8));
 return VAR_9 == FUNC_0(VAR_8) ? 0 : (VAR_9 < 0 ? VAR_9 : -VAR_0);
}
