
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct spi_device {int dev; } ;
struct TYPE_3__ {int * parent; } ;
struct iio_dev {int num_channels; int channels; int modes; int * info; int name; TYPE_1__ dev; } ;
struct ad5758_state {scalar_t__ dc_dc_mode; struct spi_device* spi; int lock; } ;
struct TYPE_4__ {int name; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ad5758_state*) ;
 int FUNC_1 (struct ad5758_state*) ;
 int VAR_5 ;
 int FUNC_2 (int *,char*) ;
 struct iio_dev* FUNC_3 (int *,int) ;
 int FUNC_4 (int *,struct iio_dev*) ;
 struct ad5758_state* FUNC_5 (struct iio_dev*) ;
 int FUNC_6 (int *) ;
 TYPE_2__* FUNC_7 (struct spi_device*) ;
 int FUNC_8 (struct spi_device*,struct iio_dev*) ;

__attribute__((used)) static int FUNC_9(struct spi_device *VAR_6)
{
 struct ad5758_state *VAR_7;
 struct iio_dev *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_3(&VAR_6->dev, sizeof(*VAR_7));
 if (!VAR_8)
  return -VAR_1;

 VAR_7 = FUNC_5(VAR_8);
 FUNC_8(VAR_6, VAR_8);

 VAR_7->spi = VAR_6;

 FUNC_6(&VAR_7->lock);

 VAR_8->dev.parent = &VAR_6->dev;
 VAR_8->name = FUNC_7(VAR_6)->name;
 VAR_8->info = &VAR_4;
 VAR_8->modes = VAR_2;
 VAR_8->num_channels = 1;

 VAR_9 = FUNC_1(VAR_7);
 if (VAR_9 < 0)
  return VAR_9;

 if (VAR_7->dc_dc_mode == VAR_0)
  VAR_8->channels = VAR_5;
 else
  VAR_8->channels = VAR_3;

 VAR_9 = FUNC_0(VAR_7);
 if (VAR_9 < 0) {
  FUNC_2(&VAR_6->dev, "AD5758 init failed\n");
  return VAR_9;
 }

 return FUNC_4(&VAR_7->spi->dev, VAR_8);
}
