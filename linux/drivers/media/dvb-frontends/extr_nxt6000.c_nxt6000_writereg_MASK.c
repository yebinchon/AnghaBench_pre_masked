
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct nxt6000_state {int i2c; TYPE_1__* config; } ;
struct i2c_msg {int len; int * buf; int flags; int addr; } ;
struct TYPE_2__ {int demod_address; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int ,int) ;
 int FUNC_1 (int ,struct i2c_msg*,int) ;

__attribute__((used)) static int FUNC_2(struct nxt6000_state* VAR_1, u8 VAR_2, u8 VAR_3)
{
 u8 VAR_4[] = { VAR_2, VAR_3 };
 struct i2c_msg VAR_5 = {.addr = VAR_1->config->demod_address,.flags = 0,.buf = VAR_4,.len = 2 };
 int VAR_6;

 if ((VAR_6 = FUNC_1(VAR_1->i2c, &VAR_5, 1)) != 1)
  FUNC_0("nxt6000: nxt6000_write error (reg: 0x%02X, data: 0x%02X, ret: %d)\n", VAR_2, VAR_3, VAR_6);

 return (VAR_6 != 1) ? -VAR_0 : 0;
}
