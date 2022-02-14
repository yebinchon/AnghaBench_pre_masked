
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct mb86a16_state {int i2c_adap; TYPE_1__* config; } ;
struct i2c_msg {int len; int * buf; int flags; int addr; } ;
struct TYPE_2__ {int demod_address; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int,char*,int ,int ,int ) ;
 int FUNC_1 (int ,struct i2c_msg*,int) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_2(struct mb86a16_state *VAR_3, u8 VAR_4, u8 VAR_5)
{
 int VAR_6;
 u8 VAR_7[] = { VAR_4, VAR_5 };

 struct i2c_msg VAR_8 = {
  .addr = VAR_3->config->demod_address,
  .flags = 0,
  .buf = VAR_7,
  .len = 2
 };

 FUNC_0(VAR_2, VAR_1, 1,
  "writing to [0x%02x],Reg[0x%02x],Data[0x%02x]",
  VAR_3->config->demod_address, VAR_7[0], VAR_7[1]);

 VAR_6 = FUNC_1(VAR_3->i2c_adap, &VAR_8, 1);

 return (VAR_6 != 1) ? -VAR_0 : 0;
}
