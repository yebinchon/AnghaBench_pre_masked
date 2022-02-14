
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spi_device {int dev; scalar_t__ irq; } ;
struct TYPE_2__ {int * parent; } ;
struct iio_dev {char* name; int num_channels; int channels; int modes; int * info; TYPE_1__ dev; } ;
struct ad5421_state {int ctrl; int current_range; struct spi_device* spi; } ;
struct ad5421_platform_data {scalar_t__ external_vref; int current_range; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (struct iio_dev*,int ,int ) ;
 int FUNC_2 (int *,char*) ;
 struct ad5421_platform_data* FUNC_3 (int *) ;
 struct iio_dev* FUNC_4 (int *,int) ;
 int FUNC_5 (int *,struct iio_dev*) ;
 int FUNC_6 (int *,scalar_t__,int *,int ,int,char*,struct iio_dev*) ;
 struct ad5421_state* FUNC_7 (struct iio_dev*) ;
 int FUNC_8 (struct spi_device*,struct iio_dev*) ;

__attribute__((used)) static int FUNC_9(struct spi_device *VAR_11)
{
 struct ad5421_platform_data *VAR_12 = FUNC_3(&VAR_11->dev);
 struct iio_dev *VAR_13;
 struct ad5421_state *VAR_14;
 int VAR_15;

 VAR_13 = FUNC_4(&VAR_11->dev, sizeof(*VAR_14));
 if (VAR_13 == ((void*)0)) {
  FUNC_2(&VAR_11->dev, "Failed to allocate iio device\n");
  return -VAR_4;
 }

 VAR_14 = FUNC_7(VAR_13);
 FUNC_8(VAR_11, VAR_13);

 VAR_14->spi = VAR_11;

 VAR_13->dev.parent = &VAR_11->dev;
 VAR_13->name = "ad5421";
 VAR_13->info = &VAR_10;
 VAR_13->modes = VAR_5;
 VAR_13->channels = VAR_8;
 VAR_13->num_channels = FUNC_0(VAR_8);

 VAR_14->ctrl = VAR_2 |
   VAR_0;

 if (VAR_12) {
  VAR_14->current_range = VAR_12->current_range;
  if (VAR_12->external_vref)
   VAR_14->ctrl |= VAR_1;
 } else {
  VAR_14->current_range = VAR_3;
 }


 FUNC_1(VAR_13, 0, 0);

 if (VAR_11->irq) {
  VAR_15 = FUNC_6(&VAR_11->dev, VAR_11->irq,
        ((void*)0),
        VAR_9,
        VAR_7 | VAR_6,
        "ad5421 fault",
        VAR_13);
  if (VAR_15)
   return VAR_15;
 }

 return FUNC_5(&VAR_11->dev, VAR_13);
}
