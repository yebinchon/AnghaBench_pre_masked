
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct i2c_msg {int addr; int* buf; int len; int flags; } ;
struct i2c_adapter {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int,int) ;
 int FUNC_1 (struct i2c_adapter*,struct i2c_msg*,int) ;

__attribute__((used)) static inline int FUNC_2(struct i2c_adapter *VAR_2, u8 VAR_3,
      u16 VAR_4, u8 *VAR_5, int VAR_6)
{
 u8 VAR_7[2] = {VAR_4 >> 8, VAR_4 & 0xff};
 struct i2c_msg VAR_8[2] = {{.addr = VAR_3, .flags = 0,
       .buf = VAR_7, .len = 2},
      {.addr = VAR_3, .flags = VAR_1,
       .buf = VAR_5, .len = VAR_6 } };

 if (FUNC_1(VAR_2, VAR_8, 2) != 2) {
  FUNC_0(&VAR_2->dev, "i2c read error ([%02x] %04x)\n",
    VAR_3, VAR_4);
  return -VAR_0;
 }
 return 0;
}
