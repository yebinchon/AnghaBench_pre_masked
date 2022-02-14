
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct i2c_msg {int len; int * buf; int flags; int addr; } ;
struct cx24117_state {int demod; TYPE_1__* priv; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {TYPE_2__* i2c; int demod_address; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int ,int ,int,int ) ;
 int FUNC_1 (TYPE_2__*,struct i2c_msg*,int) ;

__attribute__((used)) static int FUNC_2(struct cx24117_state *VAR_2,
 u8 VAR_3, u8 *VAR_4, int VAR_5)
{
 int VAR_6;
 struct i2c_msg VAR_7[] = {
  { .addr = VAR_2->priv->demod_address, .flags = 0,
   .buf = &VAR_3, .len = 1 },
  { .addr = VAR_2->priv->demod_address, .flags = VAR_0,
   .buf = VAR_4, .len = VAR_5 }
 };

 VAR_6 = FUNC_1(VAR_2->priv->i2c, VAR_7, 2);
 if (VAR_6 < 0) {
  FUNC_0(&VAR_2->priv->i2c->dev,
   "%s: demod%d i2c rd err(%d) @0x%x\n",
   VAR_1, VAR_2->demod, VAR_6, VAR_3);
  return VAR_6;
 }
 return 0;
}
