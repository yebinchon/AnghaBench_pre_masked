
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_frontend {struct mt352_state* demodulator_priv; int ops; } ;
struct mt352_state {struct dvb_frontend frontend; int config; struct i2c_adapter* i2c; } ;
struct mt352_config {int dummy; } ;
struct i2c_adapter {int dummy; } ;
struct dvb_frontend_ops {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct mt352_state*) ;
 struct mt352_state* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,struct mt352_config const*,int) ;
 struct mt352_config const VAR_3 ;
 scalar_t__ FUNC_3 (struct mt352_state*,int ) ;

struct dvb_frontend* FUNC_4(const struct mt352_config* VAR_4,
      struct i2c_adapter* VAR_5)
{
 struct mt352_state* VAR_6 = ((void*)0);


 VAR_6 = FUNC_1(sizeof(struct mt352_state), VAR_1);
 if (VAR_6 == ((void*)0)) goto error;


 VAR_6->i2c = VAR_5;
 FUNC_2(&VAR_6->config,VAR_4,sizeof(struct mt352_config));


 if (FUNC_3(VAR_6, VAR_0) != VAR_2) goto error;


 FUNC_2(&VAR_6->frontend.ops, &VAR_3, sizeof(struct dvb_frontend_ops));
 VAR_6->frontend.demodulator_priv = VAR_6;
 return &VAR_6->frontend;

error:
 FUNC_0(VAR_6);
 return ((void*)0);
}
