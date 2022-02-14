
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct itd1000_state {int i2c; int * shadow; TYPE_1__* cfg; } ;
struct i2c_msg {int* buf; int len; int flags; int addr; } ;
struct TYPE_2__ {int i2c_address; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct i2c_msg*,int) ;
 int FUNC_1 (struct itd1000_state*,int,int *,int) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(struct itd1000_state *VAR_2, u8 VAR_3)
{
 u8 VAR_4;
 struct i2c_msg VAR_5[2] = {
  { .addr = VAR_2->cfg->i2c_address, .flags = 0, .buf = &VAR_3, .len = 1 },
  { .addr = VAR_2->cfg->i2c_address, .flags = VAR_1, .buf = &VAR_4, .len = 1 },
 };


 FUNC_1(VAR_2, (VAR_3 - 1) & 0xff, &VAR_2->shadow[(VAR_3 - 1) & 0xff], 1);

 if (FUNC_0(VAR_2->i2c, VAR_5, 2) != 2) {
  FUNC_2("itd1000 I2C read failed\n");
  return -VAR_0;
 }
 return VAR_4;
}
