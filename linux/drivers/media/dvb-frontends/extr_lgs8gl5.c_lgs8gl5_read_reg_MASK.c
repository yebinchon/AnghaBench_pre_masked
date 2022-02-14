
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct lgs8gl5_state {int i2c; TYPE_1__* config; } ;
struct i2c_msg {int* buf; int len; int flags; int addr; } ;
struct TYPE_2__ {int demod_address; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct i2c_msg*,int) ;

__attribute__((used)) static int
FUNC_1(struct lgs8gl5_state *VAR_2, u8 VAR_3)
{
 int VAR_4;
 u8 VAR_5[] = {VAR_3};
 u8 VAR_6[] = {0};
 struct i2c_msg VAR_7[2] = {
  {
   .addr = VAR_2->config->demod_address,
   .flags = 0,
   .buf = VAR_5,
   .len = 1
  },
  {
   .addr = VAR_2->config->demod_address,
   .flags = VAR_1,
   .buf = VAR_6,
   .len = 1
  }
 };

 VAR_4 = FUNC_0(VAR_2->i2c, VAR_7, 2);
 if (VAR_4 != 2)
  return -VAR_0;

 return VAR_6[0];
}
