
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct m88ds3103_dev {int fe_status; unsigned int post_bit_error; unsigned int post_bit_count; unsigned int dvbv3_ber; int regmap; int warm; struct i2c_client* client; } ;
struct i2c_client {int dev; } ;
struct TYPE_10__ {TYPE_3__* stat; } ;
struct TYPE_8__ {TYPE_1__* stat; } ;
struct TYPE_11__ {TYPE_6__* stat; } ;
struct dtv_frontend_properties {int delivery_system; TYPE_4__ post_bit_count; TYPE_2__ post_bit_error; TYPE_5__ cnr; } ;
struct dvb_frontend {struct dtv_frontend_properties dtv_property_cache; struct m88ds3103_dev* demodulator_priv; } ;
typedef enum fe_status { ____Placeholder_fe_status } fe_status ;
struct TYPE_12__ {unsigned int svalue; void* scale; } ;
struct TYPE_9__ {unsigned int uvalue; void* scale; } ;
struct TYPE_7__ {unsigned int uvalue; void* scale; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 int VAR_10 ;


 int FUNC_1 (int *,char*,...) ;
 unsigned int FUNC_2 (int,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,int,int*,int) ;
 int FUNC_6 (int ,int,unsigned int*) ;
 int FUNC_7 (int ,int,int) ;

__attribute__((used)) static int FUNC_8(struct dvb_frontend *VAR_11,
     enum fe_status *VAR_12)
{
 struct m88ds3103_dev *VAR_13 = VAR_11->demodulator_priv;
 struct i2c_client *VAR_14 = VAR_13->client;
 struct dtv_frontend_properties *VAR_15 = &VAR_11->dtv_property_cache;
 int VAR_16, VAR_17, VAR_18;
 unsigned int VAR_19;
 u8 VAR_20[3];

 *VAR_12 = 0;

 if (!VAR_13->warm) {
  VAR_16 = -VAR_0;
  goto err;
 }

 switch (VAR_15->delivery_system) {
 case 129:
  VAR_16 = FUNC_6(VAR_13->regmap, 0xd1, &VAR_19);
  if (VAR_16)
   goto err;

  if ((VAR_19 & 0x07) == 0x07)
   *VAR_12 = VAR_4 | VAR_2 |
     VAR_6 | VAR_5 |
     VAR_3;
  break;
 case 128:
  VAR_16 = FUNC_6(VAR_13->regmap, 0x0d, &VAR_19);
  if (VAR_16)
   goto err;

  if ((VAR_19 & 0x8f) == 0x8f)
   *VAR_12 = VAR_4 | VAR_2 |
     VAR_6 | VAR_5 |
     VAR_3;
  break;
 default:
  FUNC_1(&VAR_14->dev, "invalid delivery_system\n");
  VAR_16 = -VAR_1;
  goto err;
 }

 VAR_13->fe_status = *VAR_12;
 FUNC_1(&VAR_14->dev, "lock=%02x status=%02x\n", VAR_19, *VAR_12);


 if (VAR_13->fe_status & VAR_6) {
  unsigned int VAR_21, VAR_22, VAR_23, VAR_24, VAR_25;

  VAR_21 = 0;



  switch (VAR_15->delivery_system) {
  case 129:
   VAR_18 = 0;

   for (VAR_17 = 0; VAR_17 < 3; VAR_17++) {
    VAR_16 = FUNC_6(VAR_13->regmap, 0xff, &VAR_19);
    if (VAR_16)
     goto err;

    VAR_18 += VAR_19;
   }



   VAR_18 = FUNC_0(VAR_18, 8 * 3);
   if (VAR_18)
    VAR_21 = FUNC_2((u64) 10000 * FUNC_4(VAR_18), FUNC_4(10));
   break;
  case 128:
   VAR_24 = 0;
   VAR_25 = 0;

   for (VAR_17 = 0; VAR_17 < 3; VAR_17++) {
    VAR_16 = FUNC_5(VAR_13->regmap, 0x8c, VAR_20, 3);
    if (VAR_16)
     goto err;

    VAR_22 = VAR_20[1] << 6;
    VAR_22 |= VAR_20[0] & 0x3f;
    VAR_22 >>= 2;
    VAR_23 = VAR_20[2] * VAR_20[2];
    VAR_23 >>= 1;

    VAR_24 += VAR_22;
    VAR_25 += VAR_23;
   }

   VAR_22 = VAR_24 / 3;
   VAR_23 = VAR_25 / 3;


   if (VAR_23 > VAR_22) {
    VAR_18 = VAR_23 / VAR_22;
    VAR_21 = FUNC_2((u64) 10000 * FUNC_3(VAR_18), (1 << 24));
   }
   break;
  default:
   FUNC_1(&VAR_14->dev, "invalid delivery_system\n");
   VAR_16 = -VAR_1;
   goto err;
  }

  if (VAR_21) {
   VAR_15->cnr.stat[0].scale = VAR_8;
   VAR_15->cnr.stat[0].svalue = VAR_21;
  } else {
   VAR_15->cnr.stat[0].scale = VAR_9;
  }
 } else {
  VAR_15->cnr.stat[0].scale = VAR_9;
 }


 if (VAR_13->fe_status & VAR_3) {
  unsigned int VAR_26, VAR_27, VAR_28;

  switch (VAR_15->delivery_system) {
  case 129:
   VAR_16 = FUNC_7(VAR_13->regmap, 0xf9, 0x04);
   if (VAR_16)
    goto err;

   VAR_16 = FUNC_6(VAR_13->regmap, 0xf8, &VAR_26);
   if (VAR_16)
    goto err;


   if (!(VAR_26 & 0x10)) {
    VAR_16 = FUNC_5(VAR_13->regmap, 0xf6, VAR_20, 2);
    if (VAR_16)
     goto err;

    VAR_27 = VAR_20[1] << 8 | VAR_20[0] << 0;
    VAR_28 = 0x800000;
    VAR_13->post_bit_error += VAR_27;
    VAR_13->post_bit_count += VAR_28;
    VAR_13->dvbv3_ber = VAR_27;


    VAR_26 |= 0x10;
    VAR_16 = FUNC_7(VAR_13->regmap, 0xf8, VAR_26);
    if (VAR_16)
     goto err;
   }
   break;
  case 128:
   VAR_16 = FUNC_5(VAR_13->regmap, 0xd5, VAR_20, 3);
   if (VAR_16)
    goto err;

   VAR_26 = VAR_20[2] << 16 | VAR_20[1] << 8 | VAR_20[0] << 0;


   if (VAR_26 > 4000) {
    VAR_16 = FUNC_5(VAR_13->regmap, 0xf7, VAR_20, 2);
    if (VAR_16)
     goto err;

    VAR_27 = VAR_20[1] << 8 | VAR_20[0] << 0;
    VAR_28 = 32 * VAR_26;
    VAR_13->post_bit_error += VAR_27;
    VAR_13->post_bit_count += VAR_28;
    VAR_13->dvbv3_ber = VAR_27;


    VAR_16 = FUNC_7(VAR_13->regmap, 0xd1, 0x01);
    if (VAR_16)
     goto err;

    VAR_16 = FUNC_7(VAR_13->regmap, 0xf9, 0x01);
    if (VAR_16)
     goto err;

    VAR_16 = FUNC_7(VAR_13->regmap, 0xf9, 0x00);
    if (VAR_16)
     goto err;

    VAR_16 = FUNC_7(VAR_13->regmap, 0xd1, 0x00);
    if (VAR_16)
     goto err;
   }
   break;
  default:
   FUNC_1(&VAR_14->dev, "invalid delivery_system\n");
   VAR_16 = -VAR_1;
   goto err;
  }

  VAR_15->post_bit_error.stat[0].scale = VAR_7;
  VAR_15->post_bit_error.stat[0].uvalue = VAR_13->post_bit_error;
  VAR_15->post_bit_count.stat[0].scale = VAR_7;
  VAR_15->post_bit_count.stat[0].uvalue = VAR_13->post_bit_count;
 } else {
  VAR_15->post_bit_error.stat[0].scale = VAR_9;
  VAR_15->post_bit_count.stat[0].scale = VAR_9;
 }

 return 0;
err:
 FUNC_1(&VAR_14->dev, "failed=%d\n", VAR_16);
 return VAR_16;
}
