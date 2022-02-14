
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct regulator {int dummy; } ;
struct max1363_state {int vref_uv; struct regulator* reg; struct regulator* vref; struct i2c_client* client; TYPE_2__* chip_info; int recv; int send; } ;
struct TYPE_9__ {int of_node; TYPE_3__* parent; } ;
struct iio_dev {int modes; int info; int num_channels; int channels; int name; TYPE_1__ dev; } ;
struct i2c_device_id {size_t driver_data; int name; } ;
struct TYPE_11__ {int of_node; int platform_data; } ;
struct i2c_client {scalar_t__ irq; TYPE_3__ dev; int adapter; } ;
struct TYPE_10__ {int int_vref_mv; int bits; int info; int num_channels; int channels; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (struct regulator*) ;
 int FUNC_1 (struct regulator*) ;
 struct iio_dev* FUNC_2 (TYPE_3__*,int) ;
 struct regulator* FUNC_3 (TYPE_3__*,char*) ;
 struct regulator* FUNC_4 (TYPE_3__*,char*) ;
 int FUNC_5 (TYPE_3__*,scalar_t__,int *,int *,int,char*,struct iio_dev*) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_7 (struct i2c_client*,struct iio_dev*) ;
 int FUNC_8 (struct iio_dev*) ;
 int FUNC_9 (struct iio_dev*,int ) ;
 int FUNC_10 (struct iio_dev*) ;
 struct max1363_state* FUNC_11 (struct iio_dev*) ;
 int FUNC_12 (struct iio_dev*) ;
 int FUNC_13 (struct iio_dev*,int *,int *,int *) ;
 int FUNC_14 (struct iio_dev*) ;
 TYPE_2__* VAR_10 ;
 int VAR_11 ;
 int FUNC_15 (struct max1363_state*) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 TYPE_2__* FUNC_16 (TYPE_3__*) ;
 int FUNC_17 (struct regulator*) ;
 int FUNC_18 (struct regulator*) ;
 int FUNC_19 (struct regulator*) ;

__attribute__((used)) static int FUNC_20(struct i2c_client *VAR_15,
    const struct i2c_device_id *VAR_16)
{
 int VAR_17;
 struct max1363_state *VAR_18;
 struct iio_dev *VAR_19;
 struct regulator *VAR_20;

 VAR_19 = FUNC_2(&VAR_15->dev,
       sizeof(struct max1363_state));
 if (!VAR_19)
  return -VAR_1;

 VAR_19->dev.of_node = VAR_15->dev.of_node;
 VAR_17 = FUNC_9(VAR_19, VAR_15->dev.platform_data);
 if (VAR_17 < 0)
  return VAR_17;

 VAR_18 = FUNC_11(VAR_19);

 VAR_18->reg = FUNC_3(&VAR_15->dev, "vcc");
 if (FUNC_0(VAR_18->reg)) {
  VAR_17 = FUNC_1(VAR_18->reg);
  goto error_unregister_map;
 }

 VAR_17 = FUNC_18(VAR_18->reg);
 if (VAR_17)
  goto error_unregister_map;


 FUNC_7(VAR_15, VAR_19);

 VAR_18->chip_info = FUNC_16(&VAR_15->dev);
 if (!VAR_18->chip_info)
  VAR_18->chip_info = &VAR_10[VAR_16->driver_data];
 VAR_18->client = VAR_15;

 VAR_18->vref_uv = VAR_18->chip_info->int_vref_mv * 1000;
 VAR_20 = FUNC_4(&VAR_15->dev, "vref");
 if (!FUNC_0(VAR_20)) {
  int VAR_21;

  VAR_17 = FUNC_18(VAR_20);
  if (VAR_17)
   goto error_disable_reg;
  VAR_18->vref = VAR_20;
  VAR_21 = FUNC_19(VAR_20);
  if (VAR_21 <= 0) {
   VAR_17 = -VAR_0;
   goto error_disable_reg;
  }
  VAR_18->vref_uv = VAR_21;
 }

 if (FUNC_6(VAR_15->adapter, VAR_3)) {
  VAR_18->send = VAR_9;
  VAR_18->recv = VAR_8;
 } else if (FUNC_6(VAR_15->adapter, VAR_4)
   && VAR_18->chip_info->bits == 8) {
  VAR_18->send = VAR_13;
  VAR_18->recv = VAR_12;
 } else {
  VAR_17 = -VAR_2;
  goto error_disable_reg;
 }

 VAR_17 = FUNC_14(VAR_19);
 if (VAR_17)
  goto error_disable_reg;


 VAR_19->dev.parent = &VAR_15->dev;
 VAR_19->dev.of_node = VAR_15->dev.of_node;
 VAR_19->name = VAR_16->name;
 VAR_19->channels = VAR_18->chip_info->channels;
 VAR_19->num_channels = VAR_18->chip_info->num_channels;
 VAR_19->info = VAR_18->chip_info->info;
 VAR_19->modes = VAR_5;
 VAR_17 = FUNC_15(VAR_18);
 if (VAR_17 < 0)
  goto error_disable_reg;

 VAR_17 = FUNC_13(VAR_19, ((void*)0),
  &VAR_14, ((void*)0));
 if (VAR_17)
  goto error_disable_reg;

 if (VAR_15->irq) {
  VAR_17 = FUNC_5(&VAR_15->dev, VAR_18->client->irq,
        ((void*)0),
        &VAR_11,
        VAR_7 | VAR_6,
        "max1363_event",
        VAR_19);

  if (VAR_17)
   goto error_uninit_buffer;
 }

 VAR_17 = FUNC_8(VAR_19);
 if (VAR_17 < 0)
  goto error_uninit_buffer;

 return 0;

error_uninit_buffer:
 FUNC_12(VAR_19);
error_disable_reg:
 if (VAR_18->vref)
  FUNC_17(VAR_18->vref);
 FUNC_17(VAR_18->reg);
error_unregister_map:
 FUNC_10(VAR_19);
 return VAR_17;
}
