
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {struct i2c_client* demodulator_priv; int ops; } ;
struct si2168_dev {int chip_id; int version; int spectral_inversion; int ts_clock_gapped; int ts_clock_inv; int ts_mode; TYPE_1__ fe; TYPE_2__* muxc; int firmware_name; int i2c_mutex; } ;
struct si2168_config {int spectral_inversion; int ts_clock_gapped; int ts_clock_inv; int ts_mode; TYPE_1__** fe; int * i2c_adapter; } ;
struct si2168_cmd {int* args; } ;
struct i2c_device_id {int dummy; } ;
struct TYPE_10__ {struct si2168_config* platform_data; } ;
struct i2c_client {TYPE_3__ dev; int adapter; } ;
struct dvb_frontend_ops {int dummy; } ;
struct TYPE_9__ {int * adapter; struct i2c_client* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;




 int VAR_7 ;
 int FUNC_0 (struct si2168_cmd*,char*,int,int) ;
 int FUNC_1 (TYPE_3__*,char*,...) ;
 int FUNC_2 (TYPE_3__*,char*,int,int,int,...) ;
 int FUNC_3 (TYPE_3__*,char*,int) ;
 int FUNC_4 (TYPE_2__*,int ,int ,int ) ;
 TYPE_2__* FUNC_5 (int ,TYPE_3__*,int,int ,int ,int ,int ) ;
 int FUNC_6 (struct i2c_client*,struct si2168_dev*) ;
 int FUNC_7 (struct si2168_dev*) ;
 struct si2168_dev* FUNC_8 (int,int ) ;
 int FUNC_9 (int *,int *,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct i2c_client*,struct si2168_cmd*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static int FUNC_12(struct i2c_client *VAR_11,
  const struct i2c_device_id *VAR_12)
{
 struct si2168_config *VAR_13 = VAR_11->dev.platform_data;
 struct si2168_dev *VAR_14;
 int VAR_15;
 struct si2168_cmd VAR_16;

 FUNC_1(&VAR_11->dev, "\n");

 VAR_14 = FUNC_8(sizeof(*VAR_14), VAR_2);
 if (!VAR_14) {
  VAR_15 = -VAR_1;
  goto err;
 }

 FUNC_6(VAR_11, VAR_14);
 FUNC_10(&VAR_14->i2c_mutex);


 FUNC_0(&VAR_16, "\xc0\x12\x00\x0c\x00\x0d\x16\x00\x00\x00\x00\x00\x00",
   13, 0);
 VAR_15 = FUNC_11(VAR_11, &VAR_16);
 if (VAR_15)
  goto err_kfree;


 FUNC_0(&VAR_16, "\xc0\x06\x01\x0f\x00\x20\x20\x01", 8, 1);
 VAR_15 = FUNC_11(VAR_11, &VAR_16);
 if (VAR_15)
  goto err_kfree;


 FUNC_0(&VAR_16, "\x02", 1, 13);
 VAR_15 = FUNC_11(VAR_11, &VAR_16);
 if (VAR_15)
  goto err_kfree;

 VAR_14->chip_id = VAR_16.args[1] << 24 | VAR_16.args[2] << 16 |
         VAR_16.args[3] << 8 | VAR_16.args[4] << 0;

 switch (VAR_14->chip_id) {
 case 131:
  VAR_14->firmware_name = VAR_4;
  break;
 case 130:
  VAR_14->firmware_name = VAR_5;
  break;
 case 129:
  VAR_14->firmware_name = VAR_6;
  break;
 case 128:
  VAR_14->firmware_name = VAR_7;
  break;
 default:
  FUNC_1(&VAR_11->dev, "unknown chip version Si21%d-%c%c%c\n",
   VAR_16.args[2], VAR_16.args[1], VAR_16.args[3], VAR_16.args[4]);
  VAR_15 = -VAR_0;
  goto err_kfree;
 }

 VAR_14->version = (VAR_16.args[1]) << 24 | (VAR_16.args[3] - '0') << 16 |
         (VAR_16.args[4] - '0') << 8 | (VAR_16.args[5]) << 0;


 VAR_14->muxc = FUNC_5(VAR_11->adapter, &VAR_11->dev,
      1, 0, VAR_3,
      VAR_10, VAR_8);
 if (!VAR_14->muxc) {
  VAR_15 = -VAR_1;
  goto err_kfree;
 }
 VAR_14->muxc->priv = VAR_11;
 VAR_15 = FUNC_4(VAR_14->muxc, 0, 0, 0);
 if (VAR_15)
  goto err_kfree;


 FUNC_9(&VAR_14->fe.ops, &VAR_9, sizeof(struct dvb_frontend_ops));
 VAR_14->fe.demodulator_priv = VAR_11;
 *VAR_13->i2c_adapter = VAR_14->muxc->adapter[0];
 *VAR_13->fe = &VAR_14->fe;
 VAR_14->ts_mode = VAR_13->ts_mode;
 VAR_14->ts_clock_inv = VAR_13->ts_clock_inv;
 VAR_14->ts_clock_gapped = VAR_13->ts_clock_gapped;
 VAR_14->spectral_inversion = VAR_13->spectral_inversion;

 FUNC_2(&VAR_11->dev, "Silicon Labs Si2168-%c%d%d successfully identified\n",
   VAR_14->version >> 24 & 0xff, VAR_14->version >> 16 & 0xff,
   VAR_14->version >> 8 & 0xff);
 FUNC_2(&VAR_11->dev, "firmware version: %c %d.%d.%d\n",
   VAR_14->version >> 24 & 0xff, VAR_14->version >> 16 & 0xff,
   VAR_14->version >> 8 & 0xff, VAR_14->version >> 0 & 0xff);

 return 0;
err_kfree:
 FUNC_7(VAR_14);
err:
 FUNC_3(&VAR_11->dev, "probe failed = %d\n", VAR_15);
 return VAR_15;
}
