
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


struct si2168_dev {int fe_status; int active; } ;
struct si2168_cmd {int* args; int rlen; } ;
struct i2c_client {int dev; } ;
struct TYPE_16__ {TYPE_7__* stat; } ;
struct TYPE_14__ {TYPE_5__* stat; } ;
struct TYPE_12__ {TYPE_3__* stat; } ;
struct TYPE_10__ {int len; TYPE_1__* stat; } ;
struct dtv_frontend_properties {int delivery_system; TYPE_8__ block_error; TYPE_6__ post_bit_count; TYPE_4__ post_bit_error; TYPE_2__ cnr; } ;
struct dvb_frontend {struct dtv_frontend_properties dtv_property_cache; struct i2c_client* demodulator_priv; } ;
typedef enum fe_status { ____Placeholder_fe_status } fe_status ;
struct TYPE_15__ {unsigned int uvalue; void* scale; } ;
struct TYPE_13__ {unsigned int uvalue; void* scale; } ;
struct TYPE_11__ {unsigned int uvalue; void* scale; } ;
struct TYPE_9__ {int svalue; void* scale; } ;


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



 unsigned int FUNC_0 (int,int ,int) ;
 int FUNC_1 (struct si2168_cmd*,char*,int,int) ;
 int FUNC_2 (int *,char*,int,...) ;
 struct si2168_dev* FUNC_3 (struct i2c_client*) ;
 int FUNC_4 (struct i2c_client*,struct si2168_cmd*) ;

__attribute__((used)) static int FUNC_5(struct dvb_frontend *VAR_10, enum fe_status *VAR_11)
{
 struct i2c_client *VAR_12 = VAR_10->demodulator_priv;
 struct si2168_dev *VAR_13 = FUNC_3(VAR_12);
 struct dtv_frontend_properties *VAR_14 = &VAR_10->dtv_property_cache;
 int VAR_15, VAR_16;
 unsigned int VAR_17, VAR_18, VAR_19;
 struct si2168_cmd VAR_20;

 *VAR_11 = 0;

 if (!VAR_13->active) {
  VAR_15 = -VAR_0;
  goto err;
 }

 switch (VAR_14->delivery_system) {
 case 129:
  FUNC_1(&VAR_20, "\xa0\x01", 2, 13);
  break;
 case 130:
  FUNC_1(&VAR_20, "\x90\x01", 2, 9);
  break;
 case 128:
  FUNC_1(&VAR_20, "\x50\x01", 2, 14);
  break;
 default:
  VAR_15 = -VAR_1;
  goto err;
 }

 VAR_15 = FUNC_4(VAR_12, &VAR_20);
 if (VAR_15)
  goto err;

 switch ((VAR_20.args[2] >> 1) & 0x03) {
 case 0x01:
  *VAR_11 = VAR_4 | VAR_2;
  break;
 case 0x03:
  *VAR_11 = VAR_4 | VAR_2 | VAR_6 |
    VAR_5 | VAR_3;
  break;
 }

 VAR_13->fe_status = *VAR_11;

 if (*VAR_11 & VAR_3) {
  VAR_14->cnr.len = 1;
  VAR_14->cnr.stat[0].scale = VAR_8;
  VAR_14->cnr.stat[0].svalue = VAR_20.args[3] * 1000 / 4;
 } else {
  VAR_14->cnr.len = 1;
  VAR_14->cnr.stat[0].scale = VAR_9;
 }

 FUNC_2(&VAR_12->dev, "status=%02x args=%*ph\n",
   *VAR_11, VAR_20.rlen, VAR_20.args);


 if (*VAR_11 & VAR_6) {
  FUNC_1(&VAR_20, "\x82\x00", 2, 3);
  VAR_15 = FUNC_4(VAR_12, &VAR_20);
  if (VAR_15)
   goto err;





  VAR_17 = FUNC_0(8 - VAR_20.args[1], 0, 8);
  for (VAR_16 = 0, VAR_18 = 1; VAR_16 < VAR_17; VAR_16++)
   VAR_18 = VAR_18 * 10;

  VAR_18 = VAR_20.args[2] * VAR_18;
  VAR_19 = 100000000;

  FUNC_2(&VAR_12->dev,
   "post_bit_error=%u post_bit_count=%u ber=%u*10^-%u\n",
   VAR_18, VAR_19, VAR_20.args[2], VAR_20.args[1]);

  VAR_14->post_bit_error.stat[0].scale = VAR_7;
  VAR_14->post_bit_error.stat[0].uvalue += VAR_18;
  VAR_14->post_bit_count.stat[0].scale = VAR_7;
  VAR_14->post_bit_count.stat[0].uvalue += VAR_19;
 } else {
  VAR_14->post_bit_error.stat[0].scale = VAR_9;
  VAR_14->post_bit_count.stat[0].scale = VAR_9;
 }


 if (*VAR_11 & VAR_5) {
  FUNC_1(&VAR_20, "\x84\x01", 2, 3);
  VAR_15 = FUNC_4(VAR_12, &VAR_20);
  if (VAR_15)
   goto err;

  VAR_18 = VAR_20.args[2] << 8 | VAR_20.args[1] << 0;
  FUNC_2(&VAR_12->dev, "block_error=%u\n", VAR_18);


  if (VAR_18 == 0xffff)
   VAR_18 = 0;

  VAR_14->block_error.stat[0].scale = VAR_7;
  VAR_14->block_error.stat[0].uvalue += VAR_18;
 } else {
  VAR_14->block_error.stat[0].scale = VAR_9;
 }

 return 0;
err:
 FUNC_2(&VAR_12->dev, "failed=%d\n", VAR_15);
 return VAR_15;
}
