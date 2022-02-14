
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_adapter {int dummy; } ;
struct dvb_frontend {struct dib8000_state* demodulator_priv; } ;
struct dib8000_state {struct i2c_adapter dib8096p_tuner_adap; } ;



__attribute__((used)) static struct i2c_adapter *FUNC_0(struct dvb_frontend *VAR_0)
{
 struct dib8000_state *VAR_1 = VAR_0->demodulator_priv;
 return &VAR_1->dib8096p_tuner_adap;
}
