
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tda8083_state {int dummy; } ;
struct TYPE_4__ {int (* set_params ) (struct dvb_frontend*) ;} ;
struct TYPE_3__ {int (* i2c_gate_ctrl ) (struct dvb_frontend*,int ) ;TYPE_2__ tuner_ops; } ;
struct dtv_frontend_properties {int symbol_rate; int fec_inner; int inversion; } ;
struct dvb_frontend {TYPE_1__ ops; struct tda8083_state* demodulator_priv; struct dtv_frontend_properties dtv_property_cache; } ;


 int FUNC_0 (struct dvb_frontend*) ;
 int FUNC_1 (struct dvb_frontend*,int ) ;
 int FUNC_2 (struct tda8083_state*,int ) ;
 int FUNC_3 (struct tda8083_state*,int ) ;
 int FUNC_4 (struct tda8083_state*,int ) ;
 int FUNC_5 (struct tda8083_state*,int,int) ;

__attribute__((used)) static int FUNC_6(struct dvb_frontend *VAR_0)
{
 struct dtv_frontend_properties *VAR_1 = &VAR_0->dtv_property_cache;
 struct tda8083_state* VAR_2 = VAR_0->demodulator_priv;

 if (VAR_0->ops.tuner_ops.set_params) {
  VAR_0->ops.tuner_ops.set_params(VAR_0);
  if (VAR_0->ops.i2c_gate_ctrl) VAR_0->ops.i2c_gate_ctrl(VAR_0, 0);
 }

 FUNC_3 (VAR_2, VAR_1->inversion);
 FUNC_2(VAR_2, VAR_1->fec_inner);
 FUNC_4(VAR_2, VAR_1->symbol_rate);

 FUNC_5 (VAR_2, 0x00, 0x3c);
 FUNC_5 (VAR_2, 0x00, 0x04);

 return 0;
}
