
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2c_adapter {int dummy; } ;
struct dvb_frontend {struct dib9000_state* demodulator_priv; } ;
struct TYPE_2__ {struct i2c_adapter* i2c_adap; } ;
struct dib9000_state {TYPE_1__ i2c; } ;



int FUNC_0(struct dvb_frontend *VAR_0, struct i2c_adapter *VAR_1)
{
 struct dib9000_state *VAR_2 = VAR_0->demodulator_priv;

 VAR_2->i2c.i2c_adap = VAR_1;
 return 0;
}
