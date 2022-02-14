
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
typedef int u64 ;
struct mn88472_dev {int * regmap; int active; } ;
struct i2c_client {int dev; } ;
struct TYPE_16__ {TYPE_7__* stat; } ;
struct TYPE_14__ {TYPE_5__* stat; } ;
struct TYPE_12__ {TYPE_3__* stat; } ;
struct TYPE_10__ {TYPE_1__* stat; } ;
struct dtv_frontend_properties {int delivery_system; TYPE_8__ block_count; TYPE_6__ block_error; TYPE_4__ cnr; TYPE_2__ strength; } ;
struct dvb_frontend {struct dtv_frontend_properties dtv_property_cache; struct i2c_client* demodulator_priv; } ;
typedef enum fe_status { ____Placeholder_fe_status } fe_status ;
struct TYPE_15__ {unsigned int uvalue; void* scale; } ;
struct TYPE_13__ {unsigned int uvalue; void* scale; } ;
struct TYPE_11__ {int svalue; void* scale; } ;
struct TYPE_9__ {unsigned int uvalue; void* scale; } ;


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
 void* VAR_10 ;



 int FUNC_0 (int *,char*,int,...) ;
 struct mn88472_dev* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (int ,int,int*,int) ;
 int FUNC_4 (int ,int,unsigned int*) ;

__attribute__((used)) static int FUNC_5(struct dvb_frontend *VAR_11, enum fe_status *VAR_12)
{
 struct i2c_client *VAR_13 = VAR_11->demodulator_priv;
 struct mn88472_dev *VAR_14 = FUNC_1(VAR_13);
 struct dtv_frontend_properties *VAR_15 = &VAR_11->dtv_property_cache;
 int VAR_16, VAR_17, VAR_18;
 unsigned int VAR_19, VAR_20, VAR_21;
 u8 VAR_22[5];

 if (!VAR_14->active) {
  VAR_16 = -VAR_0;
  goto err;
 }

 switch (VAR_15->delivery_system) {
 case 129:
  VAR_16 = FUNC_4(VAR_14->regmap[0], 0x7f, &VAR_19);
  if (VAR_16)
   goto err;
  if ((VAR_19 & 0x0f) >= 0x09)
   *VAR_12 = VAR_4 | VAR_2 |
      VAR_6 | VAR_5 | VAR_3;
  else
   *VAR_12 = 0;
  break;
 case 128:
  VAR_16 = FUNC_4(VAR_14->regmap[2], 0x92, &VAR_19);
  if (VAR_16)
   goto err;
  if ((VAR_19 & 0x0f) >= 0x0d)
   *VAR_12 = VAR_4 | VAR_2 |
      VAR_6 | VAR_5 | VAR_3;
  else if ((VAR_19 & 0x0f) >= 0x0a)
   *VAR_12 = VAR_4 | VAR_2 |
      VAR_6;
  else if ((VAR_19 & 0x0f) >= 0x07)
   *VAR_12 = VAR_4 | VAR_2;
  else
   *VAR_12 = 0;
  break;
 case 130:
  VAR_16 = FUNC_4(VAR_14->regmap[1], 0x84, &VAR_19);
  if (VAR_16)
   goto err;
  if ((VAR_19 & 0x0f) >= 0x08)
   *VAR_12 = VAR_4 | VAR_2 |
      VAR_6 | VAR_5 | VAR_3;
  else
   *VAR_12 = 0;
  break;
 default:
  VAR_16 = -VAR_1;
  goto err;
 }


 if (*VAR_12 & VAR_4) {
  for (VAR_17 = 0; VAR_17 < 2; VAR_17++) {
   VAR_16 = FUNC_3(VAR_14->regmap[2], 0x8e + VAR_17,
            &VAR_22[VAR_17], 1);
   if (VAR_16)
    goto err;
  }

  VAR_20 = VAR_22[0] << 8 | VAR_22[1] << 0 | VAR_22[0] >> 2;
  FUNC_0(&VAR_13->dev, "strength=%u\n", VAR_20);

  VAR_15->strength.stat[0].scale = VAR_10;
  VAR_15->strength.stat[0].uvalue = VAR_20;
 } else {
  VAR_15->strength.stat[0].scale = VAR_9;
 }


 if (*VAR_12 & VAR_6 && VAR_15->delivery_system == 129) {

  VAR_16 = FUNC_3(VAR_14->regmap[0], 0x9c, VAR_22, 2);
  if (VAR_16)
   goto err;

  VAR_19 = VAR_22[0] << 8 | VAR_22[1] << 0;
  if (VAR_19) {


   VAR_18 = ((u64)80807124 - FUNC_2(VAR_19) + 3355443)
          * 10000 >> 24;

   FUNC_0(&VAR_13->dev, "cnr=%d value=%u\n", VAR_18, VAR_19);
  } else {
   VAR_18 = 0;
  }

  VAR_15->cnr.stat[0].svalue = VAR_18;
  VAR_15->cnr.stat[0].scale = VAR_8;
 } else if (*VAR_12 & VAR_6 &&
     VAR_15->delivery_system == 128) {

  for (VAR_17 = 0; VAR_17 < 3; VAR_17++) {
   VAR_16 = FUNC_3(VAR_14->regmap[2], 0xbc + VAR_17,
            &VAR_22[VAR_17], 1);
   if (VAR_16)
    goto err;
  }

  VAR_19 = VAR_22[1] << 8 | VAR_22[2] << 0;
  VAR_20 = (VAR_22[0] >> 2) & 0x01;
  if (VAR_19) {
   if (VAR_20) {


    VAR_18 = ((u64)70706234 - FUNC_2(VAR_19)
           - 10066330) * 10000 >> 24;
    FUNC_0(&VAR_13->dev, "cnr=%d value=%u MISO\n",
     VAR_18, VAR_19);
   } else {


    VAR_18 = ((u64)80807124 - FUNC_2(VAR_19)
           + 3355443) * 10000 >> 24;

    FUNC_0(&VAR_13->dev, "cnr=%d value=%u SISO\n",
     VAR_18, VAR_19);
   }
  } else {
   VAR_18 = 0;
  }

  VAR_15->cnr.stat[0].svalue = VAR_18;
  VAR_15->cnr.stat[0].scale = VAR_8;
 } else if (*VAR_12 & VAR_6 &&
     VAR_15->delivery_system == 130) {

  VAR_16 = FUNC_3(VAR_14->regmap[1], 0xa1, VAR_22, 4);
  if (VAR_16)
   goto err;

  VAR_20 = VAR_22[0] << 8 | VAR_22[1] << 0;
  VAR_21 = VAR_22[2] << 8 | VAR_22[3] << 0;
  if (VAR_20 && VAR_21) {


   VAR_18 = ((u64)15151336 + FUNC_2(VAR_20)
          - FUNC_2(VAR_21)) * 10000 >> 24;

   FUNC_0(&VAR_13->dev, "cnr=%d signal=%u noise=%u\n",
    VAR_18, VAR_20, VAR_21);
  } else {
   VAR_18 = 0;
  }

  VAR_15->cnr.stat[0].svalue = VAR_18;
  VAR_15->cnr.stat[0].scale = VAR_8;
 } else {
  VAR_15->cnr.stat[0].scale = VAR_9;
 }


 if (*VAR_12 & VAR_5) {
  VAR_16 = FUNC_3(VAR_14->regmap[0], 0xe1, VAR_22, 4);
  if (VAR_16)
   goto err;

  VAR_20 = VAR_22[0] << 8 | VAR_22[1] << 0;
  VAR_21 = VAR_22[2] << 8 | VAR_22[3] << 0;
  FUNC_0(&VAR_13->dev, "block_error=%u block_count=%u\n",
   VAR_20, VAR_21);

  VAR_15->block_error.stat[0].scale = VAR_7;
  VAR_15->block_error.stat[0].uvalue += VAR_20;
  VAR_15->block_count.stat[0].scale = VAR_7;
  VAR_15->block_count.stat[0].uvalue += VAR_21;
 } else {
  VAR_15->block_error.stat[0].scale = VAR_9;
  VAR_15->block_count.stat[0].scale = VAR_9;
 }

 return 0;
err:
 FUNC_0(&VAR_13->dev, "failed=%d\n", VAR_16);
 return VAR_16;
}
