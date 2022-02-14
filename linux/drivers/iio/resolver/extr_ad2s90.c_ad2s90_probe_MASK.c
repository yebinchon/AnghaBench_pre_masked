
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct spi_device {scalar_t__ max_speed_hz; int dev; } ;
struct TYPE_3__ {int * parent; } ;
struct iio_dev {int num_channels; TYPE_1__ dev; int name; int * channels; int modes; int * info; } ;
struct ad2s90_state {struct spi_device* sdev; int lock; } ;
struct TYPE_4__ {int name; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,char*,scalar_t__,scalar_t__) ;
 struct iio_dev* FUNC_1 (int *,int) ;
 int FUNC_2 (int *,struct iio_dev*) ;
 struct ad2s90_state* FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (int *) ;
 TYPE_2__* FUNC_5 (struct spi_device*) ;
 int FUNC_6 (struct spi_device*,struct iio_dev*) ;

__attribute__((used)) static int FUNC_7(struct spi_device *VAR_6)
{
 struct iio_dev *VAR_7;
 struct ad2s90_state *VAR_8;

 if (VAR_6->max_speed_hz > VAR_0) {
  FUNC_0(&VAR_6->dev, "SPI CLK, %d Hz exceeds %d Hz\n",
   VAR_6->max_speed_hz, VAR_0);
  return -VAR_1;
 }

 VAR_7 = FUNC_1(&VAR_6->dev, sizeof(*VAR_8));
 if (!VAR_7)
  return -VAR_2;
 VAR_8 = FUNC_3(VAR_7);
 FUNC_6(VAR_6, VAR_7);

 FUNC_4(&VAR_8->lock);
 VAR_8->sdev = VAR_6;
 VAR_7->dev.parent = &VAR_6->dev;
 VAR_7->info = &VAR_5;
 VAR_7->modes = VAR_3;
 VAR_7->channels = &VAR_4;
 VAR_7->num_channels = 1;
 VAR_7->name = FUNC_5(VAR_6)->name;

 return FUNC_2(VAR_7->dev.parent, VAR_7);
}
