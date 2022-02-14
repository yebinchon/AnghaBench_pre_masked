
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct i2c_msg {int len; int * buf; int flags; int addr; } ;
struct i2c_client {int dev; int adapter; int addr; } ;
typedef int reg_buf ;
typedef int __be16 ;


 int FUNC_0 (struct i2c_msg*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,char*,int,int) ;
 int FUNC_3 (int ,struct i2c_msg*,int) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_3,
        u16 VAR_4, void *VAR_5, u16 VAR_6)
{
 __be16 VAR_7 = FUNC_1(VAR_4);
 int VAR_8, VAR_9;
 struct i2c_msg VAR_10[] = {
  {
   .addr = VAR_3->addr,
   .flags = 0,
   .len = sizeof(VAR_7),
   .buf = (u8 *)&VAR_7,
  },
  {
   .addr = VAR_3->addr,
   .flags = VAR_1,
   .len = VAR_6,
   .buf = (u8 *)VAR_5,
  },
 };






 for (VAR_9 = 0; VAR_9 < VAR_2; VAR_9++) {
  VAR_8 = FUNC_3(VAR_3->adapter, VAR_10, FUNC_0(VAR_10));
  if (VAR_8 == FUNC_0(VAR_10))
   return 0;

  FUNC_4(200, 300);
 }

 if (VAR_8 >= 0)
  VAR_8 = -VAR_0;

 FUNC_2(&VAR_3->dev, "Failed to read from address 0x%04X: %d\n",
  VAR_4, VAR_8);

 return VAR_8;
}
