
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct stv0367ter_state {int guard; int sense; int state; scalar_t__ first_lock; int hierarchy; int bw; int mode; } ;
struct stv0367_state {scalar_t__ use_i2c_gatectrl; scalar_t__ reinit_on_setfrontend; struct stv0367ter_state* ter_state; } ;
struct TYPE_3__ {int (* set_params ) (struct dvb_frontend*) ;} ;
struct TYPE_4__ {int (* i2c_gate_ctrl ) (struct dvb_frontend*,int) ;TYPE_1__ tuner_ops; } ;
struct dtv_frontend_properties {int transmission_mode; int guard_interval; int bandwidth_hz; int inversion; } ;
struct dvb_frontend {TYPE_2__ ops; struct stv0367_state* demodulator_priv; struct dtv_frontend_properties dtv_property_cache; } ;
typedef scalar_t__ s8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;





 int VAR_8 ;





 int FUNC_0 (struct dvb_frontend*,int) ;
 int FUNC_1 (struct dvb_frontend*) ;
 int FUNC_2 (struct dvb_frontend*,int) ;
 int FUNC_3 (struct dvb_frontend*) ;
 int FUNC_4 (struct dvb_frontend*) ;

__attribute__((used)) static int FUNC_5(struct dvb_frontend *VAR_9)
{
 struct dtv_frontend_properties *VAR_10 = &VAR_9->dtv_property_cache;
 struct stv0367_state *VAR_11 = VAR_9->demodulator_priv;
 struct stv0367ter_state *VAR_12 = VAR_11->ter_state;


 s8 VAR_13, VAR_14;
 u8 VAR_15[] = { 131, 132 };

 if (VAR_11->reinit_on_setfrontend)
  FUNC_4(VAR_9);

 if (VAR_9->ops.tuner_ops.set_params) {
  if (VAR_11->use_i2c_gatectrl && VAR_9->ops.i2c_gate_ctrl)
   VAR_9->ops.i2c_gate_ctrl(VAR_9, 1);
  VAR_9->ops.tuner_ops.set_params(VAR_9);
  if (VAR_11->use_i2c_gatectrl && VAR_9->ops.i2c_gate_ctrl)
   VAR_9->ops.i2c_gate_ctrl(VAR_9, 0);
 }

 switch (VAR_10->transmission_mode) {
 default:
 case 128:
 case 130:
  VAR_12->mode = VAR_5;
  break;



 case 129:
  VAR_12->mode = VAR_6;
  break;
 }

 switch (VAR_10->guard_interval) {
 default:
 case 136:
 case 137:
 case 134:
 case 135:
  VAR_12->guard = VAR_10->guard_interval;
  break;
 case 133:
  VAR_12->guard = 136;
  break;
 }

 switch (VAR_10->bandwidth_hz) {
 case 6000000:
  VAR_12->bw = VAR_0;
  break;
 case 7000000:
  VAR_12->bw = VAR_1;
  break;
 case 8000000:
 default:
  VAR_12->bw = VAR_2;
 }

 VAR_12->hierarchy = VAR_3;

 switch (VAR_10->inversion) {
 case 132:
 case 131:
  VAR_13 = 1;
  break;
 default:
  VAR_13 = 2;
  if (VAR_12->first_lock)
   VAR_13 = 1;
  break;
 }

 VAR_12->state = VAR_7;
 VAR_14 = 0;

 while (((VAR_14) < VAR_13) && (VAR_12->state != VAR_4)) {
  if (!VAR_12->first_lock) {
   if (VAR_10->inversion == VAR_8)
    VAR_12->sense = VAR_15[VAR_14];

  }
  FUNC_3(VAR_9);

  if ((VAR_12->state == VAR_4) &&
    (VAR_10->inversion == VAR_8) &&
        (VAR_14 == 1)) {

   VAR_15[VAR_14] = VAR_15[0];
   VAR_15[(VAR_14 + 1) % 2] = (VAR_15[1] + 1) % 2;
  }

  VAR_14++;
 }

 return 0;
}
