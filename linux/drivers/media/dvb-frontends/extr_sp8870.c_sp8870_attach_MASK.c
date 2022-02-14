
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_frontend {struct sp8870_state* demodulator_priv; int ops; } ;
struct sp8870_state {struct dvb_frontend frontend; scalar_t__ initialised; struct i2c_adapter* i2c; struct sp8870_config const* config; } ;
struct sp8870_config {int dummy; } ;
struct i2c_adapter {int dummy; } ;
struct dvb_frontend_ops {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct sp8870_state*) ;
 struct sp8870_state* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *,int) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (struct sp8870_state*,int) ;

struct dvb_frontend* FUNC_4(const struct sp8870_config* VAR_2,
       struct i2c_adapter* VAR_3)
{
 struct sp8870_state* VAR_4 = ((void*)0);


 VAR_4 = FUNC_1(sizeof(struct sp8870_state), VAR_0);
 if (VAR_4 == ((void*)0)) goto error;


 VAR_4->config = VAR_2;
 VAR_4->i2c = VAR_3;
 VAR_4->initialised = 0;


 if (FUNC_3(VAR_4, 0x0200) < 0) goto error;


 FUNC_2(&VAR_4->frontend.ops, &VAR_1, sizeof(struct dvb_frontend_ops));
 VAR_4->frontend.demodulator_priv = VAR_4;
 return &VAR_4->frontend;

error:
 FUNC_0(VAR_4);
 return ((void*)0);
}
