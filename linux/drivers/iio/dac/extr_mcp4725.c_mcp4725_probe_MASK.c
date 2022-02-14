
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u8 ;
struct mcp4725_platform_data {scalar_t__ use_vref; scalar_t__ vref_buffered; } ;
struct mcp4725_data {int id; int ref_mode; int powerdown; int powerdown_mode; int dac_value; void* vdd_reg; void* vref_reg; struct i2c_client* client; } ;
struct TYPE_9__ {TYPE_2__* parent; } ;
struct iio_dev {int num_channels; int modes; int * channels; int * info; int name; TYPE_1__ dev; } ;
struct i2c_device_id {size_t driver_data; int name; } ;
struct TYPE_10__ {scalar_t__ of_node; } ;
struct i2c_client {TYPE_2__ dev; } ;
typedef enum chip_id { ____Placeholder_chip_id } chip_id ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (void*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (void*) ;
 int FUNC_2 (TYPE_2__*,char*) ;
 struct mcp4725_platform_data* FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,char*,int,int,int) ;
 struct iio_dev* FUNC_5 (TYPE_2__*,int) ;
 void* FUNC_6 (TYPE_2__*,char*) ;
 int FUNC_7 (struct i2c_client*,int*,int) ;
 int FUNC_8 (struct i2c_client*,struct iio_dev*) ;
 int FUNC_9 (struct iio_dev*) ;
 struct mcp4725_data* FUNC_10 (struct iio_dev*) ;
 int VAR_8 ;
 int FUNC_11 (TYPE_2__*,struct mcp4725_platform_data*) ;
 int FUNC_12 (struct iio_dev*) ;
 int * VAR_9 ;
 scalar_t__ FUNC_13 (TYPE_2__*) ;
 int FUNC_14 (void*) ;
 int FUNC_15 (void*) ;

__attribute__((used)) static int FUNC_16(struct i2c_client *VAR_10,
    const struct i2c_device_id *VAR_11)
{
 struct mcp4725_data *VAR_12;
 struct iio_dev *VAR_13;
 struct mcp4725_platform_data *VAR_14, VAR_15;
 u8 VAR_16[4];
 u8 VAR_17;
 u8 VAR_18;
 int VAR_19;

 VAR_13 = FUNC_5(&VAR_10->dev, sizeof(*VAR_12));
 if (VAR_13 == ((void*)0))
  return -VAR_1;
 VAR_12 = FUNC_10(VAR_13);
 FUNC_8(VAR_10, VAR_13);
 VAR_12->client = VAR_10;
 if (VAR_10->dev.of_node)
  VAR_12->id = (enum chip_id)FUNC_13(&VAR_10->dev);
 else
  VAR_12->id = VAR_11->driver_data;
 VAR_14 = FUNC_3(&VAR_10->dev);

 if (!VAR_14) {
  VAR_19 = FUNC_11(&VAR_10->dev, &VAR_15);
  if (VAR_19) {
   FUNC_2(&VAR_10->dev,
    "invalid platform or devicetree data");
   return VAR_19;
  }
  VAR_14 = &VAR_15;
 }

 if (VAR_12->id == VAR_3 && VAR_14->use_vref) {
  FUNC_2(&VAR_10->dev,
   "external reference is unavailable on MCP4725");
  return -VAR_0;
 }

 if (!VAR_14->use_vref && VAR_14->vref_buffered) {
  FUNC_2(&VAR_10->dev,
   "buffering is unavailable on the internal reference");
  return -VAR_0;
 }

 if (!VAR_14->use_vref)
  VAR_12->ref_mode = VAR_5;
 else
  VAR_12->ref_mode = VAR_14->vref_buffered ?
   VAR_6 :
   VAR_7;

 VAR_12->vdd_reg = FUNC_6(&VAR_10->dev, "vdd");
 if (FUNC_0(VAR_12->vdd_reg))
  return FUNC_1(VAR_12->vdd_reg);

 VAR_19 = FUNC_15(VAR_12->vdd_reg);
 if (VAR_19)
  return VAR_19;

 if (VAR_14->use_vref) {
  VAR_12->vref_reg = FUNC_6(&VAR_10->dev, "vref");
  if (FUNC_0(VAR_12->vref_reg)) {
   VAR_19 = FUNC_1(VAR_12->vref_reg);
   goto err_disable_vdd_reg;
  }

  VAR_19 = FUNC_15(VAR_12->vref_reg);
  if (VAR_19)
   goto err_disable_vdd_reg;
 }

 VAR_13->dev.parent = &VAR_10->dev;
 VAR_13->name = VAR_11->name;
 VAR_13->info = &VAR_8;
 VAR_13->channels = &VAR_9[VAR_11->driver_data];
 VAR_13->num_channels = 1;
 VAR_13->modes = VAR_2;


 VAR_19 = FUNC_7(VAR_10, VAR_16, VAR_12->id == VAR_3 ? 3 : 4);

 if (VAR_19 < 0) {
  FUNC_2(&VAR_10->dev, "failed to read DAC value");
  goto err_disable_vref_reg;
 }
 VAR_17 = (VAR_16[0] >> 1) & 0x3;
 VAR_12->powerdown = VAR_17 > 0;
 VAR_12->powerdown_mode = VAR_17 ? VAR_17 - 1 : 2;
 VAR_12->dac_value = (VAR_16[1] << 4) | (VAR_16[2] >> 4);
 if (VAR_12->id == VAR_4)
  VAR_18 = (VAR_16[3] >> 3) & 0x3;

 if (VAR_12->id == VAR_4 && VAR_18 != VAR_12->ref_mode) {
  FUNC_4(&VAR_10->dev,
   "voltage reference mode differs (conf: %u, eeprom: %u), setting %u",
   VAR_12->ref_mode, VAR_18, VAR_12->ref_mode);
  VAR_19 = FUNC_12(VAR_13);
  if (VAR_19 < 0)
   goto err_disable_vref_reg;
 }

 VAR_19 = FUNC_9(VAR_13);
 if (VAR_19)
  goto err_disable_vref_reg;

 return 0;

err_disable_vref_reg:
 if (VAR_12->vref_reg)
  FUNC_14(VAR_12->vref_reg);

err_disable_vdd_reg:
 FUNC_14(VAR_12->vdd_reg);

 return VAR_19;
}
