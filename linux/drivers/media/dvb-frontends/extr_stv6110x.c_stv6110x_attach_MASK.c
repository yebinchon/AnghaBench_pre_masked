
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stv6110x_state {struct stv6110x_devctl const* devctl; struct i2c_adapter* i2c; struct stv6110x_config const* config; struct dvb_frontend* frontend; } ;
struct stv6110x_devctl {int dummy; } ;
struct stv6110x_config {int dummy; } ;
struct i2c_adapter {int dev; } ;
struct TYPE_2__ {int tuner_ops; } ;
struct dvb_frontend {TYPE_1__ ops; struct stv6110x_state* tuner_priv; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 struct stv6110x_state* FUNC_1 (int,int ) ;
 int FUNC_2 (struct stv6110x_state*) ;
 struct stv6110x_devctl const VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct stv6110x_state*) ;
 int FUNC_4 (struct stv6110x_state*) ;

const struct stv6110x_devctl *FUNC_5(struct dvb_frontend *VAR_3,
     const struct stv6110x_config *VAR_4,
     struct i2c_adapter *VAR_5)
{
 struct stv6110x_state *VAR_6;

 VAR_6 = FUNC_1(sizeof(*VAR_6), VAR_0);
 if (!VAR_6)
  return ((void*)0);

 VAR_6->frontend = VAR_3;
 VAR_6->i2c = VAR_5;
 VAR_6->config = VAR_4;
 VAR_6->devctl = &VAR_1;

 FUNC_2(VAR_6);
 FUNC_4(VAR_6);
 FUNC_3(VAR_6);

 VAR_3->tuner_priv = VAR_6;
 VAR_3->ops.tuner_ops = VAR_2;

 FUNC_0(&VAR_6->i2c->dev, "Attaching STV6110x\n");
 return VAR_6->devctl;
}
