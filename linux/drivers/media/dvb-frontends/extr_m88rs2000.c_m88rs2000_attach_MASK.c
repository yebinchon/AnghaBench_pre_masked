
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_frontend {struct m88rs2000_state* demodulator_priv; int ops; } ;
struct m88rs2000_state {struct dvb_frontend frontend; scalar_t__ fec_inner; scalar_t__ symbol_rate; scalar_t__ tuner_frequency; struct i2c_adapter* i2c; struct m88rs2000_config const* config; } ;
struct m88rs2000_config {int dummy; } ;
struct i2c_adapter {int dummy; } ;
struct dvb_frontend_ops {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct m88rs2000_state*) ;
 struct m88rs2000_state* FUNC_1 (int,int ) ;
 int VAR_1 ;
 int FUNC_2 (int *,int *,int) ;

struct dvb_frontend *FUNC_3(const struct m88rs2000_config *VAR_2,
        struct i2c_adapter *VAR_3)
{
 struct m88rs2000_state *VAR_4 = ((void*)0);


 VAR_4 = FUNC_1(sizeof(struct m88rs2000_state), VAR_0);
 if (VAR_4 == ((void*)0))
  goto error;


 VAR_4->config = VAR_2;
 VAR_4->i2c = VAR_3;
 VAR_4->tuner_frequency = 0;
 VAR_4->symbol_rate = 0;
 VAR_4->fec_inner = 0;


 FUNC_2(&VAR_4->frontend.ops, &VAR_1,
   sizeof(struct dvb_frontend_ops));
 VAR_4->frontend.demodulator_priv = VAR_4;
 return &VAR_4->frontend;

error:
 FUNC_0(VAR_4);

 return ((void*)0);
}
