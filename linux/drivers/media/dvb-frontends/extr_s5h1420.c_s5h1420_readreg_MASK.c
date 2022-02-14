
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct s5h1420_state {int* shadow; int i2c; TYPE_1__* config; } ;
struct i2c_msg {int* buf; int len; int flags; int addr; } ;
struct TYPE_2__ {scalar_t__ repeated_start_workaround; int demod_address; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct i2c_msg*,int) ;

__attribute__((used)) static u8 FUNC_1(struct s5h1420_state *VAR_1, u8 VAR_2)
{
 int VAR_3;
 u8 VAR_4[2];
 struct i2c_msg VAR_5[] = {
  { .addr = VAR_1->config->demod_address, .flags = 0, .buf = VAR_4, .len = 2 },
  { .addr = VAR_1->config->demod_address, .flags = 0, .buf = &VAR_2, .len = 1 },
  { .addr = VAR_1->config->demod_address, .flags = VAR_0, .buf = VAR_4, .len = 1 },
 };

 VAR_4[0] = (VAR_2 - 1) & 0xff;
 VAR_4[1] = VAR_1->shadow[(VAR_2 - 1) & 0xff];

 if (VAR_1->config->repeated_start_workaround) {
  VAR_3 = FUNC_0(VAR_1->i2c, VAR_5, 3);
  if (VAR_3 != 3)
   return VAR_3;
 } else {
  VAR_3 = FUNC_0(VAR_1->i2c, &VAR_5[1], 1);
  if (VAR_3 != 1)
   return VAR_3;
  VAR_3 = FUNC_0(VAR_1->i2c, &VAR_5[2], 1);
  if (VAR_3 != 1)
   return VAR_3;
 }



 return VAR_4[0];
}
