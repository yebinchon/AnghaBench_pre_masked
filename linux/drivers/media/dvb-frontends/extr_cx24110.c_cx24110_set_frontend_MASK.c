
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int (* set_params ) (struct dvb_frontend*) ;} ;
struct TYPE_3__ {int (* i2c_gate_ctrl ) (struct dvb_frontend*,int ) ;TYPE_2__ tuner_ops; } ;
struct dtv_frontend_properties {int symbol_rate; int fec_inner; int inversion; } ;
struct dvb_frontend {TYPE_1__ ops; struct dtv_frontend_properties dtv_property_cache; struct cx24110_state* demodulator_priv; } ;
struct cx24110_state {int dummy; } ;


 int FUNC_0 (struct cx24110_state*,int ) ;
 int FUNC_1 (struct cx24110_state*,int ) ;
 int FUNC_2 (struct cx24110_state*,int ) ;
 int FUNC_3 (struct cx24110_state*,int,int) ;
 int FUNC_4 (struct dvb_frontend*) ;
 int FUNC_5 (struct dvb_frontend*,int ) ;

__attribute__((used)) static int FUNC_6(struct dvb_frontend *VAR_0)
{
 struct cx24110_state *VAR_1 = VAR_0->demodulator_priv;
 struct dtv_frontend_properties *VAR_2 = &VAR_0->dtv_property_cache;

 if (VAR_0->ops.tuner_ops.set_params) {
  VAR_0->ops.tuner_ops.set_params(VAR_0);
  if (VAR_0->ops.i2c_gate_ctrl) VAR_0->ops.i2c_gate_ctrl(VAR_0, 0);
 }

 FUNC_1(VAR_1, VAR_2->inversion);
 FUNC_0(VAR_1, VAR_2->fec_inner);
 FUNC_2(VAR_1, VAR_2->symbol_rate);
 FUNC_3(VAR_1,0x04,0x05);

 return 0;
}
