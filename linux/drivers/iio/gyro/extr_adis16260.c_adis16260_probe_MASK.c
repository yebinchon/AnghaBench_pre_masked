
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct spi_device_id {size_t driver_data; int name; } ;
struct spi_device {int dev; } ;
struct TYPE_3__ {int * parent; } ;
struct iio_dev {int modes; int num_channels; int channels; int * info; TYPE_1__ dev; int name; } ;
struct adis16260 {int adis; TYPE_2__* info; } ;
struct TYPE_4__ {int num_channels; int channels; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,struct iio_dev*) ;
 int FUNC_1 (int *,struct iio_dev*,struct spi_device*,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,struct iio_dev*,int *) ;
 struct iio_dev* FUNC_4 (int *,int) ;
 int FUNC_5 (struct iio_dev*) ;
 struct adis16260* FUNC_6 (struct iio_dev*) ;
 struct spi_device_id* FUNC_7 (struct spi_device*) ;
 int FUNC_8 (struct spi_device*,struct iio_dev*) ;

__attribute__((used)) static int FUNC_9(struct spi_device *VAR_6)
{
 const struct spi_device_id *VAR_7;
 struct adis16260 *VAR_8;
 struct iio_dev *VAR_9;
 int VAR_10;

 VAR_7 = FUNC_7(VAR_6);
 if (!VAR_7)
  return -VAR_0;


 VAR_9 = FUNC_4(&VAR_6->dev, sizeof(*VAR_8));
 if (!VAR_9)
  return -VAR_1;
 VAR_8 = FUNC_6(VAR_9);

 FUNC_8(VAR_6, VAR_9);

 VAR_8->info = &VAR_3[VAR_7->driver_data];

 VAR_9->name = VAR_7->name;
 VAR_9->dev.parent = &VAR_6->dev;
 VAR_9->info = &VAR_5;
 VAR_9->channels = VAR_8->info->channels;
 VAR_9->num_channels = VAR_8->info->num_channels;
 VAR_9->modes = VAR_2;

 VAR_10 = FUNC_1(&VAR_8->adis, VAR_9, VAR_6, &VAR_4);
 if (VAR_10)
  return VAR_10;

 VAR_10 = FUNC_3(&VAR_8->adis, VAR_9, ((void*)0));
 if (VAR_10)
  return VAR_10;


 VAR_10 = FUNC_2(&VAR_8->adis);
 if (VAR_10)
  goto error_cleanup_buffer_trigger;
 VAR_10 = FUNC_5(VAR_9);
 if (VAR_10)
  goto error_cleanup_buffer_trigger;

 return 0;

error_cleanup_buffer_trigger:
 FUNC_0(&VAR_8->adis, VAR_9);
 return VAR_10;
}
