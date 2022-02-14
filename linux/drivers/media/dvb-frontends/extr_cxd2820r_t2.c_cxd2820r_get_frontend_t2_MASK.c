
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_client {int dev; } ;
struct dvb_frontend {struct cxd2820r_priv* demodulator_priv; } ;
struct dtv_frontend_properties {int inversion; int modulation; int fec_inner; int guard_interval; int transmission_mode; } ;
struct cxd2820r_priv {int * regmap; struct i2c_client** client; } ;


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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int ,int,int*,int) ;
 int FUNC_2 (int ,int,unsigned int*) ;

int FUNC_3(struct dvb_frontend *VAR_25,
        struct dtv_frontend_properties *VAR_26)
{
 struct cxd2820r_priv *VAR_27 = VAR_25->demodulator_priv;
 struct i2c_client *VAR_28 = VAR_27->client[0];
 int VAR_29;
 unsigned int VAR_30;
 u8 VAR_31[2];

 FUNC_0(&VAR_28->dev, "\n");

 VAR_29 = FUNC_1(VAR_27->regmap[0], 0x205c, VAR_31, 2);
 if (VAR_29)
  goto error;

 switch ((VAR_31[0] >> 0) & 0x07) {
 case 0:
  VAR_26->transmission_mode = VAR_21;
  break;
 case 1:
  VAR_26->transmission_mode = VAR_24;
  break;
 case 2:
  VAR_26->transmission_mode = VAR_23;
  break;
 case 3:
  VAR_26->transmission_mode = VAR_20;
  break;
 case 4:
  VAR_26->transmission_mode = VAR_19;
  break;
 case 5:
  VAR_26->transmission_mode = VAR_22;
  break;
 }

 switch ((VAR_31[1] >> 4) & 0x07) {
 case 0:
  VAR_26->guard_interval = VAR_10;
  break;
 case 1:
  VAR_26->guard_interval = VAR_9;
  break;
 case 2:
  VAR_26->guard_interval = VAR_12;
  break;
 case 3:
  VAR_26->guard_interval = VAR_11;
  break;
 case 4:
  VAR_26->guard_interval = VAR_8;
  break;
 case 5:
  VAR_26->guard_interval = VAR_6;
  break;
 case 6:
  VAR_26->guard_interval = VAR_7;
  break;
 }

 VAR_29 = FUNC_1(VAR_27->regmap[0], 0x225b, VAR_31, 2);
 if (VAR_29)
  goto error;

 switch ((VAR_31[0] >> 0) & 0x07) {
 case 0:
  VAR_26->fec_inner = VAR_0;
  break;
 case 1:
  VAR_26->fec_inner = VAR_3;
  break;
 case 2:
  VAR_26->fec_inner = VAR_1;
  break;
 case 3:
  VAR_26->fec_inner = VAR_2;
  break;
 case 4:
  VAR_26->fec_inner = VAR_4;
  break;
 case 5:
  VAR_26->fec_inner = VAR_5;
  break;
 }

 switch ((VAR_31[1] >> 0) & 0x07) {
 case 0:
  VAR_26->modulation = VAR_18;
  break;
 case 1:
  VAR_26->modulation = VAR_15;
  break;
 case 2:
  VAR_26->modulation = VAR_17;
  break;
 case 3:
  VAR_26->modulation = VAR_16;
  break;
 }

 VAR_29 = FUNC_2(VAR_27->regmap[0], 0x20b5, &VAR_30);
 if (VAR_29)
  goto error;

 switch ((VAR_30 >> 4) & 0x01) {
 case 0:
  VAR_26->inversion = VAR_13;
  break;
 case 1:
  VAR_26->inversion = VAR_14;
  break;
 }

 return VAR_29;
error:
 FUNC_0(&VAR_28->dev, "failed=%d\n", VAR_29);
 return VAR_29;
}
