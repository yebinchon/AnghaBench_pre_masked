
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int of_node; TYPE_3__* parent; } ;
struct iio_dev {int num_channels; int channels; int * info; int modes; int name; TYPE_2__ dev; } ;
struct i2c_device_id {size_t driver_data; } ;
struct TYPE_11__ {int of_node; TYPE_1__* driver; } ;
struct i2c_client {TYPE_3__ dev; int adapter; } ;
struct adcxx1c_model {int channels; int bits; } ;
struct adc081c {int ref; int bits; struct i2c_client* i2c; } ;
struct acpi_device_id {size_t driver_data; } ;
struct TYPE_9__ {int acpi_match_table; } ;


 scalar_t__ FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct acpi_device_id* FUNC_3 (int ,TYPE_3__*) ;
 int VAR_6 ;
 int VAR_7 ;
 struct adcxx1c_model* VAR_8 ;
 int FUNC_4 (TYPE_3__*,char*) ;
 int FUNC_5 (TYPE_3__*) ;
 struct iio_dev* FUNC_6 (TYPE_3__*,int) ;
 int FUNC_7 (TYPE_3__*,char*) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (struct i2c_client*,struct iio_dev*) ;
 int FUNC_10 (struct iio_dev*) ;
 struct adc081c* FUNC_11 (struct iio_dev*) ;
 int FUNC_12 (struct iio_dev*) ;
 int FUNC_13 (struct iio_dev*,int *,int ,int *) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;

__attribute__((used)) static int FUNC_16(struct i2c_client *VAR_9,
    const struct i2c_device_id *VAR_10)
{
 struct iio_dev *VAR_11;
 struct adc081c *VAR_12;
 struct adcxx1c_model *VAR_13;
 int VAR_14;

 if (!FUNC_8(VAR_9->adapter, VAR_4))
  return -VAR_3;

 if (FUNC_0(&VAR_9->dev)) {
  const struct acpi_device_id *VAR_15;

  VAR_15 = FUNC_3(VAR_9->dev.driver->acpi_match_table,
       &VAR_9->dev);
  if (!VAR_15)
   return -VAR_1;
  VAR_13 = &VAR_8[VAR_15->driver_data];
 } else {
  VAR_13 = &VAR_8[VAR_10->driver_data];
 }

 VAR_11 = FUNC_6(&VAR_9->dev, sizeof(*VAR_12));
 if (!VAR_11)
  return -VAR_2;

 VAR_12 = FUNC_11(VAR_11);
 VAR_12->i2c = VAR_9;
 VAR_12->bits = VAR_13->bits;

 VAR_12->ref = FUNC_7(&VAR_9->dev, "vref");
 if (FUNC_1(VAR_12->ref))
  return FUNC_2(VAR_12->ref);

 VAR_14 = FUNC_15(VAR_12->ref);
 if (VAR_14 < 0)
  return VAR_14;

 VAR_11->dev.parent = &VAR_9->dev;
 VAR_11->dev.of_node = VAR_9->dev.of_node;
 VAR_11->name = FUNC_5(&VAR_9->dev);
 VAR_11->modes = VAR_5;
 VAR_11->info = &VAR_6;

 VAR_11->channels = VAR_13->channels;
 VAR_11->num_channels = VAR_0;

 VAR_14 = FUNC_13(VAR_11, ((void*)0), VAR_7, ((void*)0));
 if (VAR_14 < 0) {
  FUNC_4(&VAR_9->dev, "iio triggered buffer setup failed\n");
  goto err_regulator_disable;
 }

 VAR_14 = FUNC_10(VAR_11);
 if (VAR_14 < 0)
  goto err_buffer_cleanup;

 FUNC_9(VAR_9, VAR_11);

 return 0;

err_buffer_cleanup:
 FUNC_12(VAR_11);
err_regulator_disable:
 FUNC_14(VAR_12->ref);

 return VAR_14;
}
