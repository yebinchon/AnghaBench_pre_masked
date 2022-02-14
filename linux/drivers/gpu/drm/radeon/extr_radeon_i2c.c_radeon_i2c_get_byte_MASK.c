
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct radeon_i2c_chan {int adapter; } ;
struct i2c_msg {int len; scalar_t__* buf; int flags; scalar_t__ addr; } ;


 int FUNC_0 (char*,scalar_t__,...) ;
 int VAR_0 ;
 int FUNC_1 (int *,struct i2c_msg*,int) ;

void FUNC_2(struct radeon_i2c_chan *VAR_1,
    u8 VAR_2,
    u8 VAR_3,
    u8 *VAR_4)
{
 u8 VAR_5[2];
 u8 VAR_6[2];
 struct i2c_msg VAR_7[] = {
  {
   .addr = VAR_2,
   .flags = 0,
   .len = 1,
   .buf = VAR_5,
  },
  {
   .addr = VAR_2,
   .flags = VAR_0,
   .len = 1,
   .buf = VAR_6,
  }
 };

 VAR_5[0] = VAR_3;
 VAR_5[1] = 0;

 if (FUNC_1(&VAR_1->adapter, VAR_7, 2) == 2) {
  *VAR_4 = VAR_6[0];
  FUNC_0("val = 0x%02x\n", *VAR_4);
 } else {
  FUNC_0("i2c 0x%02x 0x%02x read failed\n",
     VAR_3, *VAR_4);
 }
}
