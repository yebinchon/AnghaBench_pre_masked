
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct tda10071_dev {int delivery_system; int regmap; int warm; struct i2c_client* client; } ;
struct tda10071_cmd {int* args; int len; } ;
struct i2c_client {int dev; } ;
struct dtv_frontend_properties {int delivery_system; int modulation; int frequency; int symbol_rate; int inversion; scalar_t__ fec_inner; int pilot; int rolloff; } ;
struct dvb_frontend {struct dtv_frontend_properties dtv_property_cache; struct tda10071_dev* demodulator_priv; } ;
typedef enum fe_modulation { ____Placeholder_fe_modulation } fe_modulation ;
struct TYPE_7__ {int delivery_system; int modulation; scalar_t__ fec; int val; } ;
struct TYPE_5__ {int frequency_tolerance_hz; } ;
struct TYPE_6__ {TYPE_1__ info; } ;


 int FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;






 int VAR_3 ;






 int VAR_4 ;
 TYPE_3__* VAR_5 ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int ,int,int) ;
 int FUNC_3 (struct tda10071_dev*,struct tda10071_cmd*) ;
 TYPE_2__ VAR_6 ;

__attribute__((used)) static int FUNC_4(struct dvb_frontend *VAR_7)
{
 struct tda10071_dev *VAR_8 = VAR_7->demodulator_priv;
 struct i2c_client *VAR_9 = VAR_8->client;
 struct tda10071_cmd VAR_10;
 struct dtv_frontend_properties *VAR_11 = &VAR_7->dtv_property_cache;
 int VAR_12, VAR_13;
 u8 VAR_14, VAR_15, VAR_16, VAR_17, VAR_18;
 enum fe_modulation VAR_19;

 FUNC_1(&VAR_9->dev,
  "delivery_system=%d modulation=%d frequency=%u symbol_rate=%d inversion=%d pilot=%d rolloff=%d\n",
  VAR_11->delivery_system, VAR_11->modulation, VAR_11->frequency, VAR_11->symbol_rate,
  VAR_11->inversion, VAR_11->pilot, VAR_11->rolloff);

 VAR_8->delivery_system = VAR_4;

 if (!VAR_8->warm) {
  VAR_12 = -VAR_1;
  goto error;
 }

 switch (VAR_11->inversion) {
 case 138:
  VAR_17 = 1;
  break;
 case 137:
  VAR_17 = 0;
  break;
 case 139:


  VAR_17 = 3;
  break;
 default:
  FUNC_1(&VAR_9->dev, "invalid inversion\n");
  VAR_12 = -VAR_2;
  goto error;
 }

 switch (VAR_11->delivery_system) {
 case 129:
  VAR_19 = VAR_3;
  VAR_15 = 0;
  VAR_16 = 2;
  break;
 case 128:
  VAR_19 = VAR_11->modulation;

  switch (VAR_11->rolloff) {
  case 133:
   VAR_15 = 2;
   break;
  case 132:
   VAR_15 = 1;
   break;
  case 131:
   VAR_15 = 0;
   break;
  case 130:
  default:
   FUNC_1(&VAR_9->dev, "invalid rolloff\n");
   VAR_12 = -VAR_2;
   goto error;
  }

  switch (VAR_11->pilot) {
  case 135:
   VAR_16 = 0;
   break;
  case 134:
   VAR_16 = 1;
   break;
  case 136:
   VAR_16 = 2;
   break;
  default:
   FUNC_1(&VAR_9->dev, "invalid pilot\n");
   VAR_12 = -VAR_2;
   goto error;
  }
  break;
 default:
  FUNC_1(&VAR_9->dev, "invalid delivery_system\n");
  VAR_12 = -VAR_2;
  goto error;
 }

 for (VAR_13 = 0, VAR_14 = 0xff; VAR_13 < FUNC_0(VAR_5); VAR_13++) {
  if (VAR_11->delivery_system == VAR_5[VAR_13].delivery_system &&
   VAR_19 == VAR_5[VAR_13].modulation &&
   VAR_11->fec_inner == VAR_5[VAR_13].fec) {
   VAR_14 = VAR_5[VAR_13].val;
   FUNC_1(&VAR_9->dev, "mode found=%02x\n", VAR_14);
   break;
  }
 }

 if (VAR_14 == 0xff) {
  FUNC_1(&VAR_9->dev, "invalid parameter combination\n");
  VAR_12 = -VAR_2;
  goto error;
 }

 if (VAR_11->symbol_rate <= 5000000)
  VAR_18 = 14;
 else
  VAR_18 = 4;

 VAR_12 = FUNC_2(VAR_8->regmap, 0x81, VAR_18);
 if (VAR_12)
  goto error;

 VAR_12 = FUNC_2(VAR_8->regmap, 0xe3, VAR_18);
 if (VAR_12)
  goto error;

 VAR_10.args[0] = VAR_0;
 VAR_10.args[1] = 0;
 VAR_10.args[2] = VAR_14;
 VAR_10.args[3] = (VAR_11->frequency >> 16) & 0xff;
 VAR_10.args[4] = (VAR_11->frequency >> 8) & 0xff;
 VAR_10.args[5] = (VAR_11->frequency >> 0) & 0xff;
 VAR_10.args[6] = ((VAR_11->symbol_rate / 1000) >> 8) & 0xff;
 VAR_10.args[7] = ((VAR_11->symbol_rate / 1000) >> 0) & 0xff;
 VAR_10.args[8] = ((VAR_6.info.frequency_tolerance_hz / 1000) >> 8) & 0xff;
 VAR_10.args[9] = ((VAR_6.info.frequency_tolerance_hz / 1000) >> 0) & 0xff;
 VAR_10.args[10] = VAR_15;
 VAR_10.args[11] = VAR_17;
 VAR_10.args[12] = VAR_16;
 VAR_10.args[13] = 0x00;
 VAR_10.args[14] = 0x00;
 VAR_10.len = 15;
 VAR_12 = FUNC_3(VAR_8, &VAR_10);
 if (VAR_12)
  goto error;

 VAR_8->delivery_system = VAR_11->delivery_system;

 return VAR_12;
error:
 FUNC_1(&VAR_9->dev, "failed=%d\n", VAR_12);
 return VAR_12;
}
