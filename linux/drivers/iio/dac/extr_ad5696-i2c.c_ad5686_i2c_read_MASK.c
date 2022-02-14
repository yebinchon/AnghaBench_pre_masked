
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct i2c_msg {int flags; int len; char* buf; int addr; } ;
struct i2c_client {int flags; int adapter; int addr; } ;
struct ad5686_state {TYPE_1__* data; int dev; } ;
struct TYPE_2__ {char* d8; int d16; int d32; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,struct i2c_msg*,int) ;
 struct i2c_client* FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct ad5686_state *VAR_2, u8 VAR_3)
{
 struct i2c_client *VAR_4 = FUNC_5(VAR_2->dev);
 struct i2c_msg VAR_5[2] = {
  {
   .addr = VAR_4->addr,
   .flags = VAR_4->flags,
   .len = 3,
   .buf = &VAR_2->data[0].d8[1],
  },
  {
   .addr = VAR_4->addr,
   .flags = VAR_4->flags | VAR_1,
   .len = 2,
   .buf = (char *)&VAR_2->data[0].d16,
  },
 };
 int VAR_6;

 VAR_2->data[0].d32 = FUNC_3(FUNC_1(VAR_0) |
          FUNC_0(VAR_3) |
          0x00);

 VAR_6 = FUNC_4(VAR_4->adapter, VAR_5, 2);
 if (VAR_6 < 0)
  return VAR_6;

 return FUNC_2(VAR_2->data[0].d16);
}
