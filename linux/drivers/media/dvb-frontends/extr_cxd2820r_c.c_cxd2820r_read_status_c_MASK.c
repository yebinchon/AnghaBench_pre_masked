
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
typedef unsigned int u64 ;
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
 int VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 int FUNC_0 (int *,char*,int,...) ;
 unsigned int FUNC_1 (unsigned int,int ) ;
 scalar_t__ FUNC_2 (unsigned int) ;
 int FUNC_3 (int ,int,int*,int) ;
 int FUNC_4 (int ,int,unsigned int*) ;
 int FUNC_5 (int ,int,int) ;
 int FUNC_6 (unsigned int,int) ;

int FUNC_7(struct dvb_frontend *VAR_10, enum fe_status *VAR_11)
{
 struct cxd2820r_priv *VAR_12 = VAR_10->demodulator_priv;
 struct i2c_client *VAR_13 = VAR_12->client[0];
 struct dtv_frontend_properties *VAR_14 = &VAR_10->dtv_property_cache;
 int VAR_15;
 unsigned int VAR_16, VAR_17, VAR_18;
 u8 VAR_19[3];


 VAR_15 = FUNC_3(VAR_12->regmap[1], 0x0088, &VAR_19[0], 1);
 if (VAR_15)
  goto error;
 VAR_15 = FUNC_3(VAR_12->regmap[1], 0x0073, &VAR_19[1], 1);
 if (VAR_15)
  goto error;

 VAR_17 = (VAR_19[0] >> 0) & 0x01;
 VAR_18 = (VAR_19[1] >> 3) & 0x01;

 if (VAR_17 == 1 && VAR_18 == 1) {
  *VAR_11 = VAR_3 | VAR_1 |
     VAR_5 | VAR_4 | VAR_2;
 } else if (VAR_17 == 1 || VAR_18 == 1) {
  *VAR_11 = VAR_3 | VAR_1 |
     VAR_5 | VAR_4;
 } else {
  *VAR_11 = 0;
 }

 FUNC_0(&VAR_13->dev, "status=%02x raw=%*ph sync=%u ts=%u\n",
  *VAR_11, 2, VAR_19, VAR_17, VAR_18);


 if (*VAR_11 & VAR_3) {
  unsigned int VAR_20;

  VAR_15 = FUNC_3(VAR_12->regmap[1], 0x0049, VAR_19, 2);
  if (VAR_15)
   goto error;

  VAR_16 = VAR_19[0] << 8 | VAR_19[1] << 0;
  VAR_16 = 511 - FUNC_6(VAR_16, 9);

  VAR_20 = VAR_16 << 6 | VAR_16 >> 4;

  VAR_14->strength.len = 1;
  VAR_14->strength.stat[0].scale = VAR_9;
  VAR_14->strength.stat[0].uvalue = VAR_20;
 } else {
  VAR_14->strength.len = 1;
  VAR_14->strength.stat[0].scale = VAR_8;
 }


 if (*VAR_11 & VAR_5) {
  unsigned int VAR_21, VAR_22, VAR_23;

  VAR_15 = FUNC_4(VAR_12->regmap[1], 0x0019, &VAR_16);
  if (VAR_15)
   goto error;

  if (((VAR_16 >> 0) & 0x03) % 2) {
   VAR_22 = 8750;
   VAR_23 = 650;
  } else {
   VAR_22 = 9500;
   VAR_23 = 760;
  }

  VAR_15 = FUNC_4(VAR_12->regmap[1], 0x004d, &VAR_16);
  if (VAR_15)
   goto error;


  if (VAR_16)
   VAR_21 = FUNC_1((u64)(FUNC_2(VAR_23) - FUNC_2(VAR_16))
          * VAR_22, 24204406);
  else
   VAR_21 = 0;

  VAR_14->cnr.len = 1;
  VAR_14->cnr.stat[0].scale = VAR_7;
  VAR_14->cnr.stat[0].svalue = VAR_21;
 } else {
  VAR_14->cnr.len = 1;
  VAR_14->cnr.stat[0].scale = VAR_8;
 }


 if (*VAR_11 & VAR_4) {
  unsigned int VAR_24;
  bool VAR_25;

  if (VAR_12->ber_running) {
   VAR_15 = FUNC_3(VAR_12->regmap[1], 0x0076, VAR_19, 3);
   if (VAR_15)
    goto error;

   if ((VAR_19[2] >> 7) & 0x01) {
    VAR_24 = VAR_19[2] << 16 | VAR_19[1] << 8 |
       VAR_19[0] << 0;
    VAR_24 &= 0x0fffff;
    VAR_25 = 1;
   } else {
    VAR_24 = 0;
    VAR_25 = 0;
   }
  } else {
   VAR_24 = 0;
   VAR_25 = 1;
  }

  if (VAR_25) {
   VAR_15 = FUNC_5(VAR_12->regmap[1], 0x0079, 0x01);
   if (VAR_15)
    goto error;
   VAR_12->ber_running = 1;
  }

  VAR_12->post_bit_error += VAR_24;

  VAR_14->post_bit_error.len = 1;
  VAR_14->post_bit_error.stat[0].scale = VAR_6;
  VAR_14->post_bit_error.stat[0].uvalue = VAR_12->post_bit_error;
 } else {
  VAR_14->post_bit_error.len = 1;
  VAR_14->post_bit_error.stat[0].scale = VAR_8;
 }

 return VAR_15;
error:
 FUNC_0(&VAR_13->dev, "failed=%d\n", VAR_15);
 return VAR_15;
}
