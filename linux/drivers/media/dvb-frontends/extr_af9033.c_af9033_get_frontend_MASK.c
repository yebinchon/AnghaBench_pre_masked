
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_client {int dev; } ;
struct dvb_frontend {struct af9033_dev* demodulator_priv; } ;
struct dtv_frontend_properties {int bandwidth_hz; void* code_rate_LP; void* code_rate_HP; int modulation; int hierarchy; int guard_interval; int transmission_mode; } ;
struct af9033_dev {int regmap; struct i2c_client* client; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int ,int,int*,int) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_19,
          struct dtv_frontend_properties *VAR_20)
{
 struct af9033_dev *VAR_21 = VAR_19->demodulator_priv;
 struct i2c_client *VAR_22 = VAR_21->client;
 int VAR_23;
 u8 VAR_24[8];

 FUNC_0(&VAR_22->dev, "\n");


 VAR_23 = FUNC_1(VAR_21->regmap, 0x80f900, VAR_24, 8);
 if (VAR_23)
  goto err;

 switch ((VAR_24[0] >> 0) & 3) {
 case 0:
  VAR_20->transmission_mode = VAR_17;
  break;
 case 1:
  VAR_20->transmission_mode = VAR_18;
  break;
 }

 switch ((VAR_24[1] >> 0) & 3) {
 case 0:
  VAR_20->guard_interval = VAR_7;
  break;
 case 1:
  VAR_20->guard_interval = VAR_6;
  break;
 case 2:
  VAR_20->guard_interval = VAR_9;
  break;
 case 3:
  VAR_20->guard_interval = VAR_8;
  break;
 }

 switch ((VAR_24[2] >> 0) & 7) {
 case 0:
  VAR_20->hierarchy = VAR_13;
  break;
 case 1:
  VAR_20->hierarchy = VAR_10;
  break;
 case 2:
  VAR_20->hierarchy = VAR_11;
  break;
 case 3:
  VAR_20->hierarchy = VAR_12;
  break;
 }

 switch ((VAR_24[3] >> 0) & 3) {
 case 0:
  VAR_20->modulation = VAR_16;
  break;
 case 1:
  VAR_20->modulation = VAR_14;
  break;
 case 2:
  VAR_20->modulation = VAR_15;
  break;
 }

 switch ((VAR_24[4] >> 0) & 3) {
 case 0:
  VAR_20->bandwidth_hz = 6000000;
  break;
 case 1:
  VAR_20->bandwidth_hz = 7000000;
  break;
 case 2:
  VAR_20->bandwidth_hz = 8000000;
  break;
 }

 switch ((VAR_24[6] >> 0) & 7) {
 case 0:
  VAR_20->code_rate_HP = VAR_0;
  break;
 case 1:
  VAR_20->code_rate_HP = VAR_1;
  break;
 case 2:
  VAR_20->code_rate_HP = VAR_2;
  break;
 case 3:
  VAR_20->code_rate_HP = VAR_3;
  break;
 case 4:
  VAR_20->code_rate_HP = VAR_4;
  break;
 case 5:
  VAR_20->code_rate_HP = VAR_5;
  break;
 }

 switch ((VAR_24[7] >> 0) & 7) {
 case 0:
  VAR_20->code_rate_LP = VAR_0;
  break;
 case 1:
  VAR_20->code_rate_LP = VAR_1;
  break;
 case 2:
  VAR_20->code_rate_LP = VAR_2;
  break;
 case 3:
  VAR_20->code_rate_LP = VAR_3;
  break;
 case 4:
  VAR_20->code_rate_LP = VAR_4;
  break;
 case 5:
  VAR_20->code_rate_LP = VAR_5;
  break;
 }

 return 0;
err:
 FUNC_0(&VAR_22->dev, "failed=%d\n", VAR_23);
 return VAR_23;
}
