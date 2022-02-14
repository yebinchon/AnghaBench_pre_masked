
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct lgs8gl5_state {int i2c; TYPE_1__* config; } ;
struct i2c_msg {int len; int * buf; int flags; int addr; } ;
struct TYPE_2__ {int demod_address; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct i2c_msg*,int) ;

__attribute__((used)) static int
FUNC_1(struct lgs8gl5_state *VAR_1, u8 VAR_2, u8 VAR_3)
{
 int VAR_4;
 u8 VAR_5[] = {VAR_2};
 u8 VAR_6[] = {0};
 u8 VAR_7[] = {VAR_2, VAR_3};
 struct i2c_msg VAR_8[3] = {
  {
   .addr = VAR_1->config->demod_address + 2,
   .flags = 0,
   .buf = VAR_5,
   .len = 1
  },
  {
   .addr = VAR_1->config->demod_address + 2,
   .flags = VAR_0,
   .buf = VAR_6,
   .len = 1
  },
  {
   .addr = VAR_1->config->demod_address + 2,
   .flags = 0,
   .buf = VAR_7,
   .len = 2
  },
 };

 VAR_4 = FUNC_0(VAR_1->i2c, VAR_8, 3);
 return (VAR_4 != 3) ? -1 : 0;
}
