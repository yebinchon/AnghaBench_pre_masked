
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* set_params ) (struct dvb_frontend*) ;} ;
struct TYPE_4__ {int (* i2c_gate_ctrl ) (struct dvb_frontend*,int) ;TYPE_1__ tuner_ops; } ;
struct dvb_frontend {TYPE_2__ ops; struct cxd2841er_priv* demodulator_priv; } ;
struct cxd2841er_priv {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct dvb_frontend*,int) ;
 int FUNC_1 (struct dvb_frontend*) ;
 int FUNC_2 (struct dvb_frontend*,int) ;

__attribute__((used)) static int FUNC_3(struct dvb_frontend *VAR_1)
{
 struct cxd2841er_priv *VAR_2 = VAR_1->demodulator_priv;

 if ((VAR_2->flags & VAR_0) && VAR_1->ops.i2c_gate_ctrl)
  VAR_1->ops.i2c_gate_ctrl(VAR_1, 1);
 if (VAR_1->ops.tuner_ops.set_params)
  VAR_1->ops.tuner_ops.set_params(VAR_1);
 if ((VAR_2->flags & VAR_0) && VAR_1->ops.i2c_gate_ctrl)
  VAR_1->ops.i2c_gate_ctrl(VAR_1, 0);

 return 0;
}
