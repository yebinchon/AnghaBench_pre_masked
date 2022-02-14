
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct m88ds3103_platform_data {int ts_clk; int clk_out; int get_i2c_adapter; int get_dvb_frontend; int attach_in_use; int lnb_en_pol; int lnb_hv_pol; int agc; int envelope_mode; int agc_inv; int spec_inv; int ts_clk_pol; int ts_mode; int i2c_wr_max; int clk; } ;
struct TYPE_12__ {int name; } ;
struct TYPE_14__ {int * release; TYPE_2__ info; } ;
struct TYPE_13__ {struct m88ds3103_dev* demodulator_priv; TYPE_4__ ops; } ;
struct TYPE_17__ {int reg_bits; int val_bits; struct m88ds3103_dev* lock_arg; } ;
struct TYPE_11__ {int ts_clk; int clock_out; int lnb_en_pol; int lnb_hv_pol; int agc; int envelope_mode; int agc_inv; int spec_inv; int ts_clk_pol; int ts_mode; int i2c_wr_max; int clock; } ;
struct m88ds3103_dev {unsigned int chip_id; TYPE_3__ fe; TYPE_5__* muxc; int regmap; TYPE_1__* cfg; TYPE_8__ regmap_config; TYPE_1__ config; struct i2c_client* client; } ;
struct i2c_device_id {int dummy; } ;
struct TYPE_16__ {struct m88ds3103_platform_data* platform_data; } ;
struct i2c_client {TYPE_6__ dev; int adapter; } ;
struct dvb_frontend_ops {int dummy; } ;
struct TYPE_15__ {struct m88ds3103_dev* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;





 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_6__*,char*,int) ;
 int FUNC_3 (TYPE_6__*,char*,int) ;
 int FUNC_4 (struct i2c_client*,TYPE_8__*) ;
 int FUNC_5 (TYPE_5__*,int ,int ,int ) ;
 TYPE_5__* FUNC_6 (int ,TYPE_6__*,int,int ,int ,int ,int *) ;
 int FUNC_7 (struct i2c_client*,struct m88ds3103_dev*) ;
 int FUNC_8 (struct m88ds3103_dev*) ;
 struct m88ds3103_dev* FUNC_9 (int,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_10 (struct m88ds3103_dev*,int,int,int) ;
 int FUNC_11 (TYPE_4__*,int *,int) ;
 int FUNC_12 (int ,int,unsigned int*) ;
 int FUNC_13 (int ,int,unsigned int) ;
 int FUNC_14 (int ,char*,int) ;

__attribute__((used)) static int FUNC_15(struct i2c_client *VAR_8,
   const struct i2c_device_id *VAR_9)
{
 struct m88ds3103_dev *VAR_10;
 struct m88ds3103_platform_data *VAR_11 = VAR_8->dev.platform_data;
 int VAR_12;
 unsigned int VAR_13;

 VAR_10 = FUNC_9(sizeof(*VAR_10), VAR_3);
 if (!VAR_10) {
  VAR_12 = -VAR_2;
  goto err;
 }

 VAR_10->client = VAR_8;
 VAR_10->config.clock = VAR_11->clk;
 VAR_10->config.i2c_wr_max = VAR_11->i2c_wr_max;
 VAR_10->config.ts_mode = VAR_11->ts_mode;
 VAR_10->config.ts_clk = VAR_11->ts_clk * 1000;
 VAR_10->config.ts_clk_pol = VAR_11->ts_clk_pol;
 VAR_10->config.spec_inv = VAR_11->spec_inv;
 VAR_10->config.agc_inv = VAR_11->agc_inv;
 VAR_10->config.clock_out = VAR_11->clk_out;
 VAR_10->config.envelope_mode = VAR_11->envelope_mode;
 VAR_10->config.agc = VAR_11->agc;
 VAR_10->config.lnb_hv_pol = VAR_11->lnb_hv_pol;
 VAR_10->config.lnb_en_pol = VAR_11->lnb_en_pol;
 VAR_10->cfg = &VAR_10->config;

 VAR_10->regmap_config.reg_bits = 8,
 VAR_10->regmap_config.val_bits = 8,
 VAR_10->regmap_config.lock_arg = VAR_10,
 VAR_10->regmap = FUNC_4(VAR_8, &VAR_10->regmap_config);
 if (FUNC_0(VAR_10->regmap)) {
  VAR_12 = FUNC_1(VAR_10->regmap);
  goto err_kfree;
 }


 VAR_12 = FUNC_12(VAR_10->regmap, 0x00, &VAR_13);
 if (VAR_12)
  goto err_kfree;

 VAR_10->chip_id = VAR_13 >> 1;
 FUNC_2(&VAR_8->dev, "chip_id=%02x\n", VAR_10->chip_id);

 switch (VAR_10->chip_id) {
 case 128:
 case 132:
  break;
 default:
  VAR_12 = -VAR_1;
  FUNC_3(&VAR_8->dev, "Unknown device. Chip_id=%02x\n", VAR_10->chip_id);
  goto err_kfree;
 }

 switch (VAR_10->cfg->clock_out) {
 case 131:
  VAR_13 = 0x80;
  break;
 case 130:
  VAR_13 = 0x00;
  break;
 case 129:
  VAR_13 = 0x10;
  break;
 default:
  VAR_12 = -VAR_0;
  goto err_kfree;
 }

 if (!VAR_11->ts_clk) {
  VAR_12 = -VAR_0;
  goto err_kfree;
 }



 if (VAR_10->chip_id == 128)
  VAR_13 = 0x00;

 VAR_12 = FUNC_13(VAR_10->regmap, 0x29, VAR_13);
 if (VAR_12)
  goto err_kfree;


 VAR_12 = FUNC_10(VAR_10, 0x08, 0x01, 0x00);
 if (VAR_12)
  goto err_kfree;
 VAR_12 = FUNC_10(VAR_10, 0x04, 0x01, 0x01);
 if (VAR_12)
  goto err_kfree;
 VAR_12 = FUNC_10(VAR_10, 0x23, 0x10, 0x10);
 if (VAR_12)
  goto err_kfree;


 VAR_10->muxc = FUNC_6(VAR_8->adapter, &VAR_8->dev, 1, 0, 0,
      VAR_7, ((void*)0));
 if (!VAR_10->muxc) {
  VAR_12 = -VAR_2;
  goto err_kfree;
 }
 VAR_10->muxc->priv = VAR_10;
 VAR_12 = FUNC_5(VAR_10->muxc, 0, 0, 0);
 if (VAR_12)
  goto err_kfree;


 FUNC_11(&VAR_10->fe.ops, &VAR_6, sizeof(struct dvb_frontend_ops));
 if (VAR_10->chip_id == 128)
  FUNC_14(VAR_10->fe.ops.info.name, "Montage Technology M88RS6000",
   sizeof(VAR_10->fe.ops.info.name));
 if (!VAR_11->attach_in_use)
  VAR_10->fe.ops.release = ((void*)0);
 VAR_10->fe.demodulator_priv = VAR_10;
 FUNC_7(VAR_8, VAR_10);


 VAR_11->get_dvb_frontend = VAR_4;
 VAR_11->get_i2c_adapter = VAR_5;
 return 0;
err_kfree:
 FUNC_8(VAR_10);
err:
 FUNC_2(&VAR_8->dev, "failed=%d\n", VAR_12);
 return VAR_12;
}
