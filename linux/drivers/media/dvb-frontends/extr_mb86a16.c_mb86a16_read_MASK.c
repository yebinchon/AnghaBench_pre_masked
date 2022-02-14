
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
 int VAR_2 ;
 int FUNC_0 (int ,int ,int,char*,int ,int) ;
 int FUNC_1 (int ,struct i2c_msg*,int) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_2(struct mb86a16_state *VAR_4, u8 VAR_5, u8 *VAR_6)
{
 int VAR_7;
 u8 VAR_8[] = { VAR_5 };
 u8 VAR_9[] = { 0 };

 struct i2c_msg VAR_10[] = {
  {
   .addr = VAR_4->config->demod_address,
   .flags = 0,
   .buf = VAR_8,
   .len = 1
  }, {
   .addr = VAR_4->config->demod_address,
   .flags = VAR_1,
   .buf = VAR_9,
   .len = 1
  }
 };
 VAR_7 = FUNC_1(VAR_4->i2c_adap, VAR_10, 2);
 if (VAR_7 != 2) {
  FUNC_0(VAR_3, VAR_2, 1, "read error(reg=0x%02x, ret=%i)",
   VAR_5, VAR_7);

  if (VAR_7 < 0)
   return VAR_7;
  return -VAR_0;
 }
 *VAR_6 = VAR_9[0];

 return VAR_7;
}
