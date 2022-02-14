
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spi_device_id {int name; int driver_data; } ;
struct spi_device {int dev; } ;
struct max5487_data {struct spi_device* spi; int kohms; } ;
struct TYPE_2__ {int * parent; } ;
struct iio_dev {int num_channels; int channels; int modes; TYPE_1__ dev; int name; int * info; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,struct iio_dev*) ;
 struct iio_dev* FUNC_2 (int *,int) ;
 int FUNC_3 (struct iio_dev*) ;
 struct max5487_data* FUNC_4 (struct iio_dev*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (struct spi_device*,int ) ;
 struct spi_device_id* FUNC_6 (struct spi_device*) ;

__attribute__((used)) static int FUNC_7(struct spi_device *VAR_5)
{
 struct iio_dev *VAR_6;
 struct max5487_data *VAR_7;
 const struct spi_device_id *VAR_8 = FUNC_6(VAR_5);
 int VAR_9;

 VAR_6 = FUNC_2(&VAR_5->dev, sizeof(*VAR_7));
 if (!VAR_6)
  return -VAR_0;

 FUNC_1(&VAR_5->dev, VAR_6);
 VAR_7 = FUNC_4(VAR_6);

 VAR_7->spi = VAR_5;
 VAR_7->kohms = VAR_8->driver_data;

 VAR_6->info = &VAR_4;
 VAR_6->name = VAR_8->name;
 VAR_6->dev.parent = &VAR_5->dev;
 VAR_6->modes = VAR_1;
 VAR_6->channels = VAR_3;
 VAR_6->num_channels = FUNC_0(VAR_3);


 VAR_9 = FUNC_5(VAR_7->spi, VAR_2);
 if (VAR_9 < 0)
  return VAR_9;

 return FUNC_3(VAR_6);
}
