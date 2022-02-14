
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
struct TYPE_12__ {int len; TYPE_5__* stat; } ;
struct TYPE_10__ {int len; TYPE_3__* stat; } ;
struct TYPE_8__ {int len; TYPE_1__* stat; } ;
struct dtv_frontend_properties {TYPE_6__ post_bit_error; TYPE_4__ cnr; TYPE_2__ strength; } ;
struct dvb_frontend {struct dtv_frontend_properties dtv_property_cache; struct cxd2820r_priv* demodulator_priv; } ;
struct cxd2820r_priv {unsigned int post_bit_error; int * regmap; struct i2c_client** client; } ;
typedef enum fe_status { ____Placeholder_fe_status } fe_status ;
struct TYPE_11__ {unsigned int uvalue; void* scale; } ;
struct TYPE_9__ {unsigned int svalue; void* scale; } ;
struct TYPE_7__ {unsigned int uvalue; void* scale; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 int FUNC_0 (int *,char*,int,...) ;
 unsigned int FUNC_1 (int,int) ;
 scalar_t__ FUNC_2 (unsigned int) ;
 int FUNC_3 (int ,int,int*,int) ;

int FUNC_4(struct dvb_frontend *VAR_10, enum fe_status *VAR_11)
{
 struct cxd2820r_priv *VAR_12 = VAR_10->demodulator_priv;
 struct dtv_frontend_properties *VAR_13 = &VAR_10->dtv_property_cache;
 struct i2c_client *VAR_14 = VAR_12->client[0];
 int VAR_15;
 unsigned int VAR_16, VAR_17, VAR_18;
 u8 VAR_19[4];


 VAR_15 = FUNC_3(VAR_12->regmap[0], 0x2010, &VAR_19[0], 1);
 if (VAR_15)
  goto error;

 VAR_17 = (VAR_19[0] >> 0) & 0x07;
 VAR_18 = (VAR_19[0] >> 5) & 0x01;

 if (VAR_17 == 6 && VAR_18 == 1) {
  *VAR_11 = VAR_3 | VAR_1 |
     VAR_5 | VAR_4 | VAR_2;
 } else if (VAR_17 == 6 || VAR_18 == 1) {
  *VAR_11 = VAR_3 | VAR_1 |
     VAR_5 | VAR_4;
 } else {
  *VAR_11 = 0;
 }

 FUNC_0(&VAR_14->dev, "status=%02x raw=%*ph sync=%u ts=%u\n",
  *VAR_11, 1, VAR_19, VAR_17, VAR_18);


 if (*VAR_11 & VAR_3) {
  unsigned int VAR_20;

  VAR_15 = FUNC_3(VAR_12->regmap[0], 0x2026, VAR_19, 2);
  if (VAR_15)
   goto error;

  VAR_16 = VAR_19[0] << 8 | VAR_19[1] << 0;
  VAR_16 = ~VAR_16 & 0x0fff;

  VAR_20 = VAR_16 << 4 | VAR_16 >> 8;

  VAR_13->strength.len = 1;
  VAR_13->strength.stat[0].scale = VAR_9;
  VAR_13->strength.stat[0].uvalue = VAR_20;
 } else {
  VAR_13->strength.len = 1;
  VAR_13->strength.stat[0].scale = VAR_8;
 }


 if (*VAR_11 & VAR_5) {
  unsigned int VAR_21;

  VAR_15 = FUNC_3(VAR_12->regmap[0], 0x2028, VAR_19, 2);
  if (VAR_15)
   goto error;

  VAR_16 = VAR_19[0] << 8 | VAR_19[1] << 0;
  VAR_16 = VAR_16 & 0x0fff;

  if (VAR_16)
   VAR_21 = FUNC_1((u64)(FUNC_2(VAR_16)
          - 15151336) * 10000,
          (1 << 24));
  else
   VAR_21 = 0;

  VAR_13->cnr.len = 1;
  VAR_13->cnr.stat[0].scale = VAR_7;
  VAR_13->cnr.stat[0].svalue = VAR_21;
 } else {
  VAR_13->cnr.len = 1;
  VAR_13->cnr.stat[0].scale = VAR_8;
 }


 if (*VAR_11 & VAR_4) {
  unsigned int VAR_22;

  VAR_15 = FUNC_3(VAR_12->regmap[0], 0x2039, VAR_19, 4);
  if (VAR_15)
   goto error;

  if ((VAR_19[0] >> 4) & 0x01) {
   VAR_22 = VAR_19[0] << 24 | VAR_19[1] << 16 |
      VAR_19[2] << 8 | VAR_19[3] << 0;
   VAR_22 &= 0x0fffffff;
  } else {
   VAR_22 = 0;
  }

  VAR_12->post_bit_error += VAR_22;

  VAR_13->post_bit_error.len = 1;
  VAR_13->post_bit_error.stat[0].scale = VAR_6;
  VAR_13->post_bit_error.stat[0].uvalue = VAR_12->post_bit_error;
 } else {
  VAR_13->post_bit_error.len = 1;
  VAR_13->post_bit_error.stat[0].scale = VAR_8;
 }

 return VAR_15;
error:
 FUNC_0(&VAR_14->dev, "failed=%d\n", VAR_15);
 return VAR_15;
}
