
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_adapter {int dummy; } ;
struct dvb_frontend {struct dib9000_state* demodulator_priv; } ;
struct dib9000_state {struct i2c_adapter component_bus; } ;



struct i2c_adapter *FUNC_0(struct dvb_frontend *VAR_0)
{
 struct dib9000_state *VAR_1 = VAR_0->demodulator_priv;
 return &VAR_1->component_bus;
}
