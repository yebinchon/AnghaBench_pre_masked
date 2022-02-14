
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct i2c_msg {int len; int* buf; int flags; int addr; } ;
struct cx24120_state {TYPE_2__* i2c; TYPE_1__* config; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int i2c_addr; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int,int) ;
 int FUNC_1 (char*,int,int) ;
 int FUNC_2 (TYPE_2__*,struct i2c_msg*,int) ;

__attribute__((used)) static int FUNC_3(struct cx24120_state *VAR_1, u8 VAR_2)
{
 int VAR_3;
 u8 VAR_4 = 0;
 struct i2c_msg VAR_5[] = {
  {
   .addr = VAR_1->config->i2c_addr,
   .flags = 0,
   .len = 1,
   .buf = &VAR_2
  }, {
   .addr = VAR_1->config->i2c_addr,
   .flags = VAR_0,
   .len = 1,
   .buf = &VAR_4
  }
 };

 VAR_3 = FUNC_2(VAR_1->i2c, VAR_5, 2);
 if (VAR_3 != 2) {
  FUNC_1("Read error: reg=0x%02x, ret=%i)\n", VAR_2, VAR_3);
  return VAR_3;
 }

 FUNC_0(&VAR_1->i2c->dev, "reg=0x%02x; data=0x%02x\n", VAR_2, VAR_4);

 return VAR_4;
}
