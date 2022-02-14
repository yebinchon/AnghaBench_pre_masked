
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct i2c_msg {int len; int * buf; int flags; int addr; } ;
struct TYPE_3__ {int demod_address; } ;
struct ec100_state {TYPE_2__* i2c; TYPE_1__ config; } ;
typedef int buf ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int ,int,int ) ;
 int FUNC_1 (TYPE_2__*,struct i2c_msg*,int) ;

__attribute__((used)) static int FUNC_2(struct ec100_state *VAR_2, u8 VAR_3, u8 VAR_4)
{
 int VAR_5;
 u8 VAR_6[2] = {VAR_3, VAR_4};
 struct i2c_msg VAR_7[1] = {
  {
   .addr = VAR_2->config.demod_address,
   .flags = 0,
   .len = sizeof(VAR_6),
   .buf = VAR_6,
  }
 };

 VAR_5 = FUNC_1(VAR_2->i2c, VAR_7, 1);
 if (VAR_5 == 1) {
  VAR_5 = 0;
 } else {
  FUNC_0(&VAR_2->i2c->dev, "%s: i2c wr failed=%d reg=%02x\n",
    VAR_1, VAR_5, VAR_3);
  VAR_5 = -VAR_0;
 }

 return VAR_5;
}
