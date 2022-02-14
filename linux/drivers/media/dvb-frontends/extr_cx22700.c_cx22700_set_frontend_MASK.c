
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* set_params ) (struct dvb_frontend*) ;} ;
struct TYPE_4__ {int (* i2c_gate_ctrl ) (struct dvb_frontend*,int ) ;TYPE_1__ tuner_ops; } ;
struct dtv_frontend_properties {int inversion; } ;
struct dvb_frontend {TYPE_2__ ops; struct cx22700_state* demodulator_priv; struct dtv_frontend_properties dtv_property_cache; } ;
struct cx22700_state {int dummy; } ;


 int FUNC_0 (struct cx22700_state*,int ) ;
 int FUNC_1 (struct cx22700_state*,struct dtv_frontend_properties*) ;
 int FUNC_2 (struct cx22700_state*,int,int) ;
 int FUNC_3 (struct dvb_frontend*) ;
 int FUNC_4 (struct dvb_frontend*,int ) ;

__attribute__((used)) static int FUNC_5(struct dvb_frontend *VAR_0)
{
 struct dtv_frontend_properties *VAR_1 = &VAR_0->dtv_property_cache;
 struct cx22700_state* VAR_2 = VAR_0->demodulator_priv;

 FUNC_2 (VAR_2, 0x00, 0x02);
 FUNC_2 (VAR_2, 0x00, 0x00);

 if (VAR_0->ops.tuner_ops.set_params) {
  VAR_0->ops.tuner_ops.set_params(VAR_0);
  if (VAR_0->ops.i2c_gate_ctrl) VAR_0->ops.i2c_gate_ctrl(VAR_0, 0);
 }

 FUNC_0(VAR_2, VAR_1->inversion);
 FUNC_1(VAR_2, VAR_1);
 FUNC_2 (VAR_2, 0x37, 0x01);
 FUNC_2 (VAR_2, 0x00, 0x01);

 return 0;
}
