
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct regmap_config {int reg_bits; int val_bits; } ;
struct TYPE_13__ {int len; } ;
struct TYPE_12__ {int len; } ;
struct TYPE_11__ {int len; } ;
struct TYPE_10__ {int len; } ;
struct dtv_frontend_properties {TYPE_5__ block_count; TYPE_4__ block_error; TYPE_3__ cnr; TYPE_2__ strength; } ;
struct TYPE_9__ {struct dtv_frontend_properties dtv_property_cache; struct i2c_client* demodulator_priv; int ops; } ;
struct mn88472_dev {struct i2c_client** regmap; struct i2c_client** client; TYPE_1__ fe; int ts_clk; int ts_mode; int clk; scalar_t__ i2c_write_max; } ;
struct mn88472_config {int get_dvb_frontend; TYPE_1__** fe; int ts_clock; int ts_mode; int xtal; scalar_t__ i2c_wr_max; } ;
struct i2c_device_id {int dummy; } ;
struct TYPE_14__ {struct mn88472_config* platform_data; } ;
struct i2c_client {TYPE_6__ dev; int adapter; } ;
struct dvb_frontend_ops {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (TYPE_6__*,char*,...) ;
 int FUNC_3 (TYPE_6__*,char*) ;
 int FUNC_4 (TYPE_6__*,char*) ;
 void* FUNC_5 (int ,int) ;
 int FUNC_6 (struct i2c_client*,struct mn88472_dev*) ;
 int FUNC_7 (struct i2c_client*) ;
 int FUNC_8 (struct mn88472_dev*) ;
 struct mn88472_dev* FUNC_9 (int,int ) ;
 int FUNC_10 (int *,int *,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_11 (struct i2c_client*) ;
 void* FUNC_12 (struct i2c_client*,struct regmap_config const*) ;
 int FUNC_13 (struct i2c_client*,int,unsigned int*) ;
 int FUNC_14 (struct i2c_client*,int,int) ;

__attribute__((used)) static int FUNC_15(struct i2c_client *VAR_5,
    const struct i2c_device_id *VAR_6)
{
 struct mn88472_config *VAR_7 = VAR_5->dev.platform_data;
 struct mn88472_dev *VAR_8;
 struct dtv_frontend_properties *VAR_9;
 int VAR_10;
 unsigned int VAR_11;
 static const struct regmap_config VAR_12 = {
  .reg_bits = 8,
  .val_bits = 8,
 };

 FUNC_2(&VAR_5->dev, "\n");

 VAR_8 = FUNC_9(sizeof(*VAR_8), VAR_2);
 if (!VAR_8) {
  VAR_10 = -VAR_1;
  goto err;
 }

 VAR_8->i2c_write_max = VAR_7->i2c_wr_max ? VAR_7->i2c_wr_max : ~0;
 VAR_8->clk = VAR_7->xtal;
 VAR_8->ts_mode = VAR_7->ts_mode;
 VAR_8->ts_clk = VAR_7->ts_clock;
 VAR_8->client[0] = VAR_5;
 VAR_8->regmap[0] = FUNC_12(VAR_8->client[0], &VAR_12);
 if (FUNC_0(VAR_8->regmap[0])) {
  VAR_10 = FUNC_1(VAR_8->regmap[0]);
  goto err_kfree;
 }
 VAR_8->client[1] = FUNC_5(VAR_5->adapter, 0x1a);
 if (FUNC_0(VAR_8->client[1])) {
  VAR_10 = FUNC_1(VAR_8->client[1]);
  FUNC_3(&VAR_5->dev, "I2C registration failed\n");
  goto err_regmap_0_regmap_exit;
 }
 VAR_8->regmap[1] = FUNC_12(VAR_8->client[1], &VAR_12);
 if (FUNC_0(VAR_8->regmap[1])) {
  VAR_10 = FUNC_1(VAR_8->regmap[1]);
  goto err_client_1_i2c_unregister_device;
 }
 FUNC_6(VAR_8->client[1], VAR_8);

 VAR_8->client[2] = FUNC_5(VAR_5->adapter, 0x1c);
 if (FUNC_0(VAR_8->client[2])) {
  VAR_10 = FUNC_1(VAR_8->client[2]);
  FUNC_3(&VAR_5->dev, "2nd I2C registration failed\n");
  goto err_regmap_1_regmap_exit;
 }
 VAR_8->regmap[2] = FUNC_12(VAR_8->client[2], &VAR_12);
 if (FUNC_0(VAR_8->regmap[2])) {
  VAR_10 = FUNC_1(VAR_8->regmap[2]);
  goto err_client_2_i2c_unregister_device;
 }
 FUNC_6(VAR_8->client[2], VAR_8);


 VAR_10 = FUNC_13(VAR_8->regmap[2], 0xff, &VAR_11);
 if (VAR_10)
  goto err_regmap_2_regmap_exit;

 FUNC_2(&VAR_5->dev, "chip id=%02x\n", VAR_11);

 if (VAR_11 != 0x02) {
  VAR_10 = -VAR_0;
  goto err_regmap_2_regmap_exit;
 }


 VAR_10 = FUNC_14(VAR_8->regmap[2], 0x05, 0x3e);
 if (VAR_10)
  goto err_regmap_2_regmap_exit;


 FUNC_10(&VAR_8->fe.ops, &VAR_4, sizeof(struct dvb_frontend_ops));
 VAR_8->fe.demodulator_priv = VAR_5;
 *VAR_7->fe = &VAR_8->fe;
 FUNC_6(VAR_5, VAR_8);


 VAR_9 = &VAR_8->fe.dtv_property_cache;
 VAR_9->strength.len = 1;
 VAR_9->cnr.len = 1;
 VAR_9->block_error.len = 1;
 VAR_9->block_count.len = 1;


 VAR_7->get_dvb_frontend = VAR_3;

 FUNC_4(&VAR_5->dev, "Panasonic MN88472 successfully identified\n");

 return 0;
err_regmap_2_regmap_exit:
 FUNC_11(VAR_8->regmap[2]);
err_client_2_i2c_unregister_device:
 FUNC_7(VAR_8->client[2]);
err_regmap_1_regmap_exit:
 FUNC_11(VAR_8->regmap[1]);
err_client_1_i2c_unregister_device:
 FUNC_7(VAR_8->client[1]);
err_regmap_0_regmap_exit:
 FUNC_11(VAR_8->regmap[0]);
err_kfree:
 FUNC_8(VAR_8);
err:
 FUNC_2(&VAR_5->dev, "failed=%d\n", VAR_10);
 return VAR_10;
}
