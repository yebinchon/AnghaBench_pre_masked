
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct spi_device_id {size_t driver_data; } ;
struct TYPE_6__ {TYPE_1__* driver; } ;
struct spi_device {TYPE_3__ dev; } ;
struct TYPE_5__ {TYPE_3__* parent; } ;
struct iio_dev {int modes; int * info; TYPE_2__ dev; int num_channels; int channels; int name; } ;
struct adis16080_state {int * info; struct spi_device* us; } ;
struct TYPE_4__ {int name; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 struct iio_dev* FUNC_1 (TYPE_3__*,int) ;
 int FUNC_2 (struct iio_dev*) ;
 struct adis16080_state* FUNC_3 (struct iio_dev*) ;
 struct spi_device_id* FUNC_4 (struct spi_device*) ;
 int FUNC_5 (struct spi_device*,struct iio_dev*) ;

__attribute__((used)) static int FUNC_6(struct spi_device *VAR_5)
{
 const struct spi_device_id *VAR_6 = FUNC_4(VAR_5);
 struct adis16080_state *VAR_7;
 struct iio_dev *VAR_8;


 VAR_8 = FUNC_1(&VAR_5->dev, sizeof(*VAR_7));
 if (!VAR_8)
  return -VAR_0;
 VAR_7 = FUNC_3(VAR_8);

 FUNC_5(VAR_5, VAR_8);


 VAR_7->us = VAR_5;
 VAR_7->info = &VAR_3[VAR_6->driver_data];

 VAR_8->name = VAR_5->dev.driver->name;
 VAR_8->channels = VAR_2;
 VAR_8->num_channels = FUNC_0(VAR_2);
 VAR_8->dev.parent = &VAR_5->dev;
 VAR_8->info = &VAR_4;
 VAR_8->modes = VAR_1;

 return FUNC_2(VAR_8);
}
