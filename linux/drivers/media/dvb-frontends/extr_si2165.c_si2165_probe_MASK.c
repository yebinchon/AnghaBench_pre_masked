
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_9__ {int name; } ;
struct TYPE_11__ {TYPE_2__ info; int * delsys; int * release; } ;
struct TYPE_10__ {TYPE_4__ ops; struct si2165_state* demodulator_priv; } ;
struct TYPE_8__ {scalar_t__ chip_mode; int ref_freq_hz; int inversion; int i2c_addr; } ;
struct si2165_state {scalar_t__ chip_revcode; scalar_t__ chip_type; int has_dvbt; int has_dvbc; TYPE_3__ fe; struct i2c_client* client; TYPE_1__ config; int regmap; } ;
struct si2165_platform_data {scalar_t__ chip_mode; int ref_freq_hz; TYPE_3__** fe; int inversion; } ;
struct regmap_config {int reg_bits; int val_bits; int max_register; } ;
struct i2c_device_id {int dummy; } ;
struct TYPE_12__ {struct si2165_platform_data* platform_data; } ;
struct i2c_client {TYPE_5__ dev; int addr; } ;
struct dvb_frontend_ops {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (TYPE_5__*,char*,int) ;
 int FUNC_3 (TYPE_5__*,char*,int,...) ;
 int FUNC_4 (TYPE_5__*,char*,char const*,char,int,char) ;
 int FUNC_5 (struct i2c_client*,struct regmap_config const*) ;
 int FUNC_6 (struct i2c_client*,struct si2165_state*) ;
 int FUNC_7 (struct si2165_state*) ;
 struct si2165_state* FUNC_8 (int,int ) ;
 int FUNC_9 (TYPE_4__*,int *,int) ;
 int VAR_10 ;
 int FUNC_10 (struct si2165_state*,int ,scalar_t__*) ;
 int FUNC_11 (struct si2165_state*,int ,scalar_t__) ;
 int FUNC_12 (int ,char const*,int) ;

__attribute__((used)) static int FUNC_13(struct i2c_client *VAR_11,
   const struct i2c_device_id *VAR_12)
{
 struct si2165_state *VAR_13 = ((void*)0);
 struct si2165_platform_data *VAR_14 = VAR_11->dev.platform_data;
 int VAR_15;
 int VAR_16 = 0;
 u8 VAR_17;
 char VAR_18;
 const char *VAR_19;
 static const struct regmap_config VAR_20 = {
  .reg_bits = 16,
  .val_bits = 8,
  .max_register = 0x08ff,
 };


 VAR_13 = FUNC_8(sizeof(*VAR_13), VAR_3);
 if (!VAR_13) {
  VAR_16 = -VAR_2;
  goto error;
 }


 VAR_13->regmap = FUNC_5(VAR_11, &VAR_20);
 if (FUNC_0(VAR_13->regmap)) {
  VAR_16 = FUNC_1(VAR_13->regmap);
  goto error;
 }


 VAR_13->client = VAR_11;
 VAR_13->config.i2c_addr = VAR_11->addr;
 VAR_13->config.chip_mode = VAR_14->chip_mode;
 VAR_13->config.ref_freq_hz = VAR_14->ref_freq_hz;
 VAR_13->config.inversion = VAR_14->inversion;

 if (VAR_13->config.ref_freq_hz < 4000000 ||
     VAR_13->config.ref_freq_hz > 27000000) {
  FUNC_3(&VAR_13->client->dev, "ref_freq of %d Hz not supported by this driver\n",
   VAR_13->config.ref_freq_hz);
  VAR_16 = -VAR_0;
  goto error;
 }


 FUNC_9(&VAR_13->fe.ops, &VAR_10,
        sizeof(struct dvb_frontend_ops));
 VAR_13->fe.ops.release = ((void*)0);
 VAR_13->fe.demodulator_priv = VAR_13;
 FUNC_6(VAR_11, VAR_13);


 VAR_16 = FUNC_11(VAR_13, VAR_4, VAR_13->config.chip_mode);
 if (VAR_16 < 0)
  goto nodev_error;

 VAR_16 = FUNC_10(VAR_13, VAR_4, &VAR_17);
 if (VAR_16 < 0)
  goto nodev_error;
 if (VAR_17 != VAR_13->config.chip_mode)
  goto nodev_error;

 VAR_16 = FUNC_10(VAR_13, VAR_5, &VAR_13->chip_revcode);
 if (VAR_16 < 0)
  goto nodev_error;

 VAR_16 = FUNC_10(VAR_13, VAR_6, &VAR_13->chip_type);
 if (VAR_16 < 0)
  goto nodev_error;


 VAR_16 = FUNC_11(VAR_13, VAR_4, VAR_7);
 if (VAR_16 < 0)
  goto nodev_error;

 if (VAR_13->chip_revcode < 26)
  VAR_18 = 'A' + VAR_13->chip_revcode;
 else
  VAR_18 = '?';

 switch (VAR_13->chip_type) {
 case 0x06:
  VAR_19 = "Si2161";
  VAR_13->has_dvbt = 1;
  break;
 case 0x07:
  VAR_19 = "Si2165";
  VAR_13->has_dvbt = 1;
  VAR_13->has_dvbc = 1;
  break;
 default:
  FUNC_3(&VAR_13->client->dev, "Unsupported Silicon Labs chip (type %d, rev %d)\n",
   VAR_13->chip_type, VAR_13->chip_revcode);
  goto nodev_error;
 }

 FUNC_4(&VAR_13->client->dev,
   "Detected Silicon Labs %s-%c (type %d, rev %d)\n",
  VAR_19, VAR_18, VAR_13->chip_type,
  VAR_13->chip_revcode);

 FUNC_12(VAR_13->fe.ops.info.name, VAR_19,
  sizeof(VAR_13->fe.ops.info.name));

 VAR_15 = 0;
 if (VAR_13->has_dvbt) {
  VAR_13->fe.ops.delsys[VAR_15++] = VAR_9;
  FUNC_12(VAR_13->fe.ops.info.name, " DVB-T",
   sizeof(VAR_13->fe.ops.info.name));
 }
 if (VAR_13->has_dvbc) {
  VAR_13->fe.ops.delsys[VAR_15++] = VAR_8;
  FUNC_12(VAR_13->fe.ops.info.name, " DVB-C",
   sizeof(VAR_13->fe.ops.info.name));
 }


 *VAR_14->fe = &VAR_13->fe;

 return 0;

nodev_error:
 VAR_16 = -VAR_1;
error:
 FUNC_7(VAR_13);
 FUNC_2(&VAR_11->dev, "failed=%d\n", VAR_16);
 return VAR_16;
}
