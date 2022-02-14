
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct tda_state {struct i2c_adapter* i2c; int adr; } ;
struct i2c_adapter {int dummy; } ;
struct dvb_tuner_ops {int dummy; } ;
struct TYPE_2__ {int tuner_ops; } ;
struct dvb_frontend {TYPE_1__ ops; struct tda_state* tuner_priv; } ;


 int VAR_0 ;
 int FUNC_0 (struct tda_state*) ;
 struct tda_state* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (struct tda_state*) ;
 int VAR_1 ;

struct dvb_frontend *FUNC_4(struct dvb_frontend *VAR_2,
      struct i2c_adapter *VAR_3, u8 VAR_4)
{
 struct tda_state *VAR_5;

 VAR_5 = FUNC_1(sizeof(struct tda_state), VAR_0);
 if (!VAR_5)
  return ((void*)0);

 VAR_2->tuner_priv = VAR_5;
 VAR_5->adr = VAR_4;
 VAR_5->i2c = VAR_3;
 FUNC_2(&VAR_2->ops.tuner_ops, &VAR_1, sizeof(struct dvb_tuner_ops));
 FUNC_3(VAR_5);
 FUNC_0(VAR_5);

 return VAR_2;
}
