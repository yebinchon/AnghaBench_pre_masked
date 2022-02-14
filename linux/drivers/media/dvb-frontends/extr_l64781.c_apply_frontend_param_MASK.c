
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct l64781_state {int dummy; } ;
struct TYPE_3__ {int (* set_params ) (struct dvb_frontend*) ;} ;
struct TYPE_4__ {int (* i2c_gate_ctrl ) (struct dvb_frontend*,int ) ;TYPE_1__ tuner_ops; } ;
struct dtv_frontend_properties {int bandwidth_hz; scalar_t__ inversion; scalar_t__ code_rate_HP; int hierarchy; scalar_t__ code_rate_LP; size_t modulation; int transmission_mode; size_t guard_interval; } ;
struct dvb_frontend {TYPE_2__ ops; struct l64781_state* demodulator_priv; struct dtv_frontend_properties dtv_property_cache; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (struct l64781_state*) ;
 int FUNC_1 (struct l64781_state*,int) ;
 int FUNC_2 (struct l64781_state*,int,int) ;
 int FUNC_3 (struct l64781_state*) ;
 int FUNC_4 (struct dvb_frontend*) ;
 int FUNC_5 (struct dvb_frontend*,int ) ;

__attribute__((used)) static int FUNC_6(struct dvb_frontend *VAR_17)
{
 struct dtv_frontend_properties *VAR_18 = &VAR_17->dtv_property_cache;
 struct l64781_state* VAR_19 = VAR_17->demodulator_priv;

 static const u8 VAR_20[] = { 7, 0, 1, 2, 9, 3, 10, 4 };

 static const u8 VAR_21 [] = { 2, 4, 0, 6 };
 static const u8 VAR_22 [] = { 1, 2, 4, 8 };

 static const u32 VAR_23 = 8000;
 u32 VAR_24;


 u32 VAR_25;
 u32 VAR_26;
 u8 VAR_27;
 u8 VAR_28;
 u8 VAR_29;
 int VAR_30;

 switch (VAR_18->bandwidth_hz) {
 case 8000000:
  VAR_30 = 8;
  break;
 case 7000000:
  VAR_30 = 7;
  break;
 case 6000000:
  VAR_30 = 6;
  break;
 default:
  return -VAR_0;
 }

 if (VAR_17->ops.tuner_ops.set_params) {
  VAR_17->ops.tuner_ops.set_params(VAR_17);
  if (VAR_17->ops.i2c_gate_ctrl) VAR_17->ops.i2c_gate_ctrl(VAR_17, 0);
 }

 if (VAR_18->inversion != VAR_11 &&
     VAR_18->inversion != VAR_10)
  return -VAR_0;

 if (VAR_18->code_rate_HP != VAR_1 && VAR_18->code_rate_HP != VAR_2 &&
     VAR_18->code_rate_HP != VAR_3 && VAR_18->code_rate_HP != VAR_4 &&
     VAR_18->code_rate_HP != VAR_5)
  return -VAR_0;

 if (VAR_18->hierarchy != VAR_9 &&
     (VAR_18->code_rate_LP != VAR_1 && VAR_18->code_rate_LP != VAR_2 &&
      VAR_18->code_rate_LP != VAR_3 && VAR_18->code_rate_LP != VAR_4 &&
      VAR_18->code_rate_LP != VAR_5))
  return -VAR_0;

 if (VAR_18->modulation != VAR_14 && VAR_18->modulation != VAR_12 &&
     VAR_18->modulation != VAR_13)
  return -VAR_0;

 if (VAR_18->transmission_mode != VAR_15 &&
     VAR_18->transmission_mode != VAR_16)
  return -VAR_0;

 if ((int)VAR_18->guard_interval < VAR_6 ||
     VAR_18->guard_interval > VAR_7)
  return -VAR_0;

 if ((int)VAR_18->hierarchy < VAR_9 ||
     VAR_18->hierarchy > VAR_8)
  return -VAR_0;

 VAR_24 = 0x4000-(VAR_23<<16)/VAR_30/1000000;


 VAR_25 = (((8UL<<25) + (8UL<<19) / 25*VAR_23 / (15625/25)) /
   VAR_30 & 0xFFFFFF);



 VAR_26 = 378 * (1 << 10);
 VAR_26 *= 16;
 VAR_26 *= VAR_30;
 VAR_26 *= VAR_21[VAR_18->modulation];
 VAR_26 /= VAR_18->code_rate_HP + 1;
 VAR_26 /= (VAR_22[VAR_18->guard_interval] + 32);
 VAR_26 *= 1000;
 VAR_26 /= 1000 + VAR_23/1000;
 VAR_26 *= VAR_18->code_rate_HP;

 VAR_27 = (VAR_18->transmission_mode << 2) | VAR_18->guard_interval;
 VAR_28 = VAR_20[VAR_18->code_rate_HP];

 if (VAR_18->hierarchy != VAR_9)
  VAR_28 |= (VAR_18->code_rate_LP - VAR_1) << 3;

 VAR_29 = (VAR_18->hierarchy << 2) | VAR_18->modulation;

 FUNC_2 (VAR_19, 0x04, VAR_27);
 FUNC_2 (VAR_19, 0x05, VAR_28);
 FUNC_2 (VAR_19, 0x06, VAR_29);

 FUNC_3 (VAR_19);


 FUNC_2 (VAR_19, 0x15,
    VAR_18->transmission_mode == VAR_15 ? 1 : 3);
 FUNC_2 (VAR_19, 0x16, VAR_25 & 0xff);
 FUNC_2 (VAR_19, 0x17, (VAR_25 >> 8) & 0xff);
 FUNC_2 (VAR_19, 0x18, (VAR_25 >> 16) & 0xff);

 FUNC_2 (VAR_19, 0x1b, VAR_26 & 0xff);
 FUNC_2 (VAR_19, 0x1c, (VAR_26 >> 8) & 0xff);
 FUNC_2 (VAR_19, 0x1d, ((VAR_26 >> 16) & 0x7f) |
  (VAR_18->inversion == VAR_11 ? 0x80 : 0x00));

 FUNC_2 (VAR_19, 0x22, VAR_24 & 0xff);
 FUNC_2 (VAR_19, 0x23, (VAR_24 >> 8) & 0x3f);

 FUNC_1 (VAR_19, 0x00);
 FUNC_1 (VAR_19, 0x01);

 FUNC_0 (VAR_19);

 return 0;
}
