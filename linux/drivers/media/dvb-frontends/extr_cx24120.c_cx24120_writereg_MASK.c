
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct i2c_msg {int len; int * buf; int flags; int addr; } ;
struct cx24120_state {TYPE_2__* i2c; TYPE_1__* config; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int i2c_addr; } ;


 int FUNC_0 (int *,char*,int ,int ) ;
 int FUNC_1 (char*,int,int ,int ) ;
 int FUNC_2 (TYPE_2__*,struct i2c_msg*,int) ;

__attribute__((used)) static int FUNC_3(struct cx24120_state *VAR_0, u8 VAR_1, u8 VAR_2)
{
 u8 VAR_3[] = { VAR_1, VAR_2 };
 struct i2c_msg VAR_4 = {
  .addr = VAR_0->config->i2c_addr,
  .flags = 0,
  .buf = VAR_3,
  .len = 2
 };
 int VAR_5;

 VAR_5 = FUNC_2(VAR_0->i2c, &VAR_4, 1);
 if (VAR_5 != 1) {
  FUNC_1("Write error: i2c_write error(err == %i, 0x%02x: 0x%02x)\n",
      VAR_5, VAR_1, VAR_2);
  return VAR_5;
 }

 FUNC_0(&VAR_0->i2c->dev, "reg=0x%02x; data=0x%02x\n", VAR_1, VAR_2);

 return 0;
}
