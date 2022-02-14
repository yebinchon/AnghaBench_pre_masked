
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_client {int dev; } ;
struct dvb_frontend {struct af9013_state* demodulator_priv; } ;
struct dtv_frontend_properties {int bandwidth_hz; void* code_rate_LP; void* code_rate_HP; int hierarchy; int guard_interval; int transmission_mode; int modulation; } ;
struct af9013_state {int regmap; struct i2c_client* client; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
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
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int ,int,int*,int) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_18,
          struct dtv_frontend_properties *VAR_19)
{
 struct af9013_state *VAR_20 = VAR_18->demodulator_priv;
 struct i2c_client *VAR_21 = VAR_20->client;
 int VAR_22;
 u8 VAR_23[3];

 FUNC_0(&VAR_21->dev, "\n");

 VAR_22 = FUNC_1(VAR_20->regmap, 0xd3c0, VAR_23, 3);
 if (VAR_22)
  goto err;

 switch ((VAR_23[1] >> 6) & 3) {
 case 0:
  VAR_19->modulation = VAR_15;
  break;
 case 1:
  VAR_19->modulation = VAR_13;
  break;
 case 2:
  VAR_19->modulation = VAR_14;
  break;
 }

 switch ((VAR_23[0] >> 0) & 3) {
 case 0:
  VAR_19->transmission_mode = VAR_16;
  break;
 case 1:
  VAR_19->transmission_mode = VAR_17;
 }

 switch ((VAR_23[0] >> 2) & 3) {
 case 0:
  VAR_19->guard_interval = VAR_6;
  break;
 case 1:
  VAR_19->guard_interval = VAR_5;
  break;
 case 2:
  VAR_19->guard_interval = VAR_8;
  break;
 case 3:
  VAR_19->guard_interval = VAR_7;
  break;
 }

 switch ((VAR_23[0] >> 4) & 7) {
 case 0:
  VAR_19->hierarchy = VAR_12;
  break;
 case 1:
  VAR_19->hierarchy = VAR_9;
  break;
 case 2:
  VAR_19->hierarchy = VAR_10;
  break;
 case 3:
  VAR_19->hierarchy = VAR_11;
  break;
 }

 switch ((VAR_23[2] >> 0) & 7) {
 case 0:
  VAR_19->code_rate_HP = VAR_0;
  break;
 case 1:
  VAR_19->code_rate_HP = VAR_1;
  break;
 case 2:
  VAR_19->code_rate_HP = VAR_2;
  break;
 case 3:
  VAR_19->code_rate_HP = VAR_3;
  break;
 case 4:
  VAR_19->code_rate_HP = VAR_4;
  break;
 }

 switch ((VAR_23[2] >> 3) & 7) {
 case 0:
  VAR_19->code_rate_LP = VAR_0;
  break;
 case 1:
  VAR_19->code_rate_LP = VAR_1;
  break;
 case 2:
  VAR_19->code_rate_LP = VAR_2;
  break;
 case 3:
  VAR_19->code_rate_LP = VAR_3;
  break;
 case 4:
  VAR_19->code_rate_LP = VAR_4;
  break;
 }

 switch ((VAR_23[1] >> 2) & 3) {
 case 0:
  VAR_19->bandwidth_hz = 6000000;
  break;
 case 1:
  VAR_19->bandwidth_hz = 7000000;
  break;
 case 2:
  VAR_19->bandwidth_hz = 8000000;
  break;
 }

 return 0;
err:
 FUNC_0(&VAR_21->dev, "failed %d\n", VAR_22);
 return VAR_22;
}
