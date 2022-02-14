
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct lgdt3305_state {TYPE_1__* cfg; int i2c_adap; } ;
struct i2c_msg {int* buf; int len; int flags; int addr; } ;
struct TYPE_2__ {int i2c_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct i2c_msg*,int) ;
 int FUNC_1 (char*,int ,int,int) ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static int FUNC_3(struct lgdt3305_state *VAR_2, u16 VAR_3, u8 *VAR_4)
{
 int VAR_5;
 u8 VAR_6[] = { VAR_3 >> 8, VAR_3 & 0xff };
 struct i2c_msg VAR_7[] = {
  { .addr = VAR_2->cfg->i2c_addr,
    .flags = 0, .buf = VAR_6, .len = 2 },
  { .addr = VAR_2->cfg->i2c_addr,
    .flags = VAR_1, .buf = VAR_4, .len = 1 },
 };

 FUNC_2("reg: 0x%04x\n", VAR_3);

 VAR_5 = FUNC_0(VAR_2->i2c_adap, VAR_7, 2);

 if (VAR_5 != 2) {
  FUNC_1("error (addr %02x reg %04x error (ret == %i)\n",
         VAR_2->cfg->i2c_addr, VAR_3, VAR_5);
  if (VAR_5 < 0)
   return VAR_5;
  else
   return -VAR_0;
 }
 return 0;
}
