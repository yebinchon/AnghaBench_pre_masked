
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_7__ {int reg_bits; int val_bits; struct ts2020_priv* lock_arg; int unlock; int lock; } ;
struct ts2020_priv {int clk_out; int clk_out_div; int frequency_div; scalar_t__ tuner; int regmap; scalar_t__ loop_through; int stat_work; struct i2c_client* client; int get_agc_pwm; struct dvb_frontend* fe; int dont_poll; int i2c_address; int i2c; TYPE_2__ regmap_config; int regmap_mutex; } ;
struct ts2020_config {int clk_out; int clk_out_div; int frequency_div; int attach_in_use; int get_agc_pwm; int dont_poll; scalar_t__ loop_through; struct dvb_frontend* fe; } ;
struct i2c_device_id {int dummy; } ;
struct TYPE_9__ {struct ts2020_config* platform_data; } ;
struct i2c_client {TYPE_4__ dev; int addr; int adapter; } ;
struct dvb_tuner_ops {int dummy; } ;
struct TYPE_8__ {int * release; } ;
struct TYPE_6__ {TYPE_3__ tuner_ops; } ;
struct dvb_frontend {TYPE_1__ ops; struct ts2020_priv* tuner_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;



 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (TYPE_4__*,char*,int) ;
 int FUNC_4 (TYPE_4__*,char*,char*) ;
 int FUNC_5 (struct i2c_client*,struct ts2020_priv*) ;
 int FUNC_6 (struct ts2020_priv*) ;
 struct ts2020_priv* FUNC_7 (int,int ) ;
 int FUNC_8 (TYPE_3__*,int *,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct i2c_client*,TYPE_2__*) ;
 int FUNC_12 (int ,int,unsigned int*) ;
 int FUNC_13 (int ,int,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_14 (int,int) ;

__attribute__((used)) static int FUNC_15(struct i2c_client *VAR_10,
  const struct i2c_device_id *VAR_11)
{
 struct ts2020_config *VAR_12 = VAR_10->dev.platform_data;
 struct dvb_frontend *VAR_13 = VAR_12->fe;
 struct ts2020_priv *VAR_14;
 int VAR_15;
 u8 VAR_16;
 unsigned int VAR_17;
 char *VAR_18;

 VAR_14 = FUNC_7(sizeof(*VAR_14), VAR_3);
 if (!VAR_14) {
  VAR_15 = -VAR_2;
  goto err;
 }


 FUNC_9(&VAR_14->regmap_mutex);
 VAR_14->regmap_config.reg_bits = 8,
 VAR_14->regmap_config.val_bits = 8,
 VAR_14->regmap_config.lock = VAR_6,
 VAR_14->regmap_config.unlock = VAR_7,
 VAR_14->regmap_config.lock_arg = VAR_14,
 VAR_14->regmap = FUNC_11(VAR_10, &VAR_14->regmap_config);
 if (FUNC_1(VAR_14->regmap)) {
  VAR_15 = FUNC_2(VAR_14->regmap);
  goto err_kfree;
 }

 VAR_14->i2c = VAR_10->adapter;
 VAR_14->i2c_address = VAR_10->addr;
 VAR_14->loop_through = VAR_12->loop_through;
 VAR_14->clk_out = VAR_12->clk_out;
 VAR_14->clk_out_div = VAR_12->clk_out_div;
 VAR_14->dont_poll = VAR_12->dont_poll;
 VAR_14->frequency_div = VAR_12->frequency_div;
 VAR_14->fe = VAR_13;
 VAR_14->get_agc_pwm = VAR_12->get_agc_pwm;
 VAR_13->tuner_priv = VAR_14;
 VAR_14->client = VAR_10;
 FUNC_0(&VAR_14->stat_work, VAR_8);


 VAR_15 = FUNC_12(VAR_14->regmap, 0x00, &VAR_17);
 if (VAR_15)
  goto err_regmap_exit;

 if ((VAR_17 & 0x03) == 0x00) {
  VAR_15 = FUNC_13(VAR_14->regmap, 0x00, 0x01);
  if (VAR_15)
   goto err_regmap_exit;

  FUNC_14(2000, 50000);
 }

 VAR_15 = FUNC_13(VAR_14->regmap, 0x00, 0x03);
 if (VAR_15)
  goto err_regmap_exit;

 FUNC_14(2000, 50000);

 VAR_15 = FUNC_12(VAR_14->regmap, 0x00, &VAR_17);
 if (VAR_15)
  goto err_regmap_exit;

 FUNC_3(&VAR_10->dev, "chip_id=%02x\n", VAR_17);

 switch (VAR_17) {
 case 0x01:
 case 0x41:
 case 0x81:
  VAR_14->tuner = VAR_4;
  VAR_18 = "TS2020";
  if (!VAR_14->frequency_div)
   VAR_14->frequency_div = 1060000;
  break;
 case 0xc3:
 case 0x83:
  VAR_14->tuner = VAR_5;
  VAR_18 = "TS2022";
  if (!VAR_14->frequency_div)
   VAR_14->frequency_div = 1103000;
  break;
 default:
  VAR_15 = -VAR_1;
  goto err_regmap_exit;
 }

 if (VAR_14->tuner == VAR_5) {
  switch (VAR_14->clk_out) {
  case 130:
   VAR_16 = 0x60;
   break;
  case 129:
   VAR_16 = 0x70;
   VAR_15 = FUNC_13(VAR_14->regmap, 0x05, VAR_14->clk_out_div);
   if (VAR_15)
    goto err_regmap_exit;
   break;
  case 128:
   VAR_16 = 0x6c;
   break;
  default:
   VAR_15 = -VAR_0;
   goto err_regmap_exit;
  }

  VAR_15 = FUNC_13(VAR_14->regmap, 0x42, VAR_16);
  if (VAR_15)
   goto err_regmap_exit;

  if (VAR_14->loop_through)
   VAR_16 = 0xec;
  else
   VAR_16 = 0x6c;

  VAR_15 = FUNC_13(VAR_14->regmap, 0x62, VAR_16);
  if (VAR_15)
   goto err_regmap_exit;
 }


 VAR_15 = FUNC_13(VAR_14->regmap, 0x00, 0x00);
 if (VAR_15)
  goto err_regmap_exit;

 FUNC_4(&VAR_10->dev,
   "Montage Technology %s successfully identified\n", VAR_18);

 FUNC_8(&VAR_13->ops.tuner_ops, &VAR_9,
   sizeof(struct dvb_tuner_ops));
 if (!VAR_12->attach_in_use)
  VAR_13->ops.tuner_ops.release = ((void*)0);

 FUNC_5(VAR_10, VAR_14);
 return 0;
err_regmap_exit:
 FUNC_10(VAR_14->regmap);
err_kfree:
 FUNC_6(VAR_14);
err:
 FUNC_3(&VAR_10->dev, "failed=%d\n", VAR_15);
 return VAR_15;
}
