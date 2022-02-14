
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u8 ;
struct tda10071_dev {int fe_status; int delivery_system; unsigned int meas_count; int dvbv3_ber; int post_bit_error; int block_error; int regmap; int warm; struct i2c_client* client; } ;
struct tda10071_cmd {int* args; int len; } ;
struct i2c_client {int dev; } ;
struct TYPE_12__ {TYPE_3__* stat; } ;
struct TYPE_10__ {TYPE_1__* stat; } ;
struct TYPE_16__ {TYPE_7__* stat; } ;
struct TYPE_14__ {TYPE_5__* stat; } ;
struct dtv_frontend_properties {TYPE_4__ block_error; TYPE_2__ post_bit_error; TYPE_8__ cnr; TYPE_6__ strength; } ;
struct dvb_frontend {struct dtv_frontend_properties dtv_property_cache; struct tda10071_dev* demodulator_priv; } ;
typedef enum fe_status { ____Placeholder_fe_status } fe_status ;
struct TYPE_15__ {int svalue; void* scale; } ;
struct TYPE_13__ {int svalue; void* scale; } ;
struct TYPE_11__ {int uvalue; void* scale; } ;
struct TYPE_9__ {int uvalue; void* scale; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int ,int,int*,int) ;
 int FUNC_2 (int ,int,unsigned int*) ;
 int FUNC_3 (struct tda10071_dev*,struct tda10071_cmd*) ;

__attribute__((used)) static int FUNC_4(struct dvb_frontend *VAR_11, enum fe_status *VAR_12)
{
 struct tda10071_dev *VAR_13 = VAR_11->demodulator_priv;
 struct i2c_client *VAR_14 = VAR_13->client;
 struct dtv_frontend_properties *VAR_15 = &VAR_11->dtv_property_cache;
 struct tda10071_cmd VAR_16;
 int VAR_17;
 unsigned int VAR_18;
 u8 VAR_19[8];

 *VAR_12 = 0;

 if (!VAR_13->warm) {
  VAR_17 = 0;
  goto error;
 }

 VAR_17 = FUNC_2(VAR_13->regmap, 0x39, &VAR_18);
 if (VAR_17)
  goto error;


 if (VAR_18 & 0x02)
  *VAR_12 |= VAR_5 | VAR_3;
 if (VAR_18 & 0x04)
  *VAR_12 |= VAR_7;
 if (VAR_18 & 0x08)
  *VAR_12 |= VAR_6 | VAR_4;

 VAR_13->fe_status = *VAR_12;


 if (VAR_13->fe_status & VAR_5) {
  VAR_16.args[0] = VAR_1;
  VAR_16.args[1] = 0;
  VAR_16.len = 2;
  VAR_17 = FUNC_3(VAR_13, &VAR_16);
  if (VAR_17)
   goto error;


  VAR_17 = FUNC_2(VAR_13->regmap, 0x50, &VAR_18);
  if (VAR_17)
   goto error;

  VAR_15->strength.stat[0].scale = VAR_9;
  VAR_15->strength.stat[0].svalue = (int) (VAR_18 - 256) * 1000;
 } else {
  VAR_15->strength.stat[0].scale = VAR_10;
 }


 if (VAR_13->fe_status & VAR_7) {

  VAR_17 = FUNC_1(VAR_13->regmap, 0x3a, VAR_19, 2);
  if (VAR_17)
   goto error;

  VAR_15->cnr.stat[0].scale = VAR_9;
  VAR_15->cnr.stat[0].svalue = (VAR_19[0] << 8 | VAR_19[1] << 0) * 100;
 } else {
  VAR_15->cnr.stat[0].scale = VAR_10;
 }


 if (VAR_13->fe_status & VAR_4) {

  u8 VAR_20, VAR_21, VAR_22;

  switch (VAR_13->delivery_system) {
  case 129:
   VAR_21 = 0x4c;
   VAR_22 = 8;
   VAR_20 = 1;
   break;
  case 128:
   VAR_21 = 0x4d;
   VAR_22 = 4;
   VAR_20 = 0;
   break;
  default:
   VAR_17 = -VAR_2;
   goto error;
  }

  VAR_17 = FUNC_2(VAR_13->regmap, VAR_21, &VAR_18);
  if (VAR_17)
   goto error;

  if (VAR_13->meas_count == VAR_18) {
   FUNC_0(&VAR_14->dev, "meas not ready=%02x\n", VAR_18);
   VAR_17 = 0;
   goto error;
  } else {
   VAR_13->meas_count = VAR_18;
  }

  VAR_16.args[0] = VAR_0;
  VAR_16.args[1] = 0;
  VAR_16.args[2] = VAR_20;
  VAR_16.len = 3;
  VAR_17 = FUNC_3(VAR_13, &VAR_16);
  if (VAR_17)
   goto error;

  VAR_17 = FUNC_1(VAR_13->regmap, VAR_16.len, VAR_19, VAR_22);
  if (VAR_17)
   goto error;

  if (VAR_13->delivery_system == 129) {
   VAR_13->dvbv3_ber = VAR_19[0] << 24 | VAR_19[1] << 16 |
      VAR_19[2] << 8 | VAR_19[3] << 0;
   VAR_13->post_bit_error += VAR_19[0] << 24 | VAR_19[1] << 16 |
            VAR_19[2] << 8 | VAR_19[3] << 0;
   VAR_15->post_bit_error.stat[0].scale = VAR_8;
   VAR_15->post_bit_error.stat[0].uvalue = VAR_13->post_bit_error;
   VAR_13->block_error += VAR_19[4] << 8 | VAR_19[5] << 0;
   VAR_15->block_error.stat[0].scale = VAR_8;
   VAR_15->block_error.stat[0].uvalue = VAR_13->block_error;
  } else {
   VAR_13->dvbv3_ber = VAR_19[0] << 8 | VAR_19[1] << 0;
   VAR_13->post_bit_error += VAR_19[0] << 8 | VAR_19[1] << 0;
   VAR_15->post_bit_error.stat[0].scale = VAR_8;
   VAR_15->post_bit_error.stat[0].uvalue = VAR_13->post_bit_error;
   VAR_15->block_error.stat[0].scale = VAR_10;
  }
 } else {
  VAR_15->post_bit_error.stat[0].scale = VAR_10;
  VAR_15->block_error.stat[0].scale = VAR_10;
 }

 return VAR_17;
error:
 FUNC_0(&VAR_14->dev, "failed=%d\n", VAR_17);
 return VAR_17;
}
