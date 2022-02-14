
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_frontend {struct stv090x_state* demodulator_priv; int ops; } ;
struct stv090x_state {int demod; struct dvb_frontend frontend; int rolloff; int device; int demod_mode; struct i2c_adapter* i2c; struct stv090x_config* config; int * verbose; } ;
struct stv090x_config {int device; int demod_mode; } ;
struct i2c_adapter {int dummy; } ;
typedef enum stv090x_demodulator { ____Placeholder_stv090x_demodulator } stv090x_demodulator ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct stv090x_state*) ;
 struct stv090x_state* FUNC_1 (int,int ) ;
 int VAR_2 ;
 int FUNC_2 (struct stv090x_state*) ;
 int VAR_3 ;

struct dvb_frontend *FUNC_3(struct stv090x_config *VAR_4,
        struct i2c_adapter *VAR_5,
        enum stv090x_demodulator VAR_6)
{
 int VAR_7 = 0;
 struct stv090x_state *VAR_8 = ((void*)0);

 VAR_8 = FUNC_1(sizeof(*VAR_8), VAR_0);
 if (!VAR_8)
  goto error;

 VAR_8->verbose = &VAR_3;
 VAR_8->config = VAR_4;
 VAR_8->i2c = VAR_5;
 VAR_8->frontend.ops = VAR_2;
 VAR_8->frontend.demodulator_priv = VAR_8;
 VAR_8->demod = VAR_6;

 VAR_8->demod_mode = VAR_4->demod_mode;
 VAR_8->device = VAR_4->device;

 VAR_8->rolloff = VAR_1;

 VAR_7 = FUNC_2(VAR_8);
 if (VAR_7)
  goto error;

 return &VAR_8->frontend;

error:
 FUNC_0(VAR_8);
 return ((void*)0);
}
