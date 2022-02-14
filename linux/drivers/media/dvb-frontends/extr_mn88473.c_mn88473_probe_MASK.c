
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct regmap_config {int reg_bits; int val_bits; } ;
struct TYPE_5__ {struct i2c_client* demodulator_priv; int ops; } ;
struct mn88473_dev {int clk; struct i2c_client** regmap; struct i2c_client** client; TYPE_1__ frontend; scalar_t__ i2c_wr_max; } ;
struct mn88473_config {int xtal; TYPE_1__** fe; scalar_t__ i2c_wr_max; } ;
struct i2c_device_id {int dummy; } ;
struct TYPE_6__ {struct mn88473_config* platform_data; } ;
struct i2c_client {TYPE_2__ dev; int adapter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (TYPE_2__*,char*,...) ;
 int FUNC_3 (TYPE_2__*,char*) ;
 int FUNC_4 (TYPE_2__*,char*) ;
 void* FUNC_5 (int ,int) ;
 int FUNC_6 (struct i2c_client*,struct mn88473_dev*) ;
 int FUNC_7 (struct i2c_client*) ;
 int FUNC_8 (struct mn88473_dev*) ;
 struct mn88473_dev* FUNC_9 (int,int ) ;
 int FUNC_10 (int *,int *,int) ;
 int VAR_4 ;
 int FUNC_11 (struct i2c_client*) ;
 void* FUNC_12 (struct i2c_client*,struct regmap_config const*) ;
 int FUNC_13 (struct i2c_client*,int,unsigned int*) ;
 int FUNC_14 (struct i2c_client*,int,int) ;

__attribute__((used)) static int FUNC_15(struct i2c_client *VAR_5,
    const struct i2c_device_id *VAR_6)
{
 struct mn88473_config *VAR_7 = VAR_5->dev.platform_data;
 struct mn88473_dev *VAR_8;
 int VAR_9;
 unsigned int VAR_10;
 static const struct regmap_config VAR_11 = {
  .reg_bits = 8,
  .val_bits = 8,
 };

 FUNC_2(&VAR_5->dev, "\n");


 if (VAR_7->fe == ((void*)0)) {
  FUNC_3(&VAR_5->dev, "frontend pointer not defined\n");
  VAR_9 = -VAR_0;
  goto err;
 }

 VAR_8 = FUNC_9(sizeof(*VAR_8), VAR_3);
 if (VAR_8 == ((void*)0)) {
  VAR_9 = -VAR_2;
  goto err;
 }

 if (VAR_7->i2c_wr_max)
  VAR_8->i2c_wr_max = VAR_7->i2c_wr_max;
 else
  VAR_8->i2c_wr_max = ~0;

 if (VAR_7->xtal)
  VAR_8->clk = VAR_7->xtal;
 else
  VAR_8->clk = 25000000;
 VAR_8->client[0] = VAR_5;
 VAR_8->regmap[0] = FUNC_12(VAR_8->client[0], &VAR_11);
 if (FUNC_0(VAR_8->regmap[0])) {
  VAR_9 = FUNC_1(VAR_8->regmap[0]);
  goto err_kfree;
 }
 VAR_8->client[1] = FUNC_5(VAR_5->adapter, 0x1a);
 if (FUNC_0(VAR_8->client[1])) {
  VAR_9 = FUNC_1(VAR_8->client[1]);
  FUNC_3(&VAR_5->dev, "I2C registration failed\n");
  goto err_regmap_0_regmap_exit;
 }
 VAR_8->regmap[1] = FUNC_12(VAR_8->client[1], &VAR_11);
 if (FUNC_0(VAR_8->regmap[1])) {
  VAR_9 = FUNC_1(VAR_8->regmap[1]);
  goto err_client_1_i2c_unregister_device;
 }
 FUNC_6(VAR_8->client[1], VAR_8);

 VAR_8->client[2] = FUNC_5(VAR_5->adapter, 0x1c);
 if (FUNC_0(VAR_8->client[2])) {
  VAR_9 = FUNC_1(VAR_8->client[2]);
  FUNC_3(&VAR_5->dev, "2nd I2C registration failed\n");
  goto err_regmap_1_regmap_exit;
 }
 VAR_8->regmap[2] = FUNC_12(VAR_8->client[2], &VAR_11);
 if (FUNC_0(VAR_8->regmap[2])) {
  VAR_9 = FUNC_1(VAR_8->regmap[2]);
  goto err_client_2_i2c_unregister_device;
 }
 FUNC_6(VAR_8->client[2], VAR_8);


 VAR_9 = FUNC_13(VAR_8->regmap[2], 0xff, &VAR_10);
 if (VAR_9)
  goto err_regmap_2_regmap_exit;

 FUNC_2(&VAR_5->dev, "chip id=%02x\n", VAR_10);

 if (VAR_10 != 0x03) {
  VAR_9 = -VAR_1;
  goto err_regmap_2_regmap_exit;
 }


 VAR_9 = FUNC_14(VAR_8->regmap[2], 0x05, 0x3e);
 if (VAR_9)
  goto err_regmap_2_regmap_exit;


 FUNC_10(&VAR_8->frontend.ops, &VAR_4, sizeof(VAR_8->frontend.ops));
 VAR_8->frontend.demodulator_priv = VAR_5;
 *VAR_7->fe = &VAR_8->frontend;
 FUNC_6(VAR_5, VAR_8);

 FUNC_4(&VAR_5->dev, "Panasonic MN88473 successfully identified\n");

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
 FUNC_2(&VAR_5->dev, "failed=%d\n", VAR_9);
 return VAR_9;
}
