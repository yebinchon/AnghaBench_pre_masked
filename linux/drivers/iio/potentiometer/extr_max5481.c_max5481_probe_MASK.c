
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spi_device_id {size_t driver_data; int name; } ;
struct spi_device {int dev; } ;
struct max5481_data {int * cfg; struct spi_device* spi; } ;
struct TYPE_2__ {int * parent; } ;
struct iio_dev {int num_channels; int channels; int * info; int modes; TYPE_1__ dev; int name; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,struct iio_dev*) ;
 struct iio_dev* FUNC_2 (int *,int) ;
 int FUNC_3 (struct iio_dev*) ;
 struct max5481_data* FUNC_4 (struct iio_dev*) ;
 int * VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (struct max5481_data*,int ,int ) ;
 int * FUNC_6 (int *) ;
 struct spi_device_id* FUNC_7 (struct spi_device*) ;

__attribute__((used)) static int FUNC_8(struct spi_device *VAR_6)
{
 struct iio_dev *VAR_7;
 struct max5481_data *VAR_8;
 const struct spi_device_id *VAR_9 = FUNC_7(VAR_6);
 int VAR_10;

 VAR_7 = FUNC_2(&VAR_6->dev, sizeof(*VAR_8));
 if (!VAR_7)
  return -VAR_0;

 FUNC_1(&VAR_6->dev, VAR_7);
 VAR_8 = FUNC_4(VAR_7);

 VAR_8->spi = VAR_6;

 VAR_8->cfg = FUNC_6(&VAR_6->dev);
 if (!VAR_8->cfg)
  VAR_8->cfg = &VAR_3[VAR_9->driver_data];

 VAR_7->name = VAR_9->name;
 VAR_7->dev.parent = &VAR_6->dev;
 VAR_7->modes = VAR_1;


 VAR_7->info = &VAR_5;
 VAR_7->channels = VAR_4;
 VAR_7->num_channels = FUNC_0(VAR_4);


 VAR_10 = FUNC_5(VAR_8, VAR_2, 0);
 if (VAR_10 < 0)
  return VAR_10;

 return FUNC_3(VAR_7);
}
