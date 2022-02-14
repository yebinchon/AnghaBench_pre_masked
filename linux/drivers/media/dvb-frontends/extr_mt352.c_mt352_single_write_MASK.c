
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int demod_address; } ;
struct mt352_state {int i2c; TYPE_1__ config; } ;
struct i2c_msg {int len; int * buf; int flags; int addr; } ;
struct dvb_frontend {struct mt352_state* demodulator_priv; } ;


 int FUNC_0 (int ,struct i2c_msg*,int) ;
 int FUNC_1 (char*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_0, u8 VAR_1, u8 VAR_2)
{
 struct mt352_state* VAR_3 = VAR_0->demodulator_priv;
 u8 VAR_4[2] = { VAR_1, VAR_2 };
 struct i2c_msg VAR_5 = { .addr = VAR_3->config.demod_address, .flags = 0,
          .buf = VAR_4, .len = 2 };
 int VAR_6 = FUNC_0(VAR_3->i2c, &VAR_5, 1);
 if (VAR_6 != 1) {
  FUNC_1("mt352_write() to reg %x failed (err = %d)!\n", VAR_1, VAR_6);
  return VAR_6;
 }
 return 0;
}
