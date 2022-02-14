
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct tda10021_state {int i2c; TYPE_1__* config; } ;
struct i2c_msg {int* buf; int len; int flags; int addr; } ;
struct TYPE_2__ {int demod_address; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct i2c_msg*,int) ;
 int FUNC_1 (char*) ;
 int* VAR_1 ;

__attribute__((used)) static int FUNC_2(struct tda10021_state* VAR_2)
{
 u8 VAR_3[2] = { 0x0f, VAR_1[0x0f] | 0x80 };
 struct i2c_msg VAR_4 = {.addr=VAR_2->config->demod_address, .flags=0, .buf=VAR_3, .len=2};

 if(FUNC_0(VAR_2->i2c, &VAR_4, 1) != 1)
 {
  FUNC_1("tda10021: lock tuner fails\n");
  return -VAR_0;
 }
 return 0;
}
