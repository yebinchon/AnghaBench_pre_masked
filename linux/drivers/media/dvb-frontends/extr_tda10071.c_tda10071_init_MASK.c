
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef int u8 ;
struct tda10071_reg_val_mask {int member_0; int member_1; int member_2; int mask; int val; int reg; } ;
struct tda10071_dev {int pll_multiplier; int warm; int i2c_wr_max; int clk; int spec_inv; int tuner_i2c_addr; int ts_mode; int regmap; struct i2c_client* client; } ;
struct tda10071_cmd {int* args; int len; } ;
struct i2c_client {int dev; } ;
struct firmware {int size; int * data; } ;
struct TYPE_20__ {int len; TYPE_8__* stat; } ;
struct TYPE_18__ {int len; TYPE_6__* stat; } ;
struct TYPE_16__ {int len; TYPE_4__* stat; } ;
struct TYPE_14__ {int len; TYPE_2__* stat; } ;
struct dtv_frontend_properties {TYPE_9__ block_error; TYPE_7__ post_bit_error; TYPE_5__ cnr; TYPE_3__ strength; } ;
struct dvb_frontend {struct dtv_frontend_properties dtv_property_cache; struct tda10071_dev* demodulator_priv; } ;
struct TYPE_19__ {void* scale; } ;
struct TYPE_17__ {void* scale; } ;
struct TYPE_15__ {void* scale; } ;
struct TYPE_13__ {void* scale; } ;
struct TYPE_12__ {int* name; } ;
struct TYPE_11__ {TYPE_1__ info; } ;


 int FUNC_0 (struct tda10071_reg_val_mask*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 int* VAR_9 ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int *,char*,...) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,int,int*,int) ;
 int FUNC_6 (int ,int,int*,int) ;
 int FUNC_7 (int ,int,unsigned int*) ;
 int FUNC_8 (int ,int,int,int) ;
 int FUNC_9 (int ,int,int) ;
 int FUNC_10 (struct firmware const*) ;
 int FUNC_11 (struct firmware const**,int*,int *) ;
 int FUNC_12 (struct tda10071_dev*,struct tda10071_cmd*) ;
 TYPE_10__ VAR_10 ;
 int FUNC_13 (struct tda10071_dev*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_14(struct dvb_frontend *VAR_11)
{
 struct tda10071_dev *VAR_12 = VAR_11->demodulator_priv;
 struct i2c_client *VAR_13 = VAR_12->client;
 struct dtv_frontend_properties *VAR_14 = &VAR_11->dtv_property_cache;
 struct tda10071_cmd VAR_15;
 int VAR_16, VAR_17, VAR_18, VAR_19, VAR_20;
 unsigned int VAR_21;
 const struct firmware *VAR_22;
 u8 *VAR_23 = VAR_9;
 u8 VAR_24, VAR_25[4];
 struct tda10071_reg_val_mask VAR_26[] = {
  { 0xcd, 0x00, 0x07 },
  { 0x80, 0x00, 0x02 },
  { 0xcd, 0x00, 0xc0 },
  { 0xce, 0x00, 0x1b },
  { 0x9d, 0x00, 0x01 },
  { 0x9d, 0x00, 0x02 },
  { 0x9e, 0x00, 0x01 },
  { 0x87, 0x00, 0x80 },
  { 0xce, 0x00, 0x08 },
  { 0xce, 0x00, 0x10 },
 };
 struct tda10071_reg_val_mask VAR_27[] = {
  { 0xf1, 0x70, 0xff },
  { 0x88, VAR_12->pll_multiplier, 0x3f },
  { 0x89, 0x00, 0x10 },
  { 0x89, 0x10, 0x10 },
  { 0xc0, 0x01, 0x01 },
  { 0xc0, 0x00, 0x01 },
  { 0xe0, 0xff, 0xff },
  { 0xe0, 0x00, 0xff },
  { 0x96, 0x1e, 0x7e },
  { 0x8b, 0x08, 0x08 },
  { 0x8b, 0x00, 0x08 },
  { 0x8f, 0x1a, 0x7e },
  { 0x8c, 0x68, 0xff },
  { 0x8d, 0x08, 0xff },
  { 0x8e, 0x4c, 0xff },
  { 0x8f, 0x01, 0x01 },
  { 0x8b, 0x04, 0x04 },
  { 0x8b, 0x00, 0x04 },
  { 0x87, 0x05, 0x07 },
  { 0x80, 0x00, 0x20 },
  { 0xc8, 0x01, 0xff },
  { 0xb4, 0x47, 0xff },
  { 0xb5, 0x9c, 0xff },
  { 0xb6, 0x7d, 0xff },
  { 0xba, 0x00, 0x03 },
  { 0xb7, 0x47, 0xff },
  { 0xb8, 0x9c, 0xff },
  { 0xb9, 0x7d, 0xff },
  { 0xba, 0x00, 0x0c },
  { 0xc8, 0x00, 0xff },
  { 0xcd, 0x00, 0x04 },
  { 0xcd, 0x00, 0x20 },
  { 0xe8, 0x02, 0xff },
  { 0xcf, 0x20, 0xff },
  { 0x9b, 0xd7, 0xff },
  { 0x9a, 0x01, 0x03 },
  { 0xa8, 0x05, 0x0f },
  { 0xa8, 0x65, 0xf0 },
  { 0xa6, 0xa0, 0xf0 },
  { 0x9d, 0x50, 0xfc },
  { 0x9e, 0x20, 0xe0 },
  { 0xa3, 0x1c, 0x7c },
  { 0xd5, 0x03, 0x03 },
 };

 if (VAR_12->warm) {


  for (VAR_17 = 0; VAR_17 < FUNC_0(VAR_26); VAR_17++) {
   VAR_16 = FUNC_13(VAR_12, VAR_26[VAR_17].reg,
    VAR_26[VAR_17].val, VAR_26[VAR_17].mask);
   if (VAR_16)
    goto error;
  }

  VAR_15.args[0] = VAR_5;
  VAR_15.args[1] = 0;
  VAR_15.args[2] = 0;
  VAR_15.len = 3;
  VAR_16 = FUNC_12(VAR_12, &VAR_15);
  if (VAR_16)
   goto error;
 } else {



  VAR_16 = FUNC_11(&VAR_22, VAR_23, &VAR_13->dev);
  if (VAR_16) {
   FUNC_2(&VAR_13->dev,
    "did not find the firmware file '%s' (status %d). You can use <kernel_dir>/scripts/get_dvb_firmware to get the firmware\n",
    VAR_23, VAR_16);
   goto error;
  }


  for (VAR_17 = 0; VAR_17 < FUNC_0(VAR_27); VAR_17++) {
   VAR_16 = FUNC_13(VAR_12, VAR_27[VAR_17].reg,
    VAR_27[VAR_17].val, VAR_27[VAR_17].mask);
   if (VAR_16)
    goto error_release_firmware;
  }


  VAR_16 = FUNC_9(VAR_12->regmap, 0xe0, 0x7f);
  if (VAR_16)
   goto error_release_firmware;

  VAR_16 = FUNC_9(VAR_12->regmap, 0xf7, 0x81);
  if (VAR_16)
   goto error_release_firmware;

  VAR_16 = FUNC_9(VAR_12->regmap, 0xf8, 0x00);
  if (VAR_16)
   goto error_release_firmware;

  VAR_16 = FUNC_9(VAR_12->regmap, 0xf9, 0x00);
  if (VAR_16)
   goto error_release_firmware;

  FUNC_3(&VAR_13->dev,
    "found a '%s' in cold state, will try to load a firmware\n",
    VAR_10.info.name);
  FUNC_3(&VAR_13->dev, "downloading firmware from file '%s'\n",
    VAR_23);


  VAR_20 = VAR_22->size - 1;

  for (VAR_19 = VAR_20; VAR_19 > 0;
   VAR_19 -= (VAR_12->i2c_wr_max - 1)) {
   VAR_18 = VAR_19;
   if (VAR_18 > (VAR_12->i2c_wr_max - 1))
    VAR_18 = (VAR_12->i2c_wr_max - 1);

   VAR_16 = FUNC_6(VAR_12->regmap, 0xfa,
    (u8 *) &VAR_22->data[VAR_20 - VAR_19], VAR_18);
   if (VAR_16) {
    FUNC_2(&VAR_13->dev,
     "firmware download failed=%d\n", VAR_16);
    goto error_release_firmware;
   }
  }
  FUNC_10(VAR_22);

  VAR_16 = FUNC_9(VAR_12->regmap, 0xf7, 0x0c);
  if (VAR_16)
   goto error;

  VAR_16 = FUNC_9(VAR_12->regmap, 0xe0, 0x00);
  if (VAR_16)
   goto error;


  FUNC_4(250);


  VAR_16 = FUNC_7(VAR_12->regmap, 0x51, &VAR_21);
  if (VAR_16)
   goto error;

  if (VAR_21) {
   FUNC_3(&VAR_13->dev, "firmware did not run\n");
   VAR_16 = -VAR_7;
   goto error;
  } else {
   VAR_12->warm = 1;
  }

  VAR_15.args[0] = VAR_2;
  VAR_15.len = 1;
  VAR_16 = FUNC_12(VAR_12, &VAR_15);
  if (VAR_16)
   goto error;

  VAR_16 = FUNC_5(VAR_12->regmap, VAR_15.len, VAR_25, 4);
  if (VAR_16)
   goto error;

  FUNC_3(&VAR_13->dev, "firmware version %d.%d.%d.%d\n",
    VAR_25[0], VAR_25[1], VAR_25[2], VAR_25[3]);
  FUNC_3(&VAR_13->dev, "found a '%s' in warm state\n",
    VAR_10.info.name);

  VAR_16 = FUNC_5(VAR_12->regmap, 0x81, VAR_25, 2);
  if (VAR_16)
   goto error;

  VAR_15.args[0] = VAR_1;
  VAR_15.args[1] = ((VAR_12->clk / 1000) >> 8) & 0xff;
  VAR_15.args[2] = ((VAR_12->clk / 1000) >> 0) & 0xff;
  VAR_15.args[3] = VAR_25[0];
  VAR_15.args[4] = VAR_25[1];
  VAR_15.args[5] = VAR_12->pll_multiplier;
  VAR_15.args[6] = VAR_12->spec_inv;
  VAR_15.args[7] = 0x00;
  VAR_15.len = 8;
  VAR_16 = FUNC_12(VAR_12, &VAR_15);
  if (VAR_16)
   goto error;

  if (VAR_12->tuner_i2c_addr)
   VAR_24 = VAR_12->tuner_i2c_addr;
  else
   VAR_24 = 0x14;

  VAR_15.args[0] = VAR_6;
  VAR_15.args[1] = 0x00;
  VAR_15.args[2] = 0x00;
  VAR_15.args[3] = 0x00;
  VAR_15.args[4] = 0x00;
  VAR_15.args[5] = VAR_24;
  VAR_15.args[6] = 0x00;
  VAR_15.args[7] = 0x03;
  VAR_15.args[8] = 0x02;
  VAR_15.args[9] = 0x02;
  VAR_15.args[10] = 0x00;
  VAR_15.args[11] = 0x00;
  VAR_15.args[12] = 0x00;
  VAR_15.args[13] = 0x00;
  VAR_15.args[14] = 0x00;
  VAR_15.len = 15;
  VAR_16 = FUNC_12(VAR_12, &VAR_15);
  if (VAR_16)
   goto error;

  VAR_15.args[0] = VAR_4;
  VAR_15.args[1] = 0;
  VAR_15.args[2] = VAR_12->ts_mode;
  VAR_15.args[3] = 0x00;
  VAR_15.args[4] = 0x04;
  VAR_15.args[5] = 0x00;
  VAR_15.len = 6;
  VAR_16 = FUNC_12(VAR_12, &VAR_15);
  if (VAR_16)
   goto error;

  VAR_16 = FUNC_8(VAR_12->regmap, 0xf0, 0x01, 0x01);
  if (VAR_16)
   goto error;

  VAR_15.args[0] = VAR_3;
  VAR_15.args[1] = 0;
  VAR_15.args[2] = 150;
  VAR_15.args[3] = 3;
  VAR_15.args[4] = 22;
  VAR_15.args[5] = 1;
  VAR_15.args[6] = 1;
  VAR_15.args[7] = 30;
  VAR_15.args[8] = 30;
  VAR_15.args[9] = 30;
  VAR_15.args[10] = 30;
  VAR_15.len = 11;
  VAR_16 = FUNC_12(VAR_12, &VAR_15);
  if (VAR_16)
   goto error;

  VAR_15.args[0] = VAR_0;
  VAR_15.args[1] = 0;
  VAR_15.args[2] = 14;
  VAR_15.args[3] = 14;
  VAR_15.len = 4;
  VAR_16 = FUNC_12(VAR_12, &VAR_15);
  if (VAR_16)
   goto error;
 }


 VAR_14->strength.len = 1;
 VAR_14->strength.stat[0].scale = VAR_8;
 VAR_14->cnr.len = 1;
 VAR_14->cnr.stat[0].scale = VAR_8;
 VAR_14->post_bit_error.len = 1;
 VAR_14->post_bit_error.stat[0].scale = VAR_8;
 VAR_14->block_error.len = 1;
 VAR_14->block_error.stat[0].scale = VAR_8;

 return VAR_16;
error_release_firmware:
 FUNC_10(VAR_22);
error:
 FUNC_1(&VAR_13->dev, "failed=%d\n", VAR_16);
 return VAR_16;
}
