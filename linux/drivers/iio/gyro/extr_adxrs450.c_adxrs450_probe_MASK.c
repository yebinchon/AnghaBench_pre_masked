
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {TYPE_2__* driver; } ;
struct spi_device {TYPE_4__ dev; } ;
struct TYPE_6__ {TYPE_4__* parent; } ;
struct iio_dev {int name; int num_channels; int channels; int modes; int * info; TYPE_1__ dev; } ;
struct adxrs450_state {int buf_lock; struct spi_device* us; } ;
struct TYPE_8__ {size_t driver_data; } ;
struct TYPE_7__ {int name; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct iio_dev*) ;
 struct iio_dev* FUNC_2 (TYPE_4__*,int) ;
 int FUNC_3 (TYPE_4__*,struct iio_dev*) ;
 struct adxrs450_state* FUNC_4 (struct iio_dev*) ;
 int FUNC_5 (int *) ;
 TYPE_3__* FUNC_6 (struct spi_device*) ;
 int FUNC_7 (struct spi_device*,struct iio_dev*) ;

__attribute__((used)) static int FUNC_8(struct spi_device *VAR_4)
{
 int VAR_5;
 struct adxrs450_state *VAR_6;
 struct iio_dev *VAR_7;


 VAR_7 = FUNC_2(&VAR_4->dev, sizeof(*VAR_6));
 if (!VAR_7)
  return -VAR_0;
 VAR_6 = FUNC_4(VAR_7);
 VAR_6->us = VAR_4;
 FUNC_5(&VAR_6->buf_lock);

 FUNC_7(VAR_4, VAR_7);

 VAR_7->dev.parent = &VAR_4->dev;
 VAR_7->info = &VAR_3;
 VAR_7->modes = VAR_1;
 VAR_7->channels =
  VAR_2[FUNC_6(VAR_4)->driver_data];
 VAR_7->num_channels = FUNC_0(VAR_2);
 VAR_7->name = VAR_4->dev.driver->name;

 VAR_5 = FUNC_3(&VAR_4->dev, VAR_7);
 if (VAR_5)
  return VAR_5;


 VAR_5 = FUNC_1(VAR_7);
 if (VAR_5)
  return VAR_5;

 return 0;
}
