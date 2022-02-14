
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_frontend {struct or51211_state* demodulator_priv; int ops; } ;
struct or51211_state {struct dvb_frontend frontend; scalar_t__ current_frequency; scalar_t__ initialized; struct i2c_adapter* i2c; struct or51211_config const* config; } ;
struct or51211_config {int dummy; } ;
struct i2c_adapter {int dummy; } ;
struct dvb_frontend_ops {int dummy; } ;


 int VAR_0 ;
 struct or51211_state* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *,int) ;
 int VAR_1 ;

struct dvb_frontend* FUNC_2(const struct or51211_config* VAR_2,
        struct i2c_adapter* VAR_3)
{
 struct or51211_state* VAR_4 = ((void*)0);


 VAR_4 = FUNC_0(sizeof(struct or51211_state), VAR_0);
 if (VAR_4 == ((void*)0))
  return ((void*)0);


 VAR_4->config = VAR_2;
 VAR_4->i2c = VAR_3;
 VAR_4->initialized = 0;
 VAR_4->current_frequency = 0;


 FUNC_1(&VAR_4->frontend.ops, &VAR_1, sizeof(struct dvb_frontend_ops));
 VAR_4->frontend.demodulator_priv = VAR_4;
 return &VAR_4->frontend;
}
