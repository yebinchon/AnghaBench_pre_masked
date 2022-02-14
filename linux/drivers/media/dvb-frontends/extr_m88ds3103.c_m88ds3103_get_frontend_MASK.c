
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct m88ds3103_dev {int fe_status; int mclk; int regmap; int warm; struct i2c_client* client; } ;
struct i2c_client {int dev; } ;
struct dvb_frontend {struct m88ds3103_dev* demodulator_priv; } ;
struct dtv_frontend_properties {int delivery_system; int symbol_rate; int rolloff; void* inversion; void* modulation; int pilot; void* fec_inner; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (int,int) ;
 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 int VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 void* VAR_18 ;
 void* VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;


 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int ,int,int*,int) ;

__attribute__((used)) static int FUNC_3(struct dvb_frontend *VAR_23,
      struct dtv_frontend_properties *VAR_24)
{
 struct m88ds3103_dev *VAR_25 = VAR_23->demodulator_priv;
 struct i2c_client *VAR_26 = VAR_25->client;
 int VAR_27;
 u8 VAR_28[3];

 FUNC_1(&VAR_26->dev, "\n");

 if (!VAR_25->warm || !(VAR_25->fe_status & VAR_13)) {
  VAR_27 = 0;
  goto err;
 }

 switch (VAR_24->delivery_system) {
 case 129:
  VAR_27 = FUNC_2(VAR_25->regmap, 0xe0, &VAR_28[0], 1);
  if (VAR_27)
   goto err;

  VAR_27 = FUNC_2(VAR_25->regmap, 0xe6, &VAR_28[1], 1);
  if (VAR_27)
   goto err;

  switch ((VAR_28[0] >> 2) & 0x01) {
  case 0:
   VAR_24->inversion = VAR_14;
   break;
  case 1:
   VAR_24->inversion = VAR_15;
   break;
  }

  switch ((VAR_28[1] >> 5) & 0x07) {
  case 0:
   VAR_24->fec_inner = VAR_10;
   break;
  case 1:
   VAR_24->fec_inner = VAR_9;
   break;
  case 2:
   VAR_24->fec_inner = VAR_6;
   break;
  case 3:
   VAR_24->fec_inner = VAR_4;
   break;
  case 4:
   VAR_24->fec_inner = VAR_3;
   break;
  default:
   FUNC_1(&VAR_26->dev, "invalid fec_inner\n");
  }

  VAR_24->modulation = VAR_19;

  break;
 case 128:
  VAR_27 = FUNC_2(VAR_25->regmap, 0x7e, &VAR_28[0], 1);
  if (VAR_27)
   goto err;

  VAR_27 = FUNC_2(VAR_25->regmap, 0x89, &VAR_28[1], 1);
  if (VAR_27)
   goto err;

  VAR_27 = FUNC_2(VAR_25->regmap, 0xf2, &VAR_28[2], 1);
  if (VAR_27)
   goto err;

  switch ((VAR_28[0] >> 0) & 0x0f) {
  case 2:
   VAR_24->fec_inner = VAR_5;
   break;
  case 3:
   VAR_24->fec_inner = VAR_3;
   break;
  case 4:
   VAR_24->fec_inner = VAR_7;
   break;
  case 5:
   VAR_24->fec_inner = VAR_4;
   break;
  case 6:
   VAR_24->fec_inner = VAR_6;
   break;
  case 7:
   VAR_24->fec_inner = VAR_8;
   break;
  case 8:
   VAR_24->fec_inner = VAR_9;
   break;
  case 9:
   VAR_24->fec_inner = VAR_11;
   break;
  case 10:
   VAR_24->fec_inner = VAR_12;
   break;
  default:
   FUNC_1(&VAR_26->dev, "invalid fec_inner\n");
  }

  switch ((VAR_28[0] >> 5) & 0x01) {
  case 0:
   VAR_24->pilot = VAR_16;
   break;
  case 1:
   VAR_24->pilot = VAR_17;
   break;
  }

  switch ((VAR_28[0] >> 6) & 0x07) {
  case 0:
   VAR_24->modulation = VAR_19;
   break;
  case 1:
   VAR_24->modulation = VAR_18;
   break;
  case 2:
   VAR_24->modulation = VAR_0;
   break;
  case 3:
   VAR_24->modulation = VAR_1;
   break;
  default:
   FUNC_1(&VAR_26->dev, "invalid modulation\n");
  }

  switch ((VAR_28[1] >> 7) & 0x01) {
  case 0:
   VAR_24->inversion = VAR_14;
   break;
  case 1:
   VAR_24->inversion = VAR_15;
   break;
  }

  switch ((VAR_28[2] >> 0) & 0x03) {
  case 0:
   VAR_24->rolloff = VAR_22;
   break;
  case 1:
   VAR_24->rolloff = VAR_21;
   break;
  case 2:
   VAR_24->rolloff = VAR_20;
   break;
  default:
   FUNC_1(&VAR_26->dev, "invalid rolloff\n");
  }
  break;
 default:
  FUNC_1(&VAR_26->dev, "invalid delivery_system\n");
  VAR_27 = -VAR_2;
  goto err;
 }

 VAR_27 = FUNC_2(VAR_25->regmap, 0x6d, VAR_28, 2);
 if (VAR_27)
  goto err;

 VAR_24->symbol_rate = FUNC_0((u64)(VAR_28[1] << 8 | VAR_28[0] << 0) * VAR_25->mclk, 0x10000);

 return 0;
err:
 FUNC_1(&VAR_26->dev, "failed=%d\n", VAR_27);
 return VAR_27;
}
