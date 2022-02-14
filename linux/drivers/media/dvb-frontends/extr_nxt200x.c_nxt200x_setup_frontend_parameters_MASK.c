
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct nxt200x_state {int demod_chip; TYPE_1__* config; } ;
struct TYPE_5__ {int (* calc_regs ) (struct dvb_frontend*,int*,int) ;} ;
struct TYPE_6__ {TYPE_2__ tuner_ops; } ;
struct dtv_frontend_properties {int modulation; } ;
struct dvb_frontend {TYPE_3__ ops; struct nxt200x_state* demodulator_priv; struct dtv_frontend_properties dtv_property_cache; } ;
struct TYPE_4__ {int (* set_ts_params ) (struct dvb_frontend*,int) ;} ;


 int VAR_0 ;





 int FUNC_0 (struct nxt200x_state*) ;
 int FUNC_1 (struct nxt200x_state*) ;
 int FUNC_2 (struct nxt200x_state*) ;
 int FUNC_3 (struct nxt200x_state*) ;
 int FUNC_4 (struct nxt200x_state*,int,int*,int) ;
 int FUNC_5 (struct nxt200x_state*,int,int*,int) ;
 int FUNC_6 (struct nxt200x_state*,int,int*,int) ;
 int FUNC_7 (struct nxt200x_state*,int*) ;
 int FUNC_8 (struct dvb_frontend*,int) ;
 int FUNC_9 (struct dvb_frontend*,int) ;
 int FUNC_10 (struct dvb_frontend*,int*,int) ;

__attribute__((used)) static int FUNC_11(struct dvb_frontend *VAR_1)
{
 struct dtv_frontend_properties *VAR_2 = &VAR_1->dtv_property_cache;
 struct nxt200x_state* VAR_3 = VAR_1->demodulator_priv;
 u8 VAR_4[5];


 FUNC_3(VAR_3);

 if (VAR_3->demod_chip == 131) {

  VAR_4[0] = 0x04;
  FUNC_5(VAR_3, 0x14, VAR_4, 1);
  VAR_4[0] = 0x00;
  FUNC_5(VAR_3, 0x17, VAR_4, 1);
 }


 switch (VAR_2->modulation) {
  case 129:
  case 130:


   if (VAR_3->config->set_ts_params)
    VAR_3->config->set_ts_params(VAR_1, 1);
   break;
  case 128:

   if (VAR_3->config->set_ts_params)
    VAR_3->config->set_ts_params(VAR_1, 0);
   break;
  default:
   return -VAR_0;
   break;
 }

 if (VAR_1->ops.tuner_ops.calc_regs) {

  VAR_1->ops.tuner_ops.calc_regs(VAR_1, VAR_4, 5);


  FUNC_7(VAR_3, VAR_4);
 }


 FUNC_1(VAR_3);


 switch (VAR_2->modulation) {
  case 129:
  case 130:
   VAR_4[0] = 0x74;
   break;
  case 128:
   VAR_4[0] = 0x70;
   break;
  default:
   return -VAR_0;
   break;
 }
 FUNC_5(VAR_3, 0x42, VAR_4, 1);


 switch (VAR_3->demod_chip) {
  case 132:
   VAR_4[0] = 0x87;
   break;
  case 131:
   VAR_4[0] = 0x07;
   break;
  default:
   return -VAR_0;
   break;
 }
 FUNC_5(VAR_3, 0x57, VAR_4, 1);


 VAR_4[0] = 0x10;
 VAR_4[1] = 0x00;
 switch (VAR_3->demod_chip) {
  case 132:
   FUNC_6(VAR_3, 0x58, VAR_4, 2);
   break;
  case 131:
   FUNC_5(VAR_3, 0x58, VAR_4, 2);
   break;
  default:
   return -VAR_0;
   break;
 }


 switch (VAR_2->modulation) {
  case 129:
    VAR_4[0] = 0x68;
    break;
  case 130:
    VAR_4[0] = 0x64;
    break;
  case 128:
    VAR_4[0] = 0x60;
    break;
  default:
    return -VAR_0;
    break;
 }
 VAR_4[1] = 0x00;
 switch (VAR_3->demod_chip) {
  case 132:
   FUNC_6(VAR_3, 0x5C, VAR_4, 2);
   break;
  case 131:
   FUNC_5(VAR_3, 0x5C, VAR_4, 2);
   break;
  default:
   return -VAR_0;
   break;
 }


 VAR_4[0] = 0x05;
 FUNC_5(VAR_3, 0x43, VAR_4, 1);

 if (VAR_3->demod_chip == 131) {

  VAR_4[0] = 0x00;
  VAR_4[1] = 0x00;
  FUNC_5(VAR_3, 0x46, VAR_4, 2);
 }


 VAR_4[0] = 0x80;
 VAR_4[1] = 0x00;
 switch (VAR_3->demod_chip) {
  case 132:
   FUNC_6(VAR_3, 0x4B, VAR_4, 2);
   break;
  case 131:
   FUNC_5(VAR_3, 0x4B, VAR_4, 2);
   break;
  default:
   return -VAR_0;
   break;
 }


 VAR_4[0] = 0x00;
 FUNC_5(VAR_3, 0x4D, VAR_4, 1);


 VAR_4[0] = 0x44;
 FUNC_5(VAR_3, 0x55, VAR_4, 1);


 VAR_4[0] = 0x04;
 FUNC_5(VAR_3, 0x41, VAR_4, 1);

 if (VAR_3->demod_chip == 131) {
  FUNC_4(VAR_3, 0x80, VAR_4, 1);
  VAR_4[0] = 0x24;
  FUNC_6(VAR_3, 0x80, VAR_4, 1);


  FUNC_4(VAR_3, 0x08, VAR_4, 1);
  VAR_4[0] = 0x10;
  FUNC_6(VAR_3, 0x08, VAR_4, 1);
  FUNC_4(VAR_3, 0x08, VAR_4, 1);
  VAR_4[0] = 0x00;
  FUNC_6(VAR_3, 0x08, VAR_4, 1);

  FUNC_4(VAR_3, 0x80, VAR_4, 1);
  VAR_4[0] = 0x04;
  FUNC_6(VAR_3, 0x80, VAR_4, 1);
  VAR_4[0] = 0x00;
  FUNC_6(VAR_3, 0x81, VAR_4, 1);
  VAR_4[0] = 0x80; VAR_4[1] = 0x00; VAR_4[2] = 0x00;
  FUNC_6(VAR_3, 0x82, VAR_4, 3);
  FUNC_4(VAR_3, 0x88, VAR_4, 1);
  VAR_4[0] = 0x11;
  FUNC_6(VAR_3, 0x88, VAR_4, 1);
  FUNC_4(VAR_3, 0x80, VAR_4, 1);
  VAR_4[0] = 0x44;
  FUNC_6(VAR_3, 0x80, VAR_4, 1);
 }


 switch (VAR_2->modulation) {
  case 129:
    VAR_4[0] = 0x02;
    break;
  case 130:
    VAR_4[0] = 0x03;
    break;
  case 128:
    VAR_4[0] = 0x00;
    break;
  default:
    return -VAR_0;
    break;
 }
 FUNC_5(VAR_3, 0x30, VAR_4, 1);


 VAR_4[0] = 0x00;
 FUNC_5(VAR_3, 0x41, VAR_4, 1);


 VAR_4[0] = 0x80;
 VAR_4[1] = 0x00;
 switch (VAR_3->demod_chip) {
  case 132:
   FUNC_6(VAR_3, 0x49, VAR_4, 2);
   FUNC_6(VAR_3, 0x4B, VAR_4, 2);
   break;
  case 131:
   FUNC_5(VAR_3, 0x49, VAR_4, 2);
   FUNC_5(VAR_3, 0x4B, VAR_4, 2);
   break;
  default:
   return -VAR_0;
   break;
 }


 VAR_4[0] = 0x04;
 FUNC_5(VAR_3, 0x41, VAR_4, 1);

 FUNC_2(VAR_3);

 if (VAR_3->demod_chip == 131) {
  FUNC_0(VAR_3);


  VAR_4[0] = 0xF0;
  VAR_4[1] = 0x00;
  FUNC_5(VAR_3, 0x5C, VAR_4, 2);
 }




 return 0;
}
