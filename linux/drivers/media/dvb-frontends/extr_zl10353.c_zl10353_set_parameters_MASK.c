
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_4__ {scalar_t__ no_tuner; } ;
struct zl10353_state {int bandwidth; TYPE_1__ config; int frequency; } ;
struct TYPE_5__ {int (* calc_regs ) (struct dvb_frontend*,int*,int) ;int (* set_params ) (struct dvb_frontend*) ;} ;
struct TYPE_6__ {TYPE_2__ tuner_ops; int (* i2c_gate_ctrl ) (struct dvb_frontend*,int ) ;} ;
struct dtv_frontend_properties {int transmission_mode; int guard_interval; int bandwidth_hz; int code_rate_HP; int code_rate_LP; int hierarchy; int modulation; int frequency; } ;
struct dvb_frontend {TYPE_3__ ops; struct zl10353_state* demodulator_priv; struct dtv_frontend_properties dtv_property_cache; } ;
typedef int pllbuf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;







 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;




 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;



 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct dvb_frontend*,int ) ;
 int FUNC_3 (struct dvb_frontend*) ;
 int FUNC_4 (struct dvb_frontend*,int ) ;
 int FUNC_5 (struct dvb_frontend*,int*,int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct dvb_frontend*,int*) ;
 int FUNC_8 (struct dvb_frontend*,int,int*) ;
 int FUNC_9 (struct dvb_frontend*,int,int) ;
 int FUNC_10 (struct dvb_frontend*,int*,int) ;

__attribute__((used)) static int FUNC_11(struct dvb_frontend *VAR_13)
{
 struct dtv_frontend_properties *VAR_14 = &VAR_13->dtv_property_cache;
 struct zl10353_state *VAR_15 = VAR_13->demodulator_priv;
 u16 VAR_16, VAR_17;
 u8 VAR_18[6] = { 0x67 }, VAR_19 = 0;
 u16 VAR_20 = 0;

 VAR_15->frequency = VAR_14->frequency;

 FUNC_9(VAR_13, VAR_7, 0x80);
 FUNC_6(200);
 FUNC_9(VAR_13, 0xEA, 0x01);
 FUNC_6(200);
 FUNC_9(VAR_13, 0xEA, 0x00);

 FUNC_9(VAR_13, VAR_1, 0x28);

 if (VAR_14->transmission_mode != 128)
  VAR_19 |= (1 << 0);
 if (VAR_14->guard_interval != 140)
  VAR_19 |= (1 << 1);
 FUNC_9(VAR_13, VAR_0, VAR_19);

 switch (VAR_14->bandwidth_hz) {
 case 6000000:

  FUNC_9(VAR_13, VAR_6, 0x97);
  FUNC_9(VAR_13, 0x64, 0x34);
  FUNC_9(VAR_13, 0xcc, 0xdd);
  break;
 case 7000000:
  FUNC_9(VAR_13, VAR_6, 0x86);
  FUNC_9(VAR_13, 0x64, 0x35);
  FUNC_9(VAR_13, 0xcc, 0x73);
  break;
 default:
  VAR_14->bandwidth_hz = 8000000;

 case 8000000:
  FUNC_9(VAR_13, VAR_6, 0x75);
  FUNC_9(VAR_13, 0x64, 0x36);
  FUNC_9(VAR_13, 0xcc, 0x73);
 }

 FUNC_8(VAR_13, VAR_14->bandwidth_hz, &VAR_16);
 FUNC_9(VAR_13, VAR_11, FUNC_1(VAR_16));
 FUNC_9(VAR_13, VAR_10, FUNC_0(VAR_16));
 VAR_15->bandwidth = VAR_14->bandwidth_hz;

 FUNC_7(VAR_13, &VAR_17);
 FUNC_9(VAR_13, VAR_5, FUNC_1(VAR_17));
 FUNC_9(VAR_13, VAR_4, FUNC_0(VAR_17));


 switch (VAR_14->code_rate_HP) {
 case 150:
  VAR_20 |= (1 << 7);
  break;
 case 149:
  VAR_20 |= (2 << 7);
  break;
 case 148:
  VAR_20 |= (3 << 7);
  break;
 case 147:
  VAR_20 |= (4 << 7);
  break;
 case 151:
 case 146:
  break;
 default:
  return -VAR_2;
 }

 switch (VAR_14->code_rate_LP) {
 case 150:
  VAR_20 |= (1 << 4);
  break;
 case 149:
  VAR_20 |= (2 << 4);
  break;
 case 148:
  VAR_20 |= (3 << 4);
  break;
 case 147:
  VAR_20 |= (4 << 4);
  break;
 case 151:
 case 146:
  break;
 case 145:
  if (VAR_14->hierarchy == 136 ||
      VAR_14->hierarchy == 135)
   break;

 default:
  return -VAR_2;
 }

 switch (VAR_14->modulation) {
 case 131:
  break;
 case 132:
 case 134:
  VAR_20 |= (1 << 13);
  break;
 case 133:
  VAR_20 |= (2 << 13);
  break;
 default:
  return -VAR_2;
 }

 switch (VAR_14->transmission_mode) {
 case 130:
 case 128:
  break;
 case 129:
  VAR_20 |= (1 << 0);
  break;
 default:
  return -VAR_2;
 }

 switch (VAR_14->guard_interval) {
 case 143:
 case 140:
  break;
 case 144:
  VAR_20 |= (1 << 2);
  break;
 case 141:
  VAR_20 |= (2 << 2);
  break;
 case 142:
  VAR_20 |= (3 << 2);
  break;
 default:
  return -VAR_2;
 }

 switch (VAR_14->hierarchy) {
 case 136:
 case 135:
  break;
 case 139:
  VAR_20 |= (1 << 10);
  break;
 case 138:
  VAR_20 |= (2 << 10);
  break;
 case 137:
  VAR_20 |= (3 << 10);
  break;
 default:
  return -VAR_2;
 }

 FUNC_9(VAR_13, VAR_9, FUNC_1(VAR_20));
 FUNC_9(VAR_13, VAR_8, FUNC_0(VAR_20));

 if (VAR_13->ops.i2c_gate_ctrl)
  VAR_13->ops.i2c_gate_ctrl(VAR_13, 0);






 if (VAR_15->config.no_tuner) {
  if (VAR_13->ops.tuner_ops.set_params) {
   VAR_13->ops.tuner_ops.set_params(VAR_13);
   if (VAR_13->ops.i2c_gate_ctrl)
    VAR_13->ops.i2c_gate_ctrl(VAR_13, 0);
  }
 } else if (VAR_13->ops.tuner_ops.calc_regs) {
  VAR_13->ops.tuner_ops.calc_regs(VAR_13, VAR_18 + 1, 5);
  VAR_18[1] <<= 1;
  FUNC_10(VAR_13, VAR_18, sizeof(VAR_18));
 }

 FUNC_9(VAR_13, 0x5F, 0x13);


 if (VAR_15->config.no_tuner || VAR_13->ops.tuner_ops.calc_regs == ((void*)0))
  FUNC_9(VAR_13, VAR_3, 0x01);
 else
  FUNC_9(VAR_13, VAR_12, 0x01);

 return 0;
}
