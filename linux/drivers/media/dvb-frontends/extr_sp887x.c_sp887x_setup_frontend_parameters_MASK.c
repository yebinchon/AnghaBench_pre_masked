
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct sp887x_state {int dummy; } ;
struct TYPE_3__ {int (* get_frequency ) (struct dvb_frontend*,unsigned int*) ;int (* set_params ) (struct dvb_frontend*) ;} ;
struct TYPE_4__ {int (* i2c_gate_ctrl ) (struct dvb_frontend*,int ) ;TYPE_1__ tuner_ops; } ;
struct dtv_frontend_properties {int bandwidth_hz; unsigned int frequency; scalar_t__ transmission_mode; } ;
struct dvb_frontend {TYPE_2__ ops; struct sp887x_state* demodulator_priv; struct dtv_frontend_properties dtv_property_cache; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct dtv_frontend_properties*,int*) ;
 int FUNC_1 (struct sp887x_state*,struct dtv_frontend_properties*,unsigned int) ;
 int FUNC_2 (struct sp887x_state*) ;
 int FUNC_3 (struct sp887x_state*) ;
 int FUNC_4 (struct sp887x_state*,int) ;
 int FUNC_5 (struct sp887x_state*,int,int) ;
 int FUNC_6 (struct dvb_frontend*) ;
 int FUNC_7 (struct dvb_frontend*,int ) ;
 int FUNC_8 (struct dvb_frontend*,unsigned int*) ;
 int FUNC_9 (struct dvb_frontend*,int ) ;

__attribute__((used)) static int FUNC_10(struct dvb_frontend *VAR_2)
{
 struct dtv_frontend_properties *VAR_3 = &VAR_2->dtv_property_cache;
 struct sp887x_state* VAR_4 = VAR_2->demodulator_priv;
 unsigned VAR_5;
 int VAR_6;
 u16 VAR_7, VAR_8;

 if (VAR_3->bandwidth_hz != 8000000 &&
     VAR_3->bandwidth_hz != 7000000 &&
     VAR_3->bandwidth_hz != 6000000)
  return -VAR_0;

 if ((VAR_6 = FUNC_0(VAR_3, &VAR_8)))
  return VAR_6;

 FUNC_3(VAR_4);


 if (VAR_2->ops.tuner_ops.set_params) {
  VAR_2->ops.tuner_ops.set_params(VAR_2);
  if (VAR_2->ops.i2c_gate_ctrl) VAR_2->ops.i2c_gate_ctrl(VAR_2, 0);
 }
 if (VAR_2->ops.tuner_ops.get_frequency) {
  VAR_2->ops.tuner_ops.get_frequency(VAR_2, &VAR_5);
  if (VAR_2->ops.i2c_gate_ctrl) VAR_2->ops.i2c_gate_ctrl(VAR_2, 0);
 } else {
  VAR_5 = VAR_3->frequency;
 }


 FUNC_4(VAR_4, 0x200);

 FUNC_1(VAR_4, VAR_3, VAR_5);


 if (VAR_3->bandwidth_hz == 6000000)
  VAR_7 = 2;
 else if (VAR_3->bandwidth_hz == 7000000)
  VAR_7 = 1;
 else
  VAR_7 = 0;

 FUNC_5(VAR_4, 0x311, VAR_7);


 if (VAR_3->transmission_mode == VAR_1)
  FUNC_5(VAR_4, 0x338, 0x000);
 else
  FUNC_5(VAR_4, 0x338, 0x001);

 FUNC_5(VAR_4, 0xc05, VAR_8);

 if (VAR_3->bandwidth_hz == 6000000)
  VAR_7 = 2 << 3;
 else if (VAR_3->bandwidth_hz == 7000000)
  VAR_7 = 3 << 3;
 else
  VAR_7 = 0 << 3;




 FUNC_5(VAR_4, 0xf14, 0x160 | VAR_7);
 FUNC_5(VAR_4, 0xf15, 0x000);

 FUNC_2(VAR_4);
 return 0;
}
