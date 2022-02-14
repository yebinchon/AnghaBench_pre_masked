
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_client {int dev; } ;
struct dvb_frontend {struct cxd2820r_priv* demodulator_priv; } ;
struct dtv_frontend_properties {int symbol_rate; int inversion; int modulation; } ;
struct cxd2820r_priv {int * regmap; struct i2c_client** client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int ,int,int*,int) ;
 int FUNC_2 (int ,int,unsigned int*) ;

int FUNC_3(struct dvb_frontend *VAR_7,
       struct dtv_frontend_properties *VAR_8)
{
 struct cxd2820r_priv *VAR_9 = VAR_7->demodulator_priv;
 struct i2c_client *VAR_10 = VAR_9->client[0];
 int VAR_11;
 unsigned int VAR_12;
 u8 VAR_13[2];

 FUNC_0(&VAR_10->dev, "\n");

 VAR_11 = FUNC_1(VAR_9->regmap[1], 0x001a, VAR_13, 2);
 if (VAR_11)
  goto error;

 VAR_8->symbol_rate = 2500 * ((VAR_13[0] & 0x0f) << 8 | VAR_13[1]);

 VAR_11 = FUNC_2(VAR_9->regmap[1], 0x0019, &VAR_12);
 if (VAR_11)
  goto error;

 switch ((VAR_12 >> 0) & 0x07) {
 case 0:
  VAR_8->modulation = VAR_3;
  break;
 case 1:
  VAR_8->modulation = VAR_5;
  break;
 case 2:
  VAR_8->modulation = VAR_6;
  break;
 case 3:
  VAR_8->modulation = VAR_2;
  break;
 case 4:
  VAR_8->modulation = VAR_4;
  break;
 }

 switch ((VAR_12 >> 7) & 0x01) {
 case 0:
  VAR_8->inversion = VAR_0;
  break;
 case 1:
  VAR_8->inversion = VAR_1;
  break;
 }

 return VAR_11;
error:
 FUNC_0(&VAR_10->dev, "failed=%d\n", VAR_11);
 return VAR_11;
}
