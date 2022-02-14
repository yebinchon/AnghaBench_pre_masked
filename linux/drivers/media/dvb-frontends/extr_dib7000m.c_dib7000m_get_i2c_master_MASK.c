
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_adapter {int dummy; } ;
struct dvb_frontend {struct dib7000m_state* demodulator_priv; } ;
struct dib7000m_state {int i2c_master; } ;
typedef enum dibx000_i2c_interface { ____Placeholder_dibx000_i2c_interface } dibx000_i2c_interface ;


 struct i2c_adapter* FUNC_0 (int *,int,int) ;

struct i2c_adapter * FUNC_1(struct dvb_frontend *VAR_0, enum dibx000_i2c_interface VAR_1, int VAR_2)
{
 struct dib7000m_state *VAR_3 = VAR_0->demodulator_priv;
 return FUNC_0(&VAR_3->i2c_master, VAR_1, VAR_2);
}
