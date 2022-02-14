
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nxt6000_state {int dummy; } ;
struct TYPE_3__ {int (* set_params ) (struct dvb_frontend*) ;} ;
struct TYPE_4__ {int (* i2c_gate_ctrl ) (struct dvb_frontend*,int ) ;TYPE_1__ tuner_ops; } ;
struct dtv_frontend_properties {int inversion; int transmission_mode; int guard_interval; int bandwidth_hz; } ;
struct dvb_frontend {TYPE_2__ ops; struct nxt6000_state* demodulator_priv; struct dtv_frontend_properties dtv_property_cache; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct nxt6000_state*,int ) ;
 int FUNC_2 (struct nxt6000_state*,int ) ;
 int FUNC_3 (struct nxt6000_state*,int ) ;
 int FUNC_4 (struct nxt6000_state*,int ) ;
 int FUNC_5 (struct dvb_frontend*) ;
 int FUNC_6 (struct dvb_frontend*,int ) ;

__attribute__((used)) static int FUNC_7(struct dvb_frontend *VAR_0)
{
 struct dtv_frontend_properties *VAR_1 = &VAR_0->dtv_property_cache;
 struct nxt6000_state* VAR_2 = VAR_0->demodulator_priv;
 int VAR_3;

 if (VAR_0->ops.tuner_ops.set_params) {
  VAR_0->ops.tuner_ops.set_params(VAR_0);
  if (VAR_0->ops.i2c_gate_ctrl) VAR_0->ops.i2c_gate_ctrl(VAR_0, 0);
 }

 VAR_3 = FUNC_1(VAR_2, VAR_1->bandwidth_hz);
 if (VAR_3 < 0)
  return VAR_3;

 VAR_3 = FUNC_2(VAR_2, VAR_1->guard_interval);
 if (VAR_3 < 0)
  return VAR_3;

 VAR_3 = FUNC_4(VAR_2, VAR_1->transmission_mode);
 if (VAR_3 < 0)
  return VAR_3;

 VAR_3 = FUNC_3(VAR_2, VAR_1->inversion);
 if (VAR_3 < 0)
  return VAR_3;

 FUNC_0(500);
 return 0;
}
