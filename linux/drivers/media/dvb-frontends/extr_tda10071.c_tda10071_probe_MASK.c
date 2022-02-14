
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tda10071_platform_data {int get_dvb_frontend; int tuner_i2c_addr; int pll_multiplier; int spec_inv; int ts_mode; int i2c_wr_max; int clk; } ;
struct TYPE_4__ {struct tda10071_dev* demodulator_priv; int ops; } ;
struct tda10071_dev {TYPE_1__ fe; int regmap; int tuner_i2c_addr; int pll_multiplier; int spec_inv; int ts_mode; int i2c_wr_max; int clk; int cmd_execute_mutex; struct i2c_client* client; } ;
struct regmap_config {int reg_bits; int val_bits; } ;
struct i2c_device_id {int dummy; } ;
struct TYPE_5__ {struct tda10071_platform_data* platform_data; } ;
struct i2c_client {TYPE_2__ dev; } ;
struct dvb_frontend_ops {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,char*,int) ;
 int FUNC_3 (TYPE_2__*,char*) ;
 int FUNC_4 (struct i2c_client*,struct regmap_config const*) ;
 int FUNC_5 (struct i2c_client*,struct tda10071_dev*) ;
 int FUNC_6 (struct tda10071_dev*) ;
 struct tda10071_dev* FUNC_7 (int,int ) ;
 int FUNC_8 (int *,int *,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,int,unsigned int*) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_11(struct i2c_client *VAR_5,
   const struct i2c_device_id *VAR_6)
{
 struct tda10071_dev *VAR_7;
 struct tda10071_platform_data *VAR_8 = VAR_5->dev.platform_data;
 int VAR_9;
 unsigned int VAR_10;
 static const struct regmap_config VAR_11 = {
  .reg_bits = 8,
  .val_bits = 8,
 };

 VAR_7 = FUNC_7(sizeof(*VAR_7), VAR_2);
 if (!VAR_7) {
  VAR_9 = -VAR_1;
  goto err;
 }

 VAR_7->client = VAR_5;
 FUNC_9(&VAR_7->cmd_execute_mutex);
 VAR_7->clk = VAR_8->clk;
 VAR_7->i2c_wr_max = VAR_8->i2c_wr_max;
 VAR_7->ts_mode = VAR_8->ts_mode;
 VAR_7->spec_inv = VAR_8->spec_inv;
 VAR_7->pll_multiplier = VAR_8->pll_multiplier;
 VAR_7->tuner_i2c_addr = VAR_8->tuner_i2c_addr;
 VAR_7->regmap = FUNC_4(VAR_5, &VAR_11);
 if (FUNC_0(VAR_7->regmap)) {
  VAR_9 = FUNC_1(VAR_7->regmap);
  goto err_kfree;
 }


 VAR_9 = FUNC_10(VAR_7->regmap, 0xff, &VAR_10);
 if (VAR_9)
  goto err_kfree;
 if (VAR_10 != 0x0f) {
  VAR_9 = -VAR_0;
  goto err_kfree;
 }


 VAR_9 = FUNC_10(VAR_7->regmap, 0xdd, &VAR_10);
 if (VAR_9)
  goto err_kfree;
 if (VAR_10 != 0x00) {
  VAR_9 = -VAR_0;
  goto err_kfree;
 }


 VAR_9 = FUNC_10(VAR_7->regmap, 0xfe, &VAR_10);
 if (VAR_9)
  goto err_kfree;
 if (VAR_10 != 0x01) {
  VAR_9 = -VAR_0;
  goto err_kfree;
 }


 FUNC_8(&VAR_7->fe.ops, &VAR_4, sizeof(struct dvb_frontend_ops));
 VAR_7->fe.demodulator_priv = VAR_7;
 FUNC_5(VAR_5, VAR_7);


 VAR_8->get_dvb_frontend = VAR_3;

 FUNC_3(&VAR_5->dev, "NXP TDA10071 successfully identified\n");
 return 0;
err_kfree:
 FUNC_6(VAR_7);
err:
 FUNC_2(&VAR_5->dev, "failed=%d\n", VAR_9);
 return VAR_9;
}
