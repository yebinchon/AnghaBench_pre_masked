
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_8__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct spi_device_id {size_t driver_data; int name; } ;
struct TYPE_10__ {int of_node; } ;
struct spi_device {TYPE_2__ dev; } ;
struct TYPE_9__ {int of_node; TYPE_2__* parent; } ;
struct iio_dev {int * info; int num_channels; int channels; int modes; TYPE_1__ dev; int name; } ;
struct ads124s_private {int lock; TYPE_8__* chip_info; struct spi_device* spi; int reset_gpio; } ;
struct TYPE_11__ {int num_channels; int channels; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 TYPE_8__* VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct iio_dev*) ;
 int VAR_5 ;
 int FUNC_2 (TYPE_2__*,char*) ;
 int FUNC_3 (TYPE_2__*,char*) ;
 int FUNC_4 (TYPE_2__*,char*,int ) ;
 struct iio_dev* FUNC_5 (TYPE_2__*,int) ;
 int FUNC_6 (TYPE_2__*,struct iio_dev*) ;
 int FUNC_7 (TYPE_2__*,struct iio_dev*,int *,int ,int *) ;
 struct ads124s_private* FUNC_8 (struct iio_dev*) ;
 int FUNC_9 (int *) ;
 struct spi_device_id* FUNC_10 (struct spi_device*) ;
 int FUNC_11 (struct spi_device*,struct iio_dev*) ;

__attribute__((used)) static int FUNC_12(struct spi_device *VAR_6)
{
 struct ads124s_private *VAR_7;
 struct iio_dev *VAR_8;
 const struct spi_device_id *VAR_9 = FUNC_10(VAR_6);
 int VAR_10;

 VAR_8 = FUNC_5(&VAR_6->dev, sizeof(*VAR_7));
 if (VAR_8 == ((void*)0))
  return -VAR_0;

 VAR_7 = FUNC_8(VAR_8);

 VAR_7->reset_gpio = FUNC_4(&VAR_6->dev,
         "reset", VAR_1);
 if (FUNC_0(VAR_7->reset_gpio))
  FUNC_3(&VAR_6->dev, "Reset GPIO not defined\n");

 VAR_7->chip_info = &VAR_3[VAR_9->driver_data];

 FUNC_11(VAR_6, VAR_8);

 VAR_7->spi = VAR_6;

 VAR_8->name = VAR_9->name;
 VAR_8->dev.parent = &VAR_6->dev;
 VAR_8->dev.of_node = VAR_6->dev.of_node;
 VAR_8->modes = VAR_2;
 VAR_8->channels = VAR_7->chip_info->channels;
 VAR_8->num_channels = VAR_7->chip_info->num_channels;
 VAR_8->info = &VAR_4;

 FUNC_9(&VAR_7->lock);

 VAR_10 = FUNC_7(&VAR_6->dev, VAR_8, ((void*)0),
           VAR_5, ((void*)0));
 if (VAR_10) {
  FUNC_2(&VAR_6->dev, "iio triggered buffer setup failed\n");
  return VAR_10;
 }

 FUNC_1(VAR_8);

 return FUNC_6(&VAR_6->dev, VAR_8);
}
