
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct i2c_msg {int flags; int len; int * buf; int addr; } ;
struct i2c_client {int flags; int dev; int adapter; int addr; } ;
typedef int buf ;
typedef int __le16 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,int ,int) ;
 int FUNC_2 (int ,struct i2c_msg*,int) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_2, u16 VAR_3, u16 VAR_4)
{
 __le16 VAR_5[] = {
  FUNC_0(VAR_3),
  FUNC_0(VAR_4),
 };
 struct i2c_msg VAR_6 = {
  .addr = VAR_2->addr,
  .flags = VAR_2->flags & VAR_1,
  .len = sizeof(VAR_5),
  .buf = (u8 *)VAR_5,
 };
 int VAR_7;

 VAR_7 = FUNC_2(VAR_2->adapter, &VAR_6, 1);
 if (VAR_7 != 1) {
  if (VAR_7 >= 0)
   VAR_7 = -VAR_0;
  FUNC_1(&VAR_2->dev, "writing cmd (0x%04x) failed: %d\n",
   VAR_3, VAR_7);
  return VAR_7;
 }

 return 0;
}
