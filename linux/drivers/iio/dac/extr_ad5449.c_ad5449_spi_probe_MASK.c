
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct spi_device_id {size_t driver_data; int name; } ;
struct TYPE_10__ {struct ad5449_platform_data* platform_data; } ;
struct spi_device {TYPE_4__ dev; } ;
struct TYPE_8__ {TYPE_4__* parent; } ;
struct iio_dev {unsigned int num_channels; int channels; int modes; int * info; int name; TYPE_1__ dev; } ;
struct ad5449_platform_data {unsigned int sdo_mode; scalar_t__ hardware_clear_to_midscale; } ;
struct ad5449 {int has_sdo; TYPE_2__* vref_reg; TYPE_7__* chip_info; struct spi_device* spi; } ;
struct TYPE_11__ {unsigned int num_channels; scalar_t__ has_ctrl; int channels; } ;
struct TYPE_9__ {int supply; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_7__* VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct ad5449*,unsigned int) ;
 int FUNC_1 (struct iio_dev*,int ,unsigned int) ;
 struct iio_dev* FUNC_2 (TYPE_4__*,int) ;
 int FUNC_3 (TYPE_4__*,unsigned int,TYPE_2__*) ;
 int FUNC_4 (struct iio_dev*) ;
 struct ad5449* FUNC_5 (struct iio_dev*) ;
 int FUNC_6 (unsigned int,TYPE_2__*) ;
 int FUNC_7 (unsigned int,TYPE_2__*) ;
 struct spi_device_id* FUNC_8 (struct spi_device*) ;
 int FUNC_9 (struct spi_device*,struct iio_dev*) ;

__attribute__((used)) static int FUNC_10(struct spi_device *VAR_8)
{
 struct ad5449_platform_data *VAR_9 = VAR_8->dev.platform_data;
 const struct spi_device_id *VAR_10 = FUNC_8(VAR_8);
 struct iio_dev *VAR_11;
 struct ad5449 *VAR_12;
 unsigned int VAR_13;
 int VAR_14;

 VAR_11 = FUNC_2(&VAR_8->dev, sizeof(*VAR_12));
 if (VAR_11 == ((void*)0))
  return -VAR_4;

 VAR_12 = FUNC_5(VAR_11);
 FUNC_9(VAR_8, VAR_11);

 VAR_12->chip_info = &VAR_6[VAR_10->driver_data];
 VAR_12->spi = VAR_8;

 for (VAR_13 = 0; VAR_13 < VAR_12->chip_info->num_channels; ++VAR_13)
  VAR_12->vref_reg[VAR_13].supply = FUNC_0(VAR_12, VAR_13);

 VAR_14 = FUNC_3(&VAR_8->dev, VAR_12->chip_info->num_channels,
    VAR_12->vref_reg);
 if (VAR_14)
  return VAR_14;

 VAR_14 = FUNC_7(VAR_12->chip_info->num_channels, VAR_12->vref_reg);
 if (VAR_14)
  return VAR_14;

 VAR_11->dev.parent = &VAR_8->dev;
 VAR_11->name = VAR_10->name;
 VAR_11->info = &VAR_7;
 VAR_11->modes = VAR_5;
 VAR_11->channels = VAR_12->chip_info->channels;
 VAR_11->num_channels = VAR_12->chip_info->num_channels;

 if (VAR_12->chip_info->has_ctrl) {
  unsigned int VAR_15 = 0x00;
  if (VAR_9) {
   if (VAR_9->hardware_clear_to_midscale)
    VAR_15 |= VAR_1;
   VAR_15 |= VAR_9->sdo_mode << VAR_2;
   VAR_12->has_sdo = VAR_9->sdo_mode != VAR_3;
  } else {
   VAR_12->has_sdo = 1;
  }
  FUNC_1(VAR_11, VAR_0, VAR_15);
 }

 VAR_14 = FUNC_4(VAR_11);
 if (VAR_14)
  goto error_disable_reg;

 return 0;

error_disable_reg:
 FUNC_6(VAR_12->chip_info->num_channels, VAR_12->vref_reg);

 return VAR_14;
}
