
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
typedef int u64 ;
struct i2c_client {int dev; } ;
struct dvb_frontend {struct af9013_state* demodulator_priv; } ;
struct af9013_state {unsigned int* api_version; int clk; int tuner; int ts_output_pin; int ts_mode; int first_tune; int regmap; struct i2c_client* client; } ;
struct af9013_reg_mask_val {int reg; int mask; int val; } ;
 int FUNC_0 (struct af9013_reg_mask_val*) ;
 int VAR_0 ;
 struct af9013_reg_mask_val* VAR_1 ;
 int FUNC_1 (int *,char*,...) ;
 unsigned int FUNC_2 (int,int) ;
 int FUNC_3 (int ,int,unsigned int*,int) ;
 int FUNC_4 (int ,int,int,int) ;
 struct af9013_reg_mask_val* VAR_2 ;
 struct af9013_reg_mask_val* VAR_3 ;
 struct af9013_reg_mask_val* VAR_4 ;
 struct af9013_reg_mask_val* VAR_5 ;
 struct af9013_reg_mask_val* VAR_6 ;
 struct af9013_reg_mask_val* VAR_7 ;
 struct af9013_reg_mask_val* VAR_8 ;
 struct af9013_reg_mask_val* VAR_9 ;
 struct af9013_reg_mask_val* VAR_10 ;

__attribute__((used)) static int FUNC_5(struct dvb_frontend *VAR_11)
{
 struct af9013_state *VAR_12 = VAR_11->demodulator_priv;
 struct i2c_client *VAR_13 = VAR_12->client;
 int VAR_14, VAR_15, VAR_16;
 unsigned int VAR_17;
 u8 VAR_18[3];
 const struct af9013_reg_mask_val *VAR_19;

 FUNC_1(&VAR_13->dev, "\n");


 VAR_14 = FUNC_4(VAR_12->regmap, 0xd73a, 0x08, 0x00);
 if (VAR_14)
  goto err;


 VAR_14 = FUNC_4(VAR_12->regmap, 0xd417, 0x02, 0x00);
 if (VAR_14)
  goto err;


 VAR_14 = FUNC_4(VAR_12->regmap, 0xd417, 0x10, 0x00);
 if (VAR_14)
  goto err;


 VAR_14 = FUNC_3(VAR_12->regmap, 0x9bf2, VAR_12->api_version, 4);
 if (VAR_14)
  goto err;


 switch (VAR_12->clk) {
 case 28800000:
  VAR_17 = 0;
  break;
 case 20480000:
  VAR_17 = 1;
  break;
 case 28000000:
  VAR_17 = 2;
  break;
 case 25000000:
  VAR_17 = 3;
  break;
 default:
  VAR_14 = -VAR_0;
  goto err;
 }

 VAR_14 = FUNC_4(VAR_12->regmap, 0x9bd2, 0x0f, VAR_17);
 if (VAR_14)
  goto err;

 VAR_17 = FUNC_2((u64)VAR_12->clk * 0x80000, 1000000);
 VAR_18[0] = (VAR_17 >> 0) & 0xff;
 VAR_18[1] = (VAR_17 >> 8) & 0xff;
 VAR_18[2] = (VAR_17 >> 16) & 0xff;
 VAR_14 = FUNC_3(VAR_12->regmap, 0xd180, VAR_18, 3);
 if (VAR_14)
  goto err;


 FUNC_1(&VAR_13->dev, "load demod core settings\n");
 VAR_16 = FUNC_0(VAR_1);
 VAR_19 = VAR_1;
 for (VAR_15 = 0; VAR_15 < VAR_16; VAR_15++) {
  VAR_14 = FUNC_4(VAR_12->regmap, VAR_19[VAR_15].reg, VAR_19[VAR_15].mask,
      VAR_19[VAR_15].val);
  if (VAR_14)
   goto err;
 }


 FUNC_1(&VAR_13->dev, "load tuner specific settings\n");
 switch (VAR_12->tuner) {
 case 136:
  VAR_16 = FUNC_0(VAR_6);
  VAR_19 = VAR_6;
  break;
 case 135:
 case 134:
 case 133:
  VAR_16 = FUNC_0(VAR_7);
  VAR_19 = VAR_7;
  break;
 case 140:
  VAR_16 = FUNC_0(VAR_2);
  VAR_19 = VAR_2;
  break;
 case 138:
  VAR_16 = FUNC_0(VAR_4);
  VAR_19 = VAR_4;
  break;
 case 139:
  VAR_16 = FUNC_0(VAR_3);
  VAR_19 = VAR_3;
  break;
 case 132:
 case 131:
  VAR_16 = FUNC_0(VAR_8);
  VAR_19 = VAR_8;
  break;
 case 137:
  VAR_16 = FUNC_0(VAR_5);
  VAR_19 = VAR_5;
  break;
 case 129:
 case 130:
  VAR_16 = FUNC_0(VAR_9);
  VAR_19 = VAR_9;
  break;
 case 128:
 default:
  VAR_16 = FUNC_0(VAR_10);
  VAR_19 = VAR_10;
  break;
 }

 for (VAR_15 = 0; VAR_15 < VAR_16; VAR_15++) {
  VAR_14 = FUNC_4(VAR_12->regmap, VAR_19[VAR_15].reg, VAR_19[VAR_15].mask,
      VAR_19[VAR_15].val);
  if (VAR_14)
   goto err;
 }


 if (VAR_12->ts_output_pin == 7)
  VAR_17 = 1 << 3 | VAR_12->ts_mode << 1;
 else
  VAR_17 = 0 << 3 | VAR_12->ts_mode << 1;
 VAR_14 = FUNC_4(VAR_12->regmap, 0xd500, 0x0e, VAR_17);
 if (VAR_14)
  goto err;


 VAR_14 = FUNC_4(VAR_12->regmap, 0xd730, 0x01, 0x01);
 if (VAR_14)
  goto err;

 VAR_12->first_tune = 1;

 return 0;
err:
 FUNC_1(&VAR_13->dev, "failed %d\n", VAR_14);
 return VAR_14;
}
