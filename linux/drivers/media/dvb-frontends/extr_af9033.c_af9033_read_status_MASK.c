
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_12__ ;
typedef struct TYPE_14__ TYPE_11__ ;
typedef struct TYPE_13__ TYPE_10__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct i2c_client {int dev; } ;
struct TYPE_13__ {int len; TYPE_9__* stat; } ;
struct TYPE_23__ {int len; TYPE_7__* stat; } ;
struct TYPE_21__ {int len; TYPE_5__* stat; } ;
struct TYPE_19__ {int len; TYPE_3__* stat; } ;
struct TYPE_17__ {TYPE_1__* stat; } ;
struct TYPE_15__ {int len; TYPE_11__* stat; } ;
struct dtv_frontend_properties {TYPE_10__ post_bit_error; TYPE_8__ post_bit_count; TYPE_6__ block_error; TYPE_4__ block_count; TYPE_2__ cnr; TYPE_12__ strength; } ;
struct dvb_frontend {struct dtv_frontend_properties dtv_property_cache; struct af9033_dev* demodulator_priv; } ;
struct af9033_dev {int fe_status; int error_block_count; int total_block_count; int post_bit_error; int post_bit_count; int regmap; scalar_t__ is_af9035; struct i2c_client* client; } ;
typedef enum fe_status { ____Placeholder_fe_status } fe_status ;
struct TYPE_24__ {int uvalue; void* scale; } ;
struct TYPE_22__ {int uvalue; void* scale; } ;
struct TYPE_20__ {int uvalue; void* scale; } ;
struct TYPE_18__ {int uvalue; void* scale; } ;
struct TYPE_16__ {unsigned int svalue; void* scale; } ;
struct TYPE_14__ {int svalue; void* scale; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 unsigned int FUNC_0 (unsigned int,unsigned int,unsigned int) ;
 int FUNC_1 (int *,char*,...) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ,int,int*,int) ;
 int FUNC_4 (int ,int,unsigned int*) ;

__attribute__((used)) static int FUNC_5(struct dvb_frontend *VAR_8, enum fe_status *VAR_9)
{
 struct af9033_dev *VAR_10 = VAR_8->demodulator_priv;
 struct i2c_client *VAR_11 = VAR_10->client;
 struct dtv_frontend_properties *VAR_12 = &VAR_8->dtv_property_cache;
 int VAR_13, VAR_14 = 0;
 u8 VAR_15[7];
 unsigned int VAR_16, VAR_17;

 FUNC_1(&VAR_11->dev, "\n");

 *VAR_9 = 0;


 VAR_13 = FUNC_4(VAR_10->regmap, 0x800047, &VAR_16);
 if (VAR_13)
  goto err;


 if (VAR_16 == 0x01)
  *VAR_9 |= VAR_2;

 if (VAR_16 != 0x02) {

  VAR_13 = FUNC_4(VAR_10->regmap, 0x80f5a9, &VAR_16);
  if (VAR_13)
   goto err;

  if ((VAR_16 >> 0) & 0x01)
   *VAR_9 |= VAR_2 | VAR_0 |
     VAR_4;


  VAR_13 = FUNC_4(VAR_10->regmap, 0x80f999, &VAR_16);
  if (VAR_13)
   goto err;

  if ((VAR_16 >> 0) & 0x01)
   *VAR_9 |= VAR_2 | VAR_0 |
     VAR_4 | VAR_3 |
     VAR_1;
 }

 VAR_10->fe_status = *VAR_9;


 if (VAR_10->fe_status & VAR_2) {
  if (VAR_10->is_af9035) {
   VAR_13 = FUNC_4(VAR_10->regmap, 0x80004a, &VAR_16);
   if (VAR_13)
    goto err;
   VAR_14 = -VAR_16 * 1000;
  } else {
   VAR_13 = FUNC_4(VAR_10->regmap, 0x8000f7, &VAR_16);
   if (VAR_13)
    goto err;
   VAR_14 = (VAR_16 - 100) * 1000;
  }

  VAR_12->strength.len = 1;
  VAR_12->strength.stat[0].scale = VAR_6;
  VAR_12->strength.stat[0].svalue = VAR_14;
 } else {
  VAR_12->strength.len = 1;
  VAR_12->strength.stat[0].scale = VAR_7;
 }


 if (VAR_10->fe_status & VAR_4) {

  VAR_13 = FUNC_3(VAR_10->regmap, 0x80002c, VAR_15, 3);
  if (VAR_13)
   goto err;

  VAR_17 = VAR_15[2] << 16 | VAR_15[1] << 8 | VAR_15[0] << 0;


  VAR_13 = FUNC_4(VAR_10->regmap, 0x80f78b, &VAR_16);
  if (VAR_13)
   goto err;

  if (VAR_16)
   VAR_17 /= VAR_16;


  VAR_13 = FUNC_4(VAR_10->regmap, 0x80f900, &VAR_16);
  if (VAR_13)
   goto err;

  switch ((VAR_16 >> 0) & 3) {
  case 0:

   VAR_17 *= 4;
   break;
  case 1:

   VAR_17 *= 1;
   break;
  case 2:

   VAR_17 *= 2;
   break;
  default:
   VAR_17 *= 0;
   break;
  }


  VAR_13 = FUNC_4(VAR_10->regmap, 0x80f903, &VAR_16);
  if (VAR_13)
   goto err;

  switch ((VAR_16 >> 0) & 3) {
  case 0:





   VAR_17 = FUNC_0(VAR_17, 653799U, 1689999U);
   VAR_17 = ((u64)(FUNC_2(VAR_17)
     - FUNC_2(1690000 - VAR_17)
     + 3355443) * 13 * 1000) >> 24;
   break;
  case 1:





   VAR_17 = FUNC_0(VAR_17, 371105U, 827999U);
   VAR_17 = ((u64)(FUNC_2(VAR_17 - 370000)
     - FUNC_2(828000 - VAR_17)
     + 43900382) * 6 * 1000) >> 24;
   break;
  case 2:





   VAR_17 = FUNC_0(VAR_17, 193246U, 424999U);
   VAR_17 = ((u64)(FUNC_2(VAR_17 - 193000)
     - FUNC_2(425000 - VAR_17)
     + 49912218) * 8 * 1000) >> 24;
   break;
  default:
   VAR_17 = 0;
   break;
  }

  FUNC_1(&VAR_11->dev, "cnr=%u\n", VAR_17);

  VAR_12->cnr.stat[0].scale = VAR_6;
  VAR_12->cnr.stat[0].svalue = VAR_17;
 } else {
  VAR_12->cnr.stat[0].scale = VAR_7;
 }


 if (VAR_10->fe_status & VAR_1) {

  u16 VAR_18, VAR_19;

  u32 VAR_20;






  VAR_13 = FUNC_3(VAR_10->regmap, 0x800032, VAR_15, 7);
  if (VAR_13)
   goto err;

  VAR_18 = (VAR_15[1] << 8) | (VAR_15[0] << 0);
  VAR_20 = (VAR_15[4] << 16) | (VAR_15[3] << 8) | VAR_15[2];
  VAR_19 = (VAR_15[6] << 8) | (VAR_15[5] << 0);

  VAR_10->error_block_count += VAR_18;
  VAR_10->total_block_count += VAR_19;
  VAR_10->post_bit_error += VAR_20;
  VAR_10->post_bit_count += VAR_19 * 204 * 8;

  VAR_12->block_count.len = 1;
  VAR_12->block_count.stat[0].scale = VAR_5;
  VAR_12->block_count.stat[0].uvalue = VAR_10->total_block_count;

  VAR_12->block_error.len = 1;
  VAR_12->block_error.stat[0].scale = VAR_5;
  VAR_12->block_error.stat[0].uvalue = VAR_10->error_block_count;

  VAR_12->post_bit_count.len = 1;
  VAR_12->post_bit_count.stat[0].scale = VAR_5;
  VAR_12->post_bit_count.stat[0].uvalue = VAR_10->post_bit_count;

  VAR_12->post_bit_error.len = 1;
  VAR_12->post_bit_error.stat[0].scale = VAR_5;
  VAR_12->post_bit_error.stat[0].uvalue = VAR_10->post_bit_error;
 }

 return 0;
err:
 FUNC_1(&VAR_11->dev, "failed=%d\n", VAR_13);
 return VAR_13;
}
