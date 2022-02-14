
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_frontend {struct tda8083_state* demodulator_priv; int ops; } ;
struct tda8083_state {struct dvb_frontend frontend; struct i2c_adapter* i2c; struct tda8083_config const* config; } ;
struct tda8083_config {int dummy; } ;
struct i2c_adapter {int dummy; } ;
struct dvb_frontend_ops {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct tda8083_state*) ;
 struct tda8083_state* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *,int) ;
 int VAR_1 ;
 int FUNC_3 (struct tda8083_state*,int) ;

struct dvb_frontend* FUNC_4(const struct tda8083_config* VAR_2,
        struct i2c_adapter* VAR_3)
{
 struct tda8083_state* VAR_4 = ((void*)0);


 VAR_4 = FUNC_1(sizeof(struct tda8083_state), VAR_0);
 if (VAR_4 == ((void*)0)) goto error;


 VAR_4->config = VAR_2;
 VAR_4->i2c = VAR_3;


 if ((FUNC_3(VAR_4, 0x00)) != 0x05) goto error;


 FUNC_2(&VAR_4->frontend.ops, &VAR_1, sizeof(struct dvb_frontend_ops));
 VAR_4->frontend.demodulator_priv = VAR_4;
 return &VAR_4->frontend;

error:
 FUNC_0(VAR_4);
 return ((void*)0);
}
