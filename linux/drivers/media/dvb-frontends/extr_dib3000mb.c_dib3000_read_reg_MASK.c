
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct i2c_msg {int* buf; int len; int flags; int addr; } ;
struct TYPE_2__ {int demod_address; } ;
struct dib3000_state {int i2c; TYPE_1__ config; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ,struct i2c_msg*,int) ;

__attribute__((used)) static int FUNC_2(struct dib3000_state *VAR_1, u16 VAR_2)
{
 u8 VAR_3[] = { ((VAR_2 >> 8) | 0x80) & 0xff, VAR_2 & 0xff };
 u8 VAR_4[2];
 struct i2c_msg VAR_5[] = {
  { .addr = VAR_1->config.demod_address, .flags = 0, .buf = VAR_3, .len = 2 },
  { .addr = VAR_1->config.demod_address, .flags = VAR_0, .buf = VAR_4, .len = 2 },
 };

 if (FUNC_1(VAR_1->i2c, VAR_5, 2) != 2)
  FUNC_0("i2c read error\n");

 FUNC_0("reading i2c bus (reg: %5d 0x%04x, val: %5d 0x%04x)\n",VAR_2,VAR_2,
   (VAR_4[0] << 8) | VAR_4[1],(VAR_4[0] << 8) | VAR_4[1]);

 return (VAR_4[0] << 8) | VAR_4[1];
}
