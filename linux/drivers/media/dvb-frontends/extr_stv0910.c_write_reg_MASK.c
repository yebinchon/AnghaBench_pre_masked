
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct stv {TYPE_1__* base; } ;
struct i2c_msg {int* buf; int len; int flags; int addr; } ;
struct i2c_adapter {int dev; } ;
struct TYPE_2__ {int adr; struct i2c_adapter* i2c; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int ,int,int) ;
 int FUNC_1 (struct i2c_adapter*,struct i2c_msg*,int) ;

__attribute__((used)) static int FUNC_2(struct stv *VAR_1, u16 VAR_2, u8 VAR_3)
{
 struct i2c_adapter *VAR_4 = VAR_1->base->i2c;
 u8 VAR_5[3] = {VAR_2 >> 8, VAR_2 & 0xff, VAR_3};
 struct i2c_msg VAR_6 = {.addr = VAR_1->base->adr, .flags = 0,
         .buf = VAR_5, .len = 3};

 if (FUNC_1(VAR_4, &VAR_6, 1) != 1) {
  FUNC_0(&VAR_4->dev, "i2c write error ([%02x] %04x: %02x)\n",
    VAR_1->base->adr, VAR_2, VAR_3);
  return -VAR_0;
 }
 return 0;
}
