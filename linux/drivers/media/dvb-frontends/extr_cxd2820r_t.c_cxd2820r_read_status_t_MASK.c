
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
struct i2c_client {int dev; } ;
struct TYPE_8__ {int len; TYPE_1__* stat; } ;
struct TYPE_12__ {int len; TYPE_5__* stat; } ;
struct TYPE_10__ {int len; TYPE_3__* stat; } ;
struct dtv_frontend_properties {TYPE_2__ post_bit_error; TYPE_6__ cnr; TYPE_4__ strength; } ;
struct dvb_frontend {struct dtv_frontend_properties dtv_property_cache; struct cxd2820r_priv* demodulator_priv; } ;
struct cxd2820r_priv {int ber_running; unsigned int post_bit_error; int * regmap; struct i2c_client** client; } ;
typedef enum fe_status { ____Placeholder_fe_status } fe_status ;
struct TYPE_11__ {unsigned int svalue; void* scale; } ;
struct TYPE_9__ {unsigned int uvalue; void* scale; } ;
struct TYPE_7__ {unsigned int uvalue; void* scale; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 int FUNC_0 (int *,char*,int,...) ;
 unsigned int FUNC_1 (int,int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ,int,int*,int) ;
 int FUNC_4 (int ,int,int) ;

int FUNC_5(struct dvb_frontend *VAR_9, enum fe_status *VAR_10)
{
 struct cxd2820r_priv *VAR_11 = VAR_9->demodulator_priv;
 struct i2c_client *VAR_12 = VAR_11->client[0];
 struct dtv_frontend_properties *VAR_13 = &VAR_9->dtv_property_cache;
 int VAR_14;
 unsigned int VAR_15, VAR_16, VAR_17;
 u8 VAR_18[3];


 VAR_14 = FUNC_3(VAR_11->regmap[0], 0x0010, &VAR_18[0], 1);
 if (VAR_14)
  goto error;
 VAR_14 = FUNC_3(VAR_11->regmap[0], 0x0073, &VAR_18[1], 1);
 if (VAR_14)
  goto error;

 VAR_16 = (VAR_18[0] >> 0) & 0x07;
 VAR_17 = (VAR_18[1] >> 3) & 0x01;

 if (VAR_16 == 6 && VAR_17 == 1) {
  *VAR_10 = VAR_2 | VAR_0 |
     VAR_4 | VAR_3 | VAR_1;
 } else if (VAR_16 == 6 || VAR_17 == 1) {
  *VAR_10 = VAR_2 | VAR_0 |
     VAR_4 | VAR_3;
 } else {
  *VAR_10 = 0;
 }

 FUNC_0(&VAR_12->dev, "status=%02x raw=%*ph sync=%u ts=%u\n",
  *VAR_10, 2, VAR_18, VAR_16, VAR_17);


 if (*VAR_10 & VAR_2) {
  unsigned int VAR_19;

  VAR_14 = FUNC_3(VAR_11->regmap[0], 0x0026, VAR_18, 2);
  if (VAR_14)
   goto error;

  VAR_15 = VAR_18[0] << 8 | VAR_18[1] << 0;
  VAR_15 = ~VAR_15 & 0x0fff;

  VAR_19 = VAR_15 << 4 | VAR_15 >> 8;

  VAR_13->strength.len = 1;
  VAR_13->strength.stat[0].scale = VAR_8;
  VAR_13->strength.stat[0].uvalue = VAR_19;
 } else {
  VAR_13->strength.len = 1;
  VAR_13->strength.stat[0].scale = VAR_7;
 }


 if (*VAR_10 & VAR_4) {
  unsigned int VAR_20;

  VAR_14 = FUNC_3(VAR_11->regmap[0], 0x002c, VAR_18, 2);
  if (VAR_14)
   goto error;

  VAR_15 = VAR_18[0] << 8 | VAR_18[1] << 0;
  if (VAR_15)
   VAR_20 = FUNC_1((u64)(FUNC_2(VAR_15)
          - FUNC_2(32000 - VAR_15) + 55532585)
          * 10000, (1 << 24));
  else
   VAR_20 = 0;

  VAR_13->cnr.len = 1;
  VAR_13->cnr.stat[0].scale = VAR_6;
  VAR_13->cnr.stat[0].svalue = VAR_20;
 } else {
  VAR_13->cnr.len = 1;
  VAR_13->cnr.stat[0].scale = VAR_7;
 }


 if (*VAR_10 & VAR_3) {
  unsigned int VAR_21;
  bool VAR_22;

  if (VAR_11->ber_running) {
   VAR_14 = FUNC_3(VAR_11->regmap[0], 0x0076, VAR_18, 3);
   if (VAR_14)
    goto error;

   if ((VAR_18[2] >> 7) & 0x01) {
    VAR_21 = VAR_18[2] << 16 | VAR_18[1] << 8 |
       VAR_18[0] << 0;
    VAR_21 &= 0x0fffff;
    VAR_22 = 1;
   } else {
    VAR_21 = 0;
    VAR_22 = 0;
   }
  } else {
   VAR_21 = 0;
   VAR_22 = 1;
  }

  if (VAR_22) {
   VAR_14 = FUNC_4(VAR_11->regmap[0], 0x0079, 0x01);
   if (VAR_14)
    goto error;
   VAR_11->ber_running = 1;
  }

  VAR_11->post_bit_error += VAR_21;

  VAR_13->post_bit_error.len = 1;
  VAR_13->post_bit_error.stat[0].scale = VAR_5;
  VAR_13->post_bit_error.stat[0].uvalue = VAR_11->post_bit_error;
 } else {
  VAR_13->post_bit_error.len = 1;
  VAR_13->post_bit_error.stat[0].scale = VAR_7;
 }

 return VAR_14;
error:
 FUNC_0(&VAR_12->dev, "failed=%d\n", VAR_14);
 return VAR_14;
}
