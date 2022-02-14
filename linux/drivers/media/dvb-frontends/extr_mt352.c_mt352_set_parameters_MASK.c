
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ no_tuner; } ;
struct mt352_state {TYPE_1__ config; } ;
struct TYPE_5__ {int (* calc_regs ) (struct dvb_frontend*,unsigned char*,int) ;int (* set_params ) (struct dvb_frontend*) ;} ;
struct TYPE_6__ {TYPE_2__ tuner_ops; int (* i2c_gate_ctrl ) (struct dvb_frontend*,int ) ;} ;
struct dtv_frontend_properties {int code_rate_HP; int code_rate_LP; int hierarchy; int modulation; int transmission_mode; int guard_interval; int bandwidth_hz; } ;
struct dvb_frontend {TYPE_3__ ops; struct mt352_state* demodulator_priv; struct dtv_frontend_properties dtv_property_cache; } ;
typedef int buf ;


 int VAR_0 ;
 unsigned char VAR_1 ;



 int FUNC_0 (struct dvb_frontend*,unsigned char*,int) ;
 unsigned char FUNC_1 (unsigned int) ;
 unsigned char FUNC_2 (unsigned int) ;
 int FUNC_3 (struct mt352_state*,unsigned char*) ;
 int FUNC_4 (struct mt352_state*,int ,unsigned char*) ;
 int FUNC_5 (struct dvb_frontend*) ;
 int FUNC_6 (struct dvb_frontend*,int ) ;
 int FUNC_7 (struct dvb_frontend*,unsigned char*,int) ;

__attribute__((used)) static int FUNC_8(struct dvb_frontend *VAR_2)
{
 struct dtv_frontend_properties *VAR_3 = &VAR_2->dtv_property_cache;
 struct mt352_state* VAR_4 = VAR_2->demodulator_priv;
 unsigned char VAR_5[13];
 static unsigned char VAR_6[] = { 0x5d, 0x01 };
 static unsigned char VAR_7[] = { 0x5e, 0x01 };
 unsigned int VAR_8 = 0;

 switch (VAR_3->code_rate_HP) {
  case 150:
   VAR_8 |= (1 << 7);
   break;
  case 149:
   VAR_8 |= (2 << 7);
   break;
  case 148:
   VAR_8 |= (3 << 7);
   break;
  case 147:
   VAR_8 |= (4 << 7);
   break;
  case 151:
  case 146:
   break;
  default:
   return -VAR_0;
 }

 switch (VAR_3->code_rate_LP) {
  case 150:
   VAR_8 |= (1 << 4);
   break;
  case 149:
   VAR_8 |= (2 << 4);
   break;
  case 148:
   VAR_8 |= (3 << 4);
   break;
  case 147:
   VAR_8 |= (4 << 4);
   break;
  case 151:
  case 146:
   break;
  case 145:
   if (VAR_3->hierarchy == 136 ||
       VAR_3->hierarchy == 135)
    break;

  default:
   return -VAR_0;
 }

 switch (VAR_3->modulation) {
  case 131:
   break;
  case 132:
  case 134:
   VAR_8 |= (1 << 13);
   break;
  case 133:
   VAR_8 |= (2 << 13);
   break;
  default:
   return -VAR_0;
 }

 switch (VAR_3->transmission_mode) {
  case 130:
  case 128:
   break;
  case 129:
   VAR_8 |= (1 << 0);
   break;
  default:
   return -VAR_0;
 }

 switch (VAR_3->guard_interval) {
  case 143:
  case 140:
   break;
  case 144:
   VAR_8 |= (1 << 2);
   break;
  case 141:
   VAR_8 |= (2 << 2);
   break;
  case 142:
   VAR_8 |= (3 << 2);
   break;
  default:
   return -VAR_0;
 }

 switch (VAR_3->hierarchy) {
  case 136:
  case 135:
   break;
  case 139:
   VAR_8 |= (1 << 10);
   break;
  case 138:
   VAR_8 |= (2 << 10);
   break;
  case 137:
   VAR_8 |= (3 << 10);
   break;
  default:
   return -VAR_0;
 }


 VAR_5[0] = VAR_1;

 VAR_5[1] = FUNC_2(VAR_8);
 VAR_5[2] = FUNC_1(VAR_8);

 VAR_5[3] = 0x50;


 FUNC_4(VAR_4, VAR_3->bandwidth_hz, VAR_5+4);
 FUNC_3(VAR_4, VAR_5+6);

 if (VAR_4->config.no_tuner) {
  if (VAR_2->ops.tuner_ops.set_params) {
   VAR_2->ops.tuner_ops.set_params(VAR_2);
   if (VAR_2->ops.i2c_gate_ctrl)
    VAR_2->ops.i2c_gate_ctrl(VAR_2, 0);
  }

  FUNC_0(VAR_2, VAR_5, 8);
  FUNC_0(VAR_2, VAR_7, 2);
 } else {
  if (VAR_2->ops.tuner_ops.calc_regs) {
   VAR_2->ops.tuner_ops.calc_regs(VAR_2, VAR_5+8, 5);
   VAR_5[8] <<= 1;
   FUNC_0(VAR_2, VAR_5, sizeof(VAR_5));
   FUNC_0(VAR_2, VAR_6, 2);
  }
 }

 return 0;
}
