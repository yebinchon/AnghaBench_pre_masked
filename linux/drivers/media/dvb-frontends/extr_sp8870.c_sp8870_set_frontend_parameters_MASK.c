
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct sp8870_state {int dummy; } ;
struct TYPE_3__ {int (* set_params ) (struct dvb_frontend*) ;} ;
struct TYPE_4__ {int (* i2c_gate_ctrl ) (struct dvb_frontend*,int ) ;TYPE_1__ tuner_ops; } ;
struct dtv_frontend_properties {int bandwidth_hz; scalar_t__ transmission_mode; } ;
struct dvb_frontend {TYPE_2__ ops; struct sp8870_state* demodulator_priv; struct dtv_frontend_properties dtv_property_cache; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct dtv_frontend_properties*,int*) ;
 int FUNC_1 (struct sp8870_state*) ;
 int FUNC_2 (struct sp8870_state*) ;
 int FUNC_3 (struct sp8870_state*,int) ;
 int FUNC_4 (struct sp8870_state*,int,int) ;
 int FUNC_5 (struct dvb_frontend*) ;
 int FUNC_6 (struct dvb_frontend*,int ) ;

__attribute__((used)) static int FUNC_7(struct dvb_frontend *VAR_1)
{
 struct dtv_frontend_properties *VAR_2 = &VAR_1->dtv_property_cache;
 struct sp8870_state* VAR_3 = VAR_1->demodulator_priv;
 int VAR_4;
 u16 VAR_5;

 if ((VAR_4 = FUNC_0(VAR_2, &VAR_5)))
  return VAR_4;


 FUNC_2(VAR_3);


 if (VAR_1->ops.tuner_ops.set_params) {
  VAR_1->ops.tuner_ops.set_params(VAR_1);
  if (VAR_1->ops.i2c_gate_ctrl) VAR_1->ops.i2c_gate_ctrl(VAR_1, 0);
 }


 FUNC_4(VAR_3, 0x0319, 0x000A);


 FUNC_4(VAR_3, 0x031A, 0x0AAB);


 FUNC_4(VAR_3, 0x0309, 0x0400);


 FUNC_4(VAR_3, 0x030A, 0x0000);


 if (VAR_2->bandwidth_hz == 6000000)
  FUNC_4(VAR_3, 0x0311, 0x0002);
 else if (VAR_2->bandwidth_hz == 7000000)
  FUNC_4(VAR_3, 0x0311, 0x0001);
 else
  FUNC_4(VAR_3, 0x0311, 0x0000);


 if (VAR_2->transmission_mode == VAR_0)
  FUNC_4(VAR_3, 0x0338, 0x0000);
 else
  FUNC_4(VAR_3, 0x0338, 0x0001);

 FUNC_4(VAR_3, 0xc05, VAR_5);


 VAR_4 = FUNC_3(VAR_3, 0x200);
 if (VAR_4)
  return VAR_4;


 FUNC_1(VAR_3);

 return 0;
}
