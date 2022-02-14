
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct stv0297_state {int base_freq; TYPE_1__* config; } ;
struct TYPE_5__ {int (* set_params ) (struct dvb_frontend*) ;} ;
struct TYPE_6__ {int (* i2c_gate_ctrl ) (struct dvb_frontend*,int ) ;TYPE_2__ tuner_ops; } ;
struct dtv_frontend_properties {int modulation; int inversion; int symbol_rate; int frequency; } ;
struct dvb_frontend {TYPE_3__ ops; struct stv0297_state* demodulator_priv; struct dtv_frontend_properties dtv_property_cache; } ;
typedef enum fe_spectral_inversion { ____Placeholder_fe_spectral_inversion } fe_spectral_inversion ;
struct TYPE_4__ {scalar_t__ invert; } ;


 int VAR_0 ;







 unsigned long VAR_1 ;
 unsigned long FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct dvb_frontend*) ;
 int FUNC_3 (struct dvb_frontend*,int ) ;
 int FUNC_4 (struct dvb_frontend*) ;
 int FUNC_5 (struct stv0297_state*,int) ;
 int FUNC_6 (struct stv0297_state*,int) ;
 int FUNC_7 (struct stv0297_state*,int) ;
 int FUNC_8 (struct stv0297_state*,int) ;
 int FUNC_9 (struct stv0297_state*,int) ;
 int FUNC_10 (struct stv0297_state*,int,int) ;
 int FUNC_11 (struct stv0297_state*,int) ;
 int FUNC_12 (struct stv0297_state*,int,int) ;
 int FUNC_13 (struct stv0297_state*,int,int,int) ;
 scalar_t__ FUNC_14 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_15 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_16(struct dvb_frontend *VAR_2)
{
 struct dtv_frontend_properties *VAR_3 = &VAR_2->dtv_property_cache;
 struct stv0297_state *VAR_4 = VAR_2->demodulator_priv;
 int VAR_5;
 int VAR_6;
 int VAR_7;
 int VAR_8;
 int VAR_9;
 int VAR_10;
 unsigned long VAR_11;
 enum fe_spectral_inversion VAR_12;

 switch (VAR_3->modulation) {
 case 131:
 case 129:
 case 128:
  VAR_8 = 100;
  VAR_9 = 1000;
  break;

 case 132:
 case 130:
  VAR_8 = 200;
  VAR_9 = 500;
  break;

 default:
  return -VAR_0;
 }


 VAR_12 = VAR_3->inversion;
 if (VAR_4->config->invert)
  VAR_12 = (VAR_12 == 133) ? 134 : 133;
 VAR_10 = -330;
 switch (VAR_12) {
 case 134:
  break;

 case 133:
  VAR_9 = -VAR_9;
  VAR_10 = -VAR_10;
  break;

 default:
  return -VAR_0;
 }

 FUNC_4(VAR_2);
 if (VAR_2->ops.tuner_ops.set_params) {
  VAR_2->ops.tuner_ops.set_params(VAR_2);
  if (VAR_2->ops.i2c_gate_ctrl) VAR_2->ops.i2c_gate_ctrl(VAR_2, 0);
 }


 FUNC_12(VAR_4, 0x82, 0x0);


 FUNC_7(VAR_4, 7250);


 FUNC_13(VAR_4, 0x43, 0x10, 0x00);
 FUNC_12(VAR_4, 0x41, 0x00);
 FUNC_13(VAR_4, 0x42, 0x03, 0x01);
 FUNC_13(VAR_4, 0x36, 0x60, 0x00);
 FUNC_13(VAR_4, 0x36, 0x18, 0x00);
 FUNC_13(VAR_4, 0x71, 0x80, 0x80);
 FUNC_12(VAR_4, 0x72, 0x00);
 FUNC_12(VAR_4, 0x73, 0x00);
 FUNC_13(VAR_4, 0x74, 0x0F, 0x00);
 FUNC_13(VAR_4, 0x43, 0x08, 0x00);
 FUNC_13(VAR_4, 0x71, 0x80, 0x00);


 FUNC_13(VAR_4, 0x5a, 0x20, 0x20);
 FUNC_13(VAR_4, 0x5b, 0x02, 0x02);
 FUNC_13(VAR_4, 0x5b, 0x02, 0x00);
 FUNC_13(VAR_4, 0x5b, 0x01, 0x00);
 FUNC_13(VAR_4, 0x5a, 0x40, 0x40);


 FUNC_13(VAR_4, 0x6a, 0x01, 0x00);


 FUNC_13(VAR_4, 0x81, 0x01, 0x01);
 FUNC_13(VAR_4, 0x81, 0x01, 0x00);


 FUNC_13(VAR_4, 0x83, 0x20, 0x20);
 FUNC_13(VAR_4, 0x83, 0x20, 0x00);


 VAR_5 = FUNC_5(VAR_4, 0x00) & 0xf;
 VAR_6 = FUNC_5(VAR_4, 0x01) >> 4;
 VAR_7 = FUNC_5(VAR_4, 0x01) & 0xf;
 FUNC_13(VAR_4, 0x84, 0x01, 0x01);
 FUNC_13(VAR_4, 0x84, 0x01, 0x00);
 FUNC_13(VAR_4, 0x00, 0x0f, VAR_5);
 FUNC_13(VAR_4, 0x01, 0xf0, VAR_6 << 4);
 FUNC_13(VAR_4, 0x01, 0x0f, VAR_7);


 FUNC_13(VAR_4, 0x87, 0x80, 0x00);


 FUNC_12(VAR_4, 0x63, 0x00);
 FUNC_12(VAR_4, 0x64, 0x00);
 FUNC_12(VAR_4, 0x65, 0x00);
 FUNC_12(VAR_4, 0x66, 0x00);
 FUNC_12(VAR_4, 0x67, 0x00);
 FUNC_12(VAR_4, 0x68, 0x00);
 FUNC_13(VAR_4, 0x69, 0x0f, 0x00);


 FUNC_9(VAR_4, VAR_3->modulation);
 FUNC_11(VAR_4, VAR_3->symbol_rate / 1000);
 FUNC_10(VAR_4, VAR_9, VAR_3->symbol_rate / 1000);
 FUNC_6(VAR_4, VAR_10);
 FUNC_8(VAR_4, VAR_12);



 if (VAR_3->modulation == 132 ||
  VAR_3->modulation == 130)
  FUNC_13(VAR_4, 0x88, 0x08, 0x00);
 else
  FUNC_13(VAR_4, 0x88, 0x08, 0x08);

 FUNC_13(VAR_4, 0x5a, 0x20, 0x00);
 FUNC_13(VAR_4, 0x6a, 0x01, 0x01);
 FUNC_13(VAR_4, 0x43, 0x40, 0x40);
 FUNC_13(VAR_4, 0x5b, 0x30, 0x00);
 FUNC_13(VAR_4, 0x03, 0x0c, 0x0c);
 FUNC_13(VAR_4, 0x03, 0x03, 0x03);
 FUNC_13(VAR_4, 0x43, 0x10, 0x10);


 VAR_11 = VAR_1 + FUNC_0(2000);
 while (FUNC_15(VAR_1, VAR_11)) {
  FUNC_1(10);
  if (FUNC_5(VAR_4, 0x43) & 0x08)
   break;
 }
 if (FUNC_14(VAR_1, VAR_11)) {
  goto timeout;
 }
 FUNC_1(20);


 VAR_11 = VAR_1 + FUNC_0(500);
 while (FUNC_15(VAR_1, VAR_11)) {
  FUNC_1(10);

  if (FUNC_5(VAR_4, 0x82) & 0x04) {
   break;
  }
 }
 if (FUNC_14(VAR_1, VAR_11)) {
  goto timeout;
 }


 VAR_11 = VAR_1 + FUNC_0(VAR_8);
 while (FUNC_15(VAR_1, VAR_11)) {
  FUNC_1(10);

  if (FUNC_5(VAR_4, 0x82) & 0x08) {
   break;
  }
 }
 if (FUNC_14(VAR_1, VAR_11)) {
  goto timeout;
 }


 FUNC_13(VAR_4, 0x6a, 1, 0);
 FUNC_13(VAR_4, 0x88, 8, 0);


 VAR_11 = VAR_1 + FUNC_0(20);
 while (FUNC_15(VAR_1, VAR_11)) {
  FUNC_1(10);

  if (FUNC_5(VAR_4, 0xDF) & 0x80) {
   break;
  }
 }
 if (FUNC_14(VAR_1, VAR_11)) {
  goto timeout;
 }
 FUNC_1(100);


 if (!(FUNC_5(VAR_4, 0xDF) & 0x80)) {
  goto timeout;
 }


 FUNC_13(VAR_4, 0x5a, 0x40, 0x00);
 VAR_4->base_freq = VAR_3->frequency;
 return 0;

timeout:
 FUNC_13(VAR_4, 0x6a, 0x01, 0x00);
 return 0;
}
