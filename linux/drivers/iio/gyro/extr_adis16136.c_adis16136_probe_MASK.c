
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spi_device_id {size_t driver_data; int name; } ;
struct spi_device {int dev; } ;
struct TYPE_2__ {int * parent; } ;
struct iio_dev {int modes; int * info; int num_channels; int channels; int name; TYPE_1__ dev; } ;
struct adis16136 {int adis; int * chip_info; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct iio_dev*) ;
 int VAR_5 ;
 int FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (int *,struct iio_dev*) ;
 int FUNC_5 (int *,struct iio_dev*,struct spi_device*,int *) ;
 int FUNC_6 (int *,struct iio_dev*,int *) ;
 struct iio_dev* FUNC_7 (int *,int) ;
 int FUNC_8 (struct iio_dev*) ;
 struct adis16136* FUNC_9 (struct iio_dev*) ;
 struct spi_device_id* FUNC_10 (struct spi_device*) ;
 int FUNC_11 (struct spi_device*,struct iio_dev*) ;

__attribute__((used)) static int FUNC_12(struct spi_device *VAR_6)
{
 const struct spi_device_id *VAR_7 = FUNC_10(VAR_6);
 struct adis16136 *VAR_8;
 struct iio_dev *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_7(&VAR_6->dev, sizeof(*VAR_8));
 if (VAR_9 == ((void*)0))
  return -VAR_0;

 FUNC_11(VAR_6, VAR_9);

 VAR_8 = FUNC_9(VAR_9);

 VAR_8->chip_info = &VAR_3[VAR_7->driver_data];
 VAR_9->dev.parent = &VAR_6->dev;
 VAR_9->name = FUNC_10(VAR_6)->name;
 VAR_9->channels = VAR_2;
 VAR_9->num_channels = FUNC_0(VAR_2);
 VAR_9->info = &VAR_5;
 VAR_9->modes = VAR_1;

 VAR_10 = FUNC_5(&VAR_8->adis, VAR_9, VAR_6, &VAR_4);
 if (VAR_10)
  return VAR_10;

 VAR_10 = FUNC_6(&VAR_8->adis, VAR_9, ((void*)0));
 if (VAR_10)
  return VAR_10;

 VAR_10 = FUNC_2(VAR_9);
 if (VAR_10)
  goto error_cleanup_buffer;

 VAR_10 = FUNC_8(VAR_9);
 if (VAR_10)
  goto error_stop_device;

 FUNC_1(VAR_9);

 return 0;

error_stop_device:
 FUNC_3(VAR_9);
error_cleanup_buffer:
 FUNC_4(&VAR_8->adis, VAR_9);
 return VAR_10;
}
