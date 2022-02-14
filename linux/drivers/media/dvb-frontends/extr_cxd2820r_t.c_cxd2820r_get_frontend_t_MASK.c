
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_client {int dev; } ;
struct dvb_frontend {struct cxd2820r_priv* demodulator_priv; } ;
struct dtv_frontend_properties {int inversion; void* code_rate_LP; void* code_rate_HP; int hierarchy; int guard_interval; int transmission_mode; int modulation; } ;
struct cxd2820r_priv {int * regmap; struct i2c_client** client; } ;
typedef int buf ;


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
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int ,int,int*,int) ;
 int FUNC_2 (int ,int,unsigned int*) ;

int FUNC_3(struct dvb_frontend *VAR_20,
       struct dtv_frontend_properties *VAR_21)
{
 struct cxd2820r_priv *VAR_22 = VAR_20->demodulator_priv;
 struct i2c_client *VAR_23 = VAR_22->client[0];
 int VAR_24;
 unsigned int VAR_25;
 u8 VAR_26[2];

 FUNC_0(&VAR_23->dev, "\n");

 VAR_24 = FUNC_1(VAR_22->regmap[0], 0x002f, VAR_26, sizeof(VAR_26));
 if (VAR_24)
  goto error;

 switch ((VAR_26[0] >> 6) & 0x03) {
 case 0:
  VAR_21->modulation = VAR_17;
  break;
 case 1:
  VAR_21->modulation = VAR_15;
  break;
 case 2:
  VAR_21->modulation = VAR_16;
  break;
 }

 switch ((VAR_26[1] >> 1) & 0x03) {
 case 0:
  VAR_21->transmission_mode = VAR_18;
  break;
 case 1:
  VAR_21->transmission_mode = VAR_19;
  break;
 }

 switch ((VAR_26[1] >> 3) & 0x03) {
 case 0:
  VAR_21->guard_interval = VAR_6;
  break;
 case 1:
  VAR_21->guard_interval = VAR_5;
  break;
 case 2:
  VAR_21->guard_interval = VAR_8;
  break;
 case 3:
  VAR_21->guard_interval = VAR_7;
  break;
 }

 switch ((VAR_26[0] >> 3) & 0x07) {
 case 0:
  VAR_21->hierarchy = VAR_12;
  break;
 case 1:
  VAR_21->hierarchy = VAR_9;
  break;
 case 2:
  VAR_21->hierarchy = VAR_10;
  break;
 case 3:
  VAR_21->hierarchy = VAR_11;
  break;
 }

 switch ((VAR_26[0] >> 0) & 0x07) {
 case 0:
  VAR_21->code_rate_HP = VAR_0;
  break;
 case 1:
  VAR_21->code_rate_HP = VAR_1;
  break;
 case 2:
  VAR_21->code_rate_HP = VAR_2;
  break;
 case 3:
  VAR_21->code_rate_HP = VAR_3;
  break;
 case 4:
  VAR_21->code_rate_HP = VAR_4;
  break;
 }

 switch ((VAR_26[1] >> 5) & 0x07) {
 case 0:
  VAR_21->code_rate_LP = VAR_0;
  break;
 case 1:
  VAR_21->code_rate_LP = VAR_1;
  break;
 case 2:
  VAR_21->code_rate_LP = VAR_2;
  break;
 case 3:
  VAR_21->code_rate_LP = VAR_3;
  break;
 case 4:
  VAR_21->code_rate_LP = VAR_4;
  break;
 }

 VAR_24 = FUNC_2(VAR_22->regmap[0], 0x07c6, &VAR_25);
 if (VAR_24)
  goto error;

 switch ((VAR_25 >> 0) & 0x01) {
 case 0:
  VAR_21->inversion = VAR_13;
  break;
 case 1:
  VAR_21->inversion = VAR_14;
  break;
 }

 return VAR_24;
error:
 FUNC_0(&VAR_23->dev, "failed=%d\n", VAR_24);
 return VAR_24;
}
