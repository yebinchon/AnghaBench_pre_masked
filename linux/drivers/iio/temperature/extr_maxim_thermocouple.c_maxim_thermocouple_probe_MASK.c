
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spi_device_id {size_t driver_data; } ;
struct spi_device {int dev; } ;
struct maxim_thermocouple_data {struct maxim_thermocouple_chip const* chip; struct spi_device* spi; } ;
struct maxim_thermocouple_chip {int num_channels; int scan_masks; int channels; } ;
struct TYPE_2__ {int * parent; } ;
struct iio_dev {TYPE_1__ dev; int modes; int num_channels; int available_scan_masks; int channels; int name; int * info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct iio_dev* FUNC_0 (int *,int) ;
 int FUNC_1 (int *,struct iio_dev*) ;
 int FUNC_2 (int *,struct iio_dev*,int *,int ,int *) ;
 struct maxim_thermocouple_data* FUNC_3 (struct iio_dev*) ;
 struct maxim_thermocouple_chip* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct spi_device_id* FUNC_4 (struct spi_device*) ;

__attribute__((used)) static int FUNC_5(struct spi_device *VAR_6)
{
 const struct spi_device_id *VAR_7 = FUNC_4(VAR_6);
 struct iio_dev *VAR_8;
 struct maxim_thermocouple_data *VAR_9;
 const struct maxim_thermocouple_chip *VAR_10 =
   &VAR_3[VAR_7->driver_data];
 int VAR_11;

 VAR_8 = FUNC_0(&VAR_6->dev, sizeof(*VAR_9));
 if (!VAR_8)
  return -VAR_0;

 VAR_8->info = &VAR_4;
 VAR_8->name = VAR_2;
 VAR_8->channels = VAR_10->channels;
 VAR_8->available_scan_masks = VAR_10->scan_masks;
 VAR_8->num_channels = VAR_10->num_channels;
 VAR_8->modes = VAR_1;
 VAR_8->dev.parent = &VAR_6->dev;

 VAR_9 = FUNC_3(VAR_8);
 VAR_9->spi = VAR_6;
 VAR_9->chip = VAR_10;

 VAR_11 = FUNC_2(&VAR_6->dev,
    VAR_8, ((void*)0),
    VAR_5, ((void*)0));
 if (VAR_11)
  return VAR_11;

 return FUNC_1(&VAR_6->dev, VAR_8);
}
