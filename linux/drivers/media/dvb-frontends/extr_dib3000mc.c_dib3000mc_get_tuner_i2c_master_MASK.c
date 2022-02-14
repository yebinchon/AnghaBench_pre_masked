
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_adapter {int dummy; } ;
struct dvb_frontend {struct dib3000mc_state* demodulator_priv; } ;
struct dib3000mc_state {int i2c_master; } ;


 int VAR_0 ;
 struct i2c_adapter* FUNC_0 (int *,int ,int) ;

struct i2c_adapter * FUNC_1(struct dvb_frontend *VAR_1, int VAR_2)
{
 struct dib3000mc_state *VAR_3 = VAR_1->demodulator_priv;
 return FUNC_0(&VAR_3->i2c_master, VAR_0, VAR_2);
}
