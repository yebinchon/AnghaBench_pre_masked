
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
struct rtl2832_platform_data {int regmap; int pid_filter_ctrl; int pid_filter; int slave_ts_ctrl; int get_i2c_adapter; int get_dvb_frontend; } ;
struct TYPE_7__ {struct rtl2832_dev* demodulator_priv; int ops; } ;
struct TYPE_8__ {int reg_bits; int val_bits; int max_register; int cache_type; int num_ranges; struct regmap_range_cfg const* ranges; int volatile_reg; } ;
struct rtl2832_dev {int sleeping; int regmap; TYPE_1__ fe; TYPE_3__* muxc; TYPE_2__ regmap_config; int i2c_gate_work; struct rtl2832_platform_data* pdata; struct i2c_client* client; } ;
struct regmap_range_cfg {int selector_reg; int selector_mask; int window_len; int range_min; int range_max; int window_start; int selector_shift; } ;
struct i2c_device_id {int dummy; } ;
struct TYPE_10__ {struct rtl2832_platform_data* platform_data; } ;
struct i2c_client {TYPE_5__ dev; struct i2c_adapter* adapter; } ;
struct i2c_adapter {int dev; } ;
struct dvb_frontend_ops {int dummy; } ;
struct TYPE_9__ {struct rtl2832_dev* priv; } ;


 int FUNC_0 (struct regmap_range_cfg const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_3 ;
 int FUNC_4 (TYPE_5__*,char*,...) ;
 int FUNC_5 (TYPE_5__*,char*) ;
 int FUNC_6 (TYPE_3__*,int ,int ,int ) ;
 TYPE_3__* FUNC_7 (struct i2c_adapter*,int *,int,int ,int ,int ,int ) ;
 int FUNC_8 (struct i2c_client*,struct rtl2832_dev*) ;
 int FUNC_9 (struct rtl2832_dev*) ;
 struct rtl2832_dev* FUNC_10 (int,int ) ;
 int FUNC_11 (int *,int *,int) ;
 int FUNC_12 (int ,int,int *,int) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (struct i2c_client*,TYPE_2__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static int FUNC_15(struct i2c_client *VAR_14,
  const struct i2c_device_id *VAR_15)
{
 struct rtl2832_platform_data *VAR_16 = VAR_14->dev.platform_data;
 struct i2c_adapter *VAR_17 = VAR_14->adapter;
 struct rtl2832_dev *VAR_18;
 int VAR_19;
 u8 VAR_20;
 static const struct regmap_range_cfg VAR_21[] = {
  {
   .selector_reg = 0x00,
   .selector_mask = 0xff,
   .selector_shift = 0,
   .window_start = 0,
   .window_len = 0x100,
   .range_min = 0 * 0x100,
   .range_max = 5 * 0x100,
  },
 };

 FUNC_4(&VAR_14->dev, "\n");


 VAR_18 = FUNC_10(sizeof(struct rtl2832_dev), VAR_1);
 if (VAR_18 == ((void*)0)) {
  VAR_19 = -VAR_0;
  goto err;
 }


 FUNC_8(VAR_14, VAR_18);
 VAR_18->client = VAR_14;
 VAR_18->pdata = VAR_14->dev.platform_data;
 VAR_18->sleeping = 1;
 FUNC_1(&VAR_18->i2c_gate_work, VAR_7);

 VAR_18->regmap_config.reg_bits = 8,
 VAR_18->regmap_config.val_bits = 8,
 VAR_18->regmap_config.volatile_reg = VAR_13,
 VAR_18->regmap_config.max_register = 5 * 0x100,
 VAR_18->regmap_config.ranges = VAR_21,
 VAR_18->regmap_config.num_ranges = FUNC_0(VAR_21),
 VAR_18->regmap_config.cache_type = VAR_3,
 VAR_18->regmap = FUNC_14(VAR_14, &VAR_18->regmap_config);
 if (FUNC_2(VAR_18->regmap)) {
  VAR_19 = FUNC_3(VAR_18->regmap);
  goto err_kfree;
 }


 VAR_19 = FUNC_12(VAR_18->regmap, 0x000, &VAR_20, 1);
 if (VAR_19)
  goto err_regmap_exit;


 VAR_18->muxc = FUNC_7(VAR_17, &VAR_17->dev, 1, 0, VAR_2,
      VAR_11, VAR_4);
 if (!VAR_18->muxc) {
  VAR_19 = -VAR_0;
  goto err_regmap_exit;
 }
 VAR_18->muxc->priv = VAR_18;
 VAR_19 = FUNC_6(VAR_18->muxc, 0, 0, 0);
 if (VAR_19)
  goto err_regmap_exit;


 FUNC_11(&VAR_18->fe.ops, &VAR_8, sizeof(struct dvb_frontend_ops));
 VAR_18->fe.demodulator_priv = VAR_18;


 VAR_16->get_dvb_frontend = VAR_5;
 VAR_16->get_i2c_adapter = VAR_6;
 VAR_16->slave_ts_ctrl = VAR_12;
 VAR_16->pid_filter = VAR_9;
 VAR_16->pid_filter_ctrl = VAR_10;
 VAR_16->regmap = VAR_18->regmap;

 FUNC_5(&VAR_14->dev, "Realtek RTL2832 successfully attached\n");
 return 0;
err_regmap_exit:
 FUNC_13(VAR_18->regmap);
err_kfree:
 FUNC_9(VAR_18);
err:
 FUNC_4(&VAR_14->dev, "failed=%d\n", VAR_19);
 return VAR_19;
}
