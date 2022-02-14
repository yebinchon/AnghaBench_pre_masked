
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_adapter {int dummy; } ;
struct dvb_frontend {struct ec100_state* demodulator_priv; int ops; } ;
struct ec100_state {struct dvb_frontend frontend; int config; struct i2c_adapter* i2c; } ;
struct ec100_config {int dummy; } ;
struct dvb_frontend_ops {int dummy; } ;


 int VAR_0 ;
 struct ec100_config const VAR_1 ;
 int FUNC_0 (struct ec100_state*,int,int*) ;
 int FUNC_1 (struct ec100_state*) ;
 struct ec100_state* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,struct ec100_config const*,int) ;

struct dvb_frontend *FUNC_4(const struct ec100_config *VAR_2,
 struct i2c_adapter *VAR_3)
{
 int VAR_4;
 struct ec100_state *VAR_5 = ((void*)0);
 u8 VAR_6;


 VAR_5 = FUNC_2(sizeof(struct ec100_state), VAR_0);
 if (VAR_5 == ((void*)0))
  goto error;


 VAR_5->i2c = VAR_3;
 FUNC_3(&VAR_5->config, VAR_2, sizeof(struct ec100_config));


 VAR_4 = FUNC_0(VAR_5, 0x33, &VAR_6);
 if (VAR_4 || VAR_6 != 0x0b)
  goto error;


 FUNC_3(&VAR_5->frontend.ops, &VAR_1,
  sizeof(struct dvb_frontend_ops));
 VAR_5->frontend.demodulator_priv = VAR_5;

 return &VAR_5->frontend;
error:
 FUNC_1(VAR_5);
 return ((void*)0);
}
