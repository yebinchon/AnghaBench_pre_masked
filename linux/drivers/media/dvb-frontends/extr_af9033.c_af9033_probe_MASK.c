
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct regmap_config {int reg_bits; int val_bits; } ;
struct i2c_device_id {int dummy; } ;
struct TYPE_10__ {struct af9033_config* platform_data; } ;
struct i2c_client {TYPE_4__ dev; } ;
struct TYPE_9__ {int ts_mode; int clock; int tuner; } ;
struct TYPE_7__ {struct af9033_dev* demodulator_priv; TYPE_3__ ops; } ;
struct af9033_dev {int ts_mode_parallel; int ts_mode_serial; int is_it9135; int is_af9035; int regmap; TYPE_1__ fe; TYPE_3__ cfg; struct i2c_client* client; } ;
struct af9033_config {int regmap; TYPE_2__* ops; TYPE_1__** fe; } ;
struct TYPE_8__ {int pid_filter_ctrl; int pid_filter; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct af9033_config VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (TYPE_4__*,char*,int) ;
 int FUNC_3 (TYPE_4__*,char*,int) ;
 int FUNC_4 (TYPE_4__*,char*,...) ;
 int FUNC_5 (struct i2c_client*,struct af9033_dev*) ;
 int FUNC_6 (struct af9033_dev*) ;
 struct af9033_dev* FUNC_7 (int,int ) ;
 int FUNC_8 (TYPE_3__*,struct af9033_config*,int) ;
 int FUNC_9 (int ,int,int *,int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct i2c_client*,struct regmap_config const*) ;
 int FUNC_12 (int ,int,int) ;

__attribute__((used)) static int FUNC_13(struct i2c_client *VAR_6,
   const struct i2c_device_id *VAR_7)
{
 struct af9033_config *VAR_8 = VAR_6->dev.platform_data;
 struct af9033_dev *VAR_9;
 int VAR_10;
 u8 VAR_11[8];
 u32 VAR_12;
 static const struct regmap_config VAR_13 = {
  .reg_bits = 24,
  .val_bits = 8,
 };


 VAR_9 = FUNC_7(sizeof(*VAR_9), VAR_2);
 if (!VAR_9) {
  VAR_10 = -VAR_1;
  goto err;
 }


 VAR_9->client = VAR_6;
 FUNC_8(&VAR_9->cfg, VAR_8, sizeof(VAR_9->cfg));
 switch (VAR_9->cfg.ts_mode) {
 case 136:
  VAR_9->ts_mode_parallel = 1;
  break;
 case 135:
  VAR_9->ts_mode_serial = 1;
  break;
 case 134:

 default:
  break;
 }

 if (VAR_9->cfg.clock != 12000000) {
  VAR_10 = -VAR_0;
  FUNC_3(&VAR_6->dev,
   "Unsupported clock %u Hz. Only 12000000 Hz is supported currently\n",
   VAR_9->cfg.clock);
  goto err_kfree;
 }


 VAR_9->regmap = FUNC_11(VAR_6, &VAR_13);
 if (FUNC_0(VAR_9->regmap)) {
  VAR_10 = FUNC_1(VAR_9->regmap);
  goto err_kfree;
 }


 switch (VAR_9->cfg.tuner) {
 case 133:
 case 132:
 case 131:
 case 130:
 case 129:
 case 128:
  VAR_9->is_it9135 = 1;
  VAR_12 = 0x004bfc;
  break;
 default:
  VAR_9->is_af9035 = 1;
  VAR_12 = 0x0083e9;
  break;
 }

 VAR_10 = FUNC_9(VAR_9->regmap, VAR_12, &VAR_11[0], 4);
 if (VAR_10)
  goto err_regmap_exit;
 VAR_10 = FUNC_9(VAR_9->regmap, 0x804191, &VAR_11[4], 4);
 if (VAR_10)
  goto err_regmap_exit;

 FUNC_4(&VAR_6->dev,
   "firmware version: LINK %d.%d.%d.%d - OFDM %d.%d.%d.%d\n",
   VAR_11[0], VAR_11[1], VAR_11[2], VAR_11[3],
   VAR_11[4], VAR_11[5], VAR_11[6], VAR_11[7]);



 if (VAR_9->is_af9035) {
  VAR_10 = FUNC_12(VAR_9->regmap, 0x80004c, 0x01);
  if (VAR_10)
   goto err_regmap_exit;
  VAR_10 = FUNC_12(VAR_9->regmap, 0x800000, 0x00);
  if (VAR_10)
   goto err_regmap_exit;
 }


 FUNC_8(&VAR_9->fe.ops, &VAR_3, sizeof(VAR_9->fe.ops));
 VAR_9->fe.demodulator_priv = VAR_9;
 *VAR_8->fe = &VAR_9->fe;
 if (VAR_8->ops) {
  VAR_8->ops->pid_filter = VAR_4;
  VAR_8->ops->pid_filter_ctrl = VAR_5;
 }
 VAR_8->regmap = VAR_9->regmap;
 FUNC_5(VAR_6, VAR_9);

 FUNC_4(&VAR_6->dev, "Afatech AF9033 successfully attached\n");

 return 0;
err_regmap_exit:
 FUNC_10(VAR_9->regmap);
err_kfree:
 FUNC_6(VAR_9);
err:
 FUNC_2(&VAR_6->dev, "failed=%d\n", VAR_10);
 return VAR_10;
}
