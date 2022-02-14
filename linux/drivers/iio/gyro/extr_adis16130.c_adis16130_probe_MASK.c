
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* driver; } ;
struct spi_device {TYPE_3__ dev; } ;
struct TYPE_6__ {TYPE_3__* parent; } ;
struct iio_dev {int modes; int * info; TYPE_2__ dev; int num_channels; int channels; int name; } ;
struct adis16130_state {int buf_lock; struct spi_device* us; } ;
struct TYPE_5__ {int name; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct iio_dev* FUNC_1 (TYPE_3__*,int) ;
 int FUNC_2 (TYPE_3__*,struct iio_dev*) ;
 struct adis16130_state* FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct spi_device*,struct iio_dev*) ;

__attribute__((used)) static int FUNC_6(struct spi_device *VAR_4)
{
 struct adis16130_state *VAR_5;
 struct iio_dev *VAR_6;


 VAR_6 = FUNC_1(&VAR_4->dev, sizeof(*VAR_5));
 if (!VAR_6)
  return -VAR_0;
 VAR_5 = FUNC_3(VAR_6);

 FUNC_5(VAR_4, VAR_6);
 VAR_5->us = VAR_4;
 FUNC_4(&VAR_5->buf_lock);
 VAR_6->name = VAR_4->dev.driver->name;
 VAR_6->channels = VAR_2;
 VAR_6->num_channels = FUNC_0(VAR_2);
 VAR_6->dev.parent = &VAR_4->dev;
 VAR_6->info = &VAR_3;
 VAR_6->modes = VAR_1;

 return FUNC_2(&VAR_4->dev, VAR_6);
}
