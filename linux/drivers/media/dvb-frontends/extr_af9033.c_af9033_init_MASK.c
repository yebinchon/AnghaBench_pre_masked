
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_9__ ;
typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_13__ ;
typedef struct TYPE_16__ TYPE_12__ ;
typedef struct TYPE_15__ TYPE_11__ ;
typedef struct TYPE_14__ TYPE_10__ ;


typedef unsigned int u8 ;
typedef int u64 ;
struct reg_val_mask {int member_0; int member_1; int member_2; scalar_t__ clock; int reg; int mask; int val; scalar_t__ adc; } ;
struct reg_val {int member_0; int member_1; int member_2; scalar_t__ clock; int reg; int mask; int val; scalar_t__ adc; } ;
struct i2c_client {int dev; } ;
struct TYPE_16__ {int len; TYPE_11__* stat; } ;
struct TYPE_14__ {int len; TYPE_9__* stat; } ;
struct TYPE_25__ {int len; TYPE_7__* stat; } ;
struct TYPE_23__ {int len; TYPE_5__* stat; } ;
struct TYPE_21__ {int len; TYPE_3__* stat; } ;
struct TYPE_19__ {int len; TYPE_1__* stat; } ;
struct dtv_frontend_properties {TYPE_12__ post_bit_error; TYPE_10__ post_bit_count; TYPE_8__ block_error; TYPE_6__ block_count; TYPE_4__ cnr; TYPE_2__ strength; } ;
struct dvb_frontend {struct dtv_frontend_properties dtv_property_cache; struct af9033_dev* demodulator_priv; } ;
struct TYPE_17__ {int tuner; int adc_multiplier; scalar_t__ clock; scalar_t__ ts_mode; scalar_t__ dyn0_clk; } ;
struct af9033_dev {int ts_mode_serial; int ts_mode_parallel; scalar_t__ bandwidth_hz; int regmap; TYPE_13__ cfg; struct i2c_client* client; } ;
struct TYPE_26__ {void* scale; } ;
struct TYPE_24__ {void* scale; } ;
struct TYPE_22__ {void* scale; } ;
struct TYPE_20__ {void* scale; } ;
struct TYPE_18__ {void* scale; } ;
struct TYPE_15__ {void* scale; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct reg_val_mask*) ;
 int VAR_2 ;
 void* VAR_3 ;
 int FUNC_1 (struct af9033_dev*,struct reg_val_mask const*,int) ;
 struct reg_val_mask* VAR_4 ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int *,char*,scalar_t__) ;
 unsigned int FUNC_4 (int,int) ;
 struct reg_val_mask* VAR_5 ;
 struct reg_val_mask* VAR_6 ;
 struct reg_val_mask* VAR_7 ;
 int FUNC_5 (int ,int,unsigned int*,int) ;
 int FUNC_6 (int ,int,int,int) ;
 int FUNC_7 (int ,int,int) ;
 struct reg_val_mask* VAR_8 ;
 struct reg_val_mask* VAR_9 ;
 struct reg_val_mask* VAR_10 ;
 struct reg_val_mask* VAR_11 ;
 struct reg_val_mask* VAR_12 ;
 struct reg_val_mask* VAR_13 ;
 struct reg_val_mask* VAR_14 ;
 struct reg_val_mask* VAR_15 ;
 struct reg_val_mask* VAR_16 ;
 struct reg_val_mask* VAR_17 ;
 struct reg_val_mask* VAR_18 ;
 struct reg_val_mask* VAR_19 ;

__attribute__((used)) static int FUNC_8(struct dvb_frontend *VAR_20)
{
 struct af9033_dev *VAR_21 = VAR_20->demodulator_priv;
 struct i2c_client *VAR_22 = VAR_21->client;
 struct dtv_frontend_properties *VAR_23 = &VAR_20->dtv_property_cache;
 int VAR_24, VAR_25, VAR_26;
 unsigned int VAR_27;
 const struct reg_val *VAR_28;
 u8 VAR_29[4];
 struct reg_val_mask VAR_30[] = {
  { 0x80fb24, 0x00, 0x08 },
  { 0x80004c, 0x00, 0xff },
  { 0x00f641, VAR_21->cfg.tuner, 0xff },
  { 0x80f5ca, 0x01, 0x01 },
  { 0x80f715, 0x01, 0x01 },
  { 0x00f41f, 0x04, 0x04 },
  { 0x00f41a, 0x01, 0x01 },
  { 0x80f731, 0x00, 0x01 },
  { 0x00d91e, 0x00, 0x01 },
  { 0x00d919, 0x00, 0x01 },
  { 0x80f732, 0x00, 0x01 },
  { 0x00d91f, 0x00, 0x01 },
  { 0x00d91a, 0x00, 0x01 },
  { 0x80f730, 0x00, 0x01 },
  { 0x80f778, 0x00, 0xff },
  { 0x80f73c, 0x01, 0x01 },
  { 0x80f776, 0x00, 0x01 },
  { 0x00d8fd, 0x01, 0xff },
  { 0x00d830, 0x01, 0xff },
  { 0x00d831, 0x00, 0xff },
  { 0x00d832, 0x00, 0xff },
  { 0x80f985, VAR_21->ts_mode_serial, 0x01 },
  { 0x80f986, VAR_21->ts_mode_parallel, 0x01 },
  { 0x00d827, 0x00, 0xff },
  { 0x00d829, 0x00, 0xff },
  { 0x800045, VAR_21->cfg.adc_multiplier, 0xff },
 };

 FUNC_2(&VAR_22->dev, "\n");


 VAR_27 = FUNC_4((u64)VAR_21->cfg.clock * 0x80000, 1000000);
 VAR_29[0] = (VAR_27 >> 0) & 0xff;
 VAR_29[1] = (VAR_27 >> 8) & 0xff;
 VAR_29[2] = (VAR_27 >> 16) & 0xff;
 VAR_29[3] = (VAR_27 >> 24) & 0xff;
 VAR_24 = FUNC_5(VAR_21->regmap, 0x800025, VAR_29, 4);
 if (VAR_24)
  goto err;

 FUNC_2(&VAR_22->dev, "clk=%u clk_cw=%08x\n", VAR_21->cfg.clock, VAR_27);


 for (VAR_25 = 0; VAR_25 < FUNC_0(VAR_4); VAR_25++) {
  if (VAR_4[VAR_25].clock == VAR_21->cfg.clock)
   break;
 }
 if (VAR_25 == FUNC_0(VAR_4)) {
  FUNC_3(&VAR_22->dev, "Couldn't find ADC config for clock %d\n",
   VAR_21->cfg.clock);
  goto err;
 }

 VAR_27 = FUNC_4((u64)VAR_4[VAR_25].adc * 0x80000, 1000000);
 VAR_29[0] = (VAR_27 >> 0) & 0xff;
 VAR_29[1] = (VAR_27 >> 8) & 0xff;
 VAR_29[2] = (VAR_27 >> 16) & 0xff;
 VAR_24 = FUNC_5(VAR_21->regmap, 0x80f1cd, VAR_29, 3);
 if (VAR_24)
  goto err;

 FUNC_2(&VAR_22->dev, "adc=%u adc_cw=%06x\n",
  VAR_4[VAR_25].adc, VAR_27);


 for (VAR_25 = 0; VAR_25 < FUNC_0(VAR_30); VAR_25++) {
  VAR_24 = FUNC_6(VAR_21->regmap, VAR_30[VAR_25].reg, VAR_30[VAR_25].mask,
      VAR_30[VAR_25].val);
  if (VAR_24)
   goto err;
 }


 if (VAR_21->cfg.dyn0_clk) {
  VAR_24 = FUNC_7(VAR_21->regmap, 0x80fba8, 0x00);
  if (VAR_24)
   goto err;
 }


 if (VAR_21->cfg.ts_mode == VAR_1) {
  VAR_24 = FUNC_6(VAR_21->regmap, 0x80f9a5, 0x01, 0x00);
  if (VAR_24)
   goto err;
  VAR_24 = FUNC_6(VAR_21->regmap, 0x80f9b5, 0x01, 0x01);
  if (VAR_24)
   goto err;
 } else {
  VAR_24 = FUNC_6(VAR_21->regmap, 0x80f990, 0x01, 0x00);
  if (VAR_24)
   goto err;
  VAR_24 = FUNC_6(VAR_21->regmap, 0x80f9b5, 0x01, 0x00);
  if (VAR_24)
   goto err;
 }


 FUNC_2(&VAR_22->dev, "load ofsm settings\n");
 switch (VAR_21->cfg.tuner) {
 case 136:
 case 135:
 case 134:
  VAR_26 = FUNC_0(VAR_6);
  VAR_28 = VAR_6;
  break;
 case 133:
 case 132:
 case 131:
  VAR_26 = FUNC_0(VAR_7);
  VAR_28 = VAR_7;
  break;
 default:
  VAR_26 = FUNC_0(VAR_5);
  VAR_28 = VAR_5;
  break;
 }

 VAR_24 = FUNC_1(VAR_21, VAR_28, VAR_26);
 if (VAR_24)
  goto err;


 FUNC_2(&VAR_22->dev, "load tuner specific settings\n");
 switch (VAR_21->cfg.tuner) {
 case 128:
  VAR_26 = FUNC_0(VAR_19);
  VAR_28 = VAR_19;
  break;
 case 139:
  VAR_26 = FUNC_0(VAR_8);
  VAR_28 = VAR_8;
  break;
 case 130:
  VAR_26 = FUNC_0(VAR_17);
  VAR_28 = VAR_17;
  break;
 case 129:
  VAR_26 = FUNC_0(VAR_18);
  VAR_28 = VAR_18;
  break;
 case 137:
  VAR_26 = FUNC_0(VAR_10);
  VAR_28 = VAR_10;
  break;
 case 138:
  VAR_26 = FUNC_0(VAR_9);
  VAR_28 = VAR_9;
  break;
 case 136:
  VAR_26 = FUNC_0(VAR_11);
  VAR_28 = VAR_11;
  break;
 case 135:
  VAR_26 = FUNC_0(VAR_12);
  VAR_28 = VAR_12;
  break;
 case 134:
  VAR_26 = FUNC_0(VAR_13);
  VAR_28 = VAR_13;
  break;
 case 133:
  VAR_26 = FUNC_0(VAR_14);
  VAR_28 = VAR_14;
  break;
 case 132:
  VAR_26 = FUNC_0(VAR_15);
  VAR_28 = VAR_15;
  break;
 case 131:
  VAR_26 = FUNC_0(VAR_16);
  VAR_28 = VAR_16;
  break;
 default:
  FUNC_2(&VAR_22->dev, "unsupported tuner ID=%d\n",
   VAR_21->cfg.tuner);
  VAR_24 = -VAR_2;
  goto err;
 }

 VAR_24 = FUNC_1(VAR_21, VAR_28, VAR_26);
 if (VAR_24)
  goto err;

 if (VAR_21->cfg.ts_mode == VAR_0) {
  VAR_24 = FUNC_6(VAR_21->regmap, 0x00d91c, 0x01, 0x01);
  if (VAR_24)
   goto err;
  VAR_24 = FUNC_6(VAR_21->regmap, 0x00d917, 0x01, 0x00);
  if (VAR_24)
   goto err;
  VAR_24 = FUNC_6(VAR_21->regmap, 0x00d916, 0x01, 0x00);
  if (VAR_24)
   goto err;
 }

 switch (VAR_21->cfg.tuner) {
 case 133:
 case 132:
 case 131:
  VAR_24 = FUNC_7(VAR_21->regmap, 0x800000, 0x01);
  if (VAR_24)
   goto err;
 }

 VAR_21->bandwidth_hz = 0;

 VAR_23->strength.len = 1;
 VAR_23->strength.stat[0].scale = VAR_3;
 VAR_23->cnr.len = 1;
 VAR_23->cnr.stat[0].scale = VAR_3;
 VAR_23->block_count.len = 1;
 VAR_23->block_count.stat[0].scale = VAR_3;
 VAR_23->block_error.len = 1;
 VAR_23->block_error.stat[0].scale = VAR_3;
 VAR_23->post_bit_count.len = 1;
 VAR_23->post_bit_count.stat[0].scale = VAR_3;
 VAR_23->post_bit_error.len = 1;
 VAR_23->post_bit_error.stat[0].scale = VAR_3;

 return 0;
err:
 FUNC_2(&VAR_22->dev, "failed=%d\n", VAR_24);
 return VAR_24;
}
