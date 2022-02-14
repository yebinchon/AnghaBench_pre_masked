
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct spi_device_id {size_t driver_data; int name; } ;
struct TYPE_5__ {int of_node; } ;
struct spi_device {TYPE_2__ dev; } ;
struct TYPE_4__ {TYPE_2__* parent; } ;
struct iio_dev {int modes; int * info; int num_channels; int channels; int name; TYPE_1__ dev; } ;
struct adis16480 {int clk_freq; int ext_clk; int adis; TYPE_3__* chip_info; } ;
struct TYPE_6__ {int int_clk; int num_channels; int channels; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 TYPE_3__* VAR_2 ;
 int FUNC_1 (int ,struct adis16480*) ;
 int VAR_3 ;
 int FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (struct adis16480*,int ,int) ;
 int FUNC_4 (struct adis16480*) ;
 int VAR_4 ;
 int FUNC_5 (struct iio_dev*) ;
 int FUNC_6 (struct iio_dev*) ;
 int FUNC_7 (int *,struct iio_dev*) ;
 int FUNC_8 (int *,struct iio_dev*,struct spi_device*,int *) ;
 int FUNC_9 (int *,struct iio_dev*,int *) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 struct iio_dev* FUNC_12 (TYPE_2__*,int) ;
 int FUNC_13 (struct iio_dev*) ;
 struct adis16480* FUNC_14 (struct iio_dev*) ;
 struct spi_device_id* FUNC_15 (struct spi_device*) ;
 int FUNC_16 (struct spi_device*,struct iio_dev*) ;

__attribute__((used)) static int FUNC_17(struct spi_device *VAR_5)
{
 const struct spi_device_id *VAR_6 = FUNC_15(VAR_5);
 struct iio_dev *VAR_7;
 struct adis16480 *VAR_8;
 int VAR_9;

 VAR_7 = FUNC_12(&VAR_5->dev, sizeof(*VAR_8));
 if (VAR_7 == ((void*)0))
  return -VAR_0;

 FUNC_16(VAR_5, VAR_7);

 VAR_8 = FUNC_14(VAR_7);

 VAR_8->chip_info = &VAR_2[VAR_6->driver_data];
 VAR_7->dev.parent = &VAR_5->dev;
 VAR_7->name = FUNC_15(VAR_5)->name;
 VAR_7->channels = VAR_8->chip_info->channels;
 VAR_7->num_channels = VAR_8->chip_info->num_channels;
 VAR_7->info = &VAR_4;
 VAR_7->modes = VAR_1;

 VAR_9 = FUNC_8(&VAR_8->adis, VAR_7, VAR_5, &VAR_3);
 if (VAR_9)
  return VAR_9;

 VAR_9 = FUNC_1(VAR_5->dev.of_node, VAR_8);
 if (VAR_9)
  return VAR_9;

 VAR_9 = FUNC_4(VAR_8);
 if (VAR_9)
  return VAR_9;

 if (!FUNC_0(VAR_8->ext_clk)) {
  VAR_9 = FUNC_3(VAR_8, VAR_5->dev.of_node, 1);
  if (VAR_9)
   return VAR_9;

  VAR_8->clk_freq = FUNC_11(VAR_8->ext_clk);
  VAR_8->clk_freq *= 1000;
 } else {
  VAR_8->clk_freq = VAR_8->chip_info->int_clk;
 }

 VAR_9 = FUNC_9(&VAR_8->adis, VAR_7, ((void*)0));
 if (VAR_9)
  goto error_clk_disable_unprepare;

 VAR_9 = FUNC_5(VAR_7);
 if (VAR_9)
  goto error_cleanup_buffer;

 VAR_9 = FUNC_13(VAR_7);
 if (VAR_9)
  goto error_stop_device;

 FUNC_2(VAR_7);

 return 0;

error_stop_device:
 FUNC_6(VAR_7);
error_cleanup_buffer:
 FUNC_7(&VAR_8->adis, VAR_7);
error_clk_disable_unprepare:
 FUNC_10(VAR_8->ext_clk);
 return VAR_9;
}
