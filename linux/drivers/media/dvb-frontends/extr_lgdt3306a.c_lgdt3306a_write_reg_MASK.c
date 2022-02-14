
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct lgdt3306a_state {int i2c_adap; TYPE_1__* cfg; } ;
struct i2c_msg {int* buf; int len; int flags; int addr; } ;
struct TYPE_2__ {int i2c_addr; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (int ,struct i2c_msg*,int) ;
 int FUNC_2 (char*,int,int,int,int) ;

__attribute__((used)) static int FUNC_3(struct lgdt3306a_state *VAR_1, u16 VAR_2, u8 VAR_3)
{
 int VAR_4;
 u8 VAR_5[] = { VAR_2 >> 8, VAR_2 & 0xff, VAR_3 };
 struct i2c_msg VAR_6 = {
  .addr = VAR_1->cfg->i2c_addr, .flags = 0,
  .buf = VAR_5, .len = 3,
 };

 FUNC_0("reg: 0x%04x, val: 0x%02x\n", VAR_2, VAR_3);

 VAR_4 = FUNC_1(VAR_1->i2c_adap, &VAR_6, 1);

 if (VAR_4 != 1) {
  FUNC_2("error (addr %02x %02x <- %02x, err = %i)\n",
         VAR_6.buf[0], VAR_6.buf[1], VAR_6.buf[2], VAR_4);
  if (VAR_4 < 0)
   return VAR_4;
  else
   return -VAR_0;
 }
 return 0;
}
