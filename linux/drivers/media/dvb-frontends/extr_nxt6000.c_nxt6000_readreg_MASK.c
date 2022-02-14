
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
 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (int ,struct i2c_msg*,int) ;

__attribute__((used)) static u8 FUNC_2(struct nxt6000_state* VAR_1, u8 VAR_2)
{
 int VAR_3;
 u8 VAR_4[] = { VAR_2 };
 u8 VAR_5[] = { 0 };
 struct i2c_msg VAR_6[] = {
  {.addr = VAR_1->config->demod_address,.flags = 0,.buf = VAR_4,.len = 1},
  {.addr = VAR_1->config->demod_address,.flags = VAR_0,.buf = VAR_5,.len = 1}
 };

 VAR_3 = FUNC_1(VAR_1->i2c, VAR_6, 2);

 if (VAR_3 != 2)
  FUNC_0("nxt6000: nxt6000_read error (reg: 0x%02X, ret: %d)\n", VAR_2, VAR_3);

 return VAR_5[0];
}
