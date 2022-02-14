
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_frontend {struct stv0297_state* demodulator_priv; int ops; } ;
struct stv0297_state {struct dvb_frontend frontend; scalar_t__ base_freq; scalar_t__ last_ber; struct i2c_adapter* i2c; struct stv0297_config const* config; } ;
struct stv0297_config {int dummy; } ;
struct i2c_adapter {int dummy; } ;
struct dvb_frontend_ops {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct stv0297_state*) ;
 struct stv0297_state* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *,int) ;
 int VAR_1 ;
 int FUNC_3 (struct stv0297_state*,int) ;

struct dvb_frontend *FUNC_4(const struct stv0297_config *VAR_2,
        struct i2c_adapter *VAR_3)
{
 struct stv0297_state *VAR_4 = ((void*)0);


 VAR_4 = FUNC_1(sizeof(struct stv0297_state), VAR_0);
 if (VAR_4 == ((void*)0))
  goto error;


 VAR_4->config = VAR_2;
 VAR_4->i2c = VAR_3;
 VAR_4->last_ber = 0;
 VAR_4->base_freq = 0;


 if ((FUNC_3(VAR_4, 0x80) & 0x70) != 0x20)
  goto error;


 FUNC_2(&VAR_4->frontend.ops, &VAR_1, sizeof(struct dvb_frontend_ops));
 VAR_4->frontend.demodulator_priv = VAR_4;
 return &VAR_4->frontend;

error:
 FUNC_0(VAR_4);
 return ((void*)0);
}
