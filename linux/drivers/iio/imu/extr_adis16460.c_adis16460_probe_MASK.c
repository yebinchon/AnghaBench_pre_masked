
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct spi_device {int dev; } ;
struct TYPE_4__ {int * parent; } ;
struct iio_dev {int modes; int * info; int num_channels; int channels; int name; TYPE_1__ dev; } ;
struct adis16460 {int adis; TYPE_3__* chip_info; } ;
struct TYPE_6__ {int num_channels; int channels; } ;
struct TYPE_5__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (int *,int ) ;
 int VAR_4 ;
 int FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (int *,struct iio_dev*) ;
 int FUNC_4 (int *,struct iio_dev*,struct spi_device*,int *) ;
 int FUNC_5 (int *,struct iio_dev*,int *) ;
 struct iio_dev* FUNC_6 (int *,int) ;
 int FUNC_7 (struct iio_dev*) ;
 struct adis16460* FUNC_8 (struct iio_dev*) ;
 TYPE_2__* FUNC_9 (struct spi_device*) ;
 int FUNC_10 (struct spi_device*,struct iio_dev*) ;

__attribute__((used)) static int FUNC_11(struct spi_device *VAR_5)
{
 struct iio_dev *VAR_6;
 struct adis16460 *VAR_7;
 int VAR_8;

 VAR_6 = FUNC_6(&VAR_5->dev, sizeof(*VAR_7));
 if (VAR_6 == ((void*)0))
  return -VAR_0;

 FUNC_10(VAR_5, VAR_6);

 VAR_7 = FUNC_8(VAR_6);

 VAR_7->chip_info = &VAR_2;
 VAR_6->dev.parent = &VAR_5->dev;
 VAR_6->name = FUNC_9(VAR_5)->name;
 VAR_6->channels = VAR_7->chip_info->channels;
 VAR_6->num_channels = VAR_7->chip_info->num_channels;
 VAR_6->info = &VAR_4;
 VAR_6->modes = VAR_1;

 VAR_8 = FUNC_4(&VAR_7->adis, VAR_6, VAR_5, &VAR_3);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_5(&VAR_7->adis, VAR_6, ((void*)0));
 if (VAR_8)
  return VAR_8;

 FUNC_1(&VAR_7->adis, 0);

 VAR_8 = FUNC_2(VAR_6);
 if (VAR_8)
  goto error_cleanup_buffer;

 VAR_8 = FUNC_7(VAR_6);
 if (VAR_8)
  goto error_cleanup_buffer;

 FUNC_0(VAR_6);

 return 0;

error_cleanup_buffer:
 FUNC_3(&VAR_7->adis, VAR_6);
 return VAR_8;
}
