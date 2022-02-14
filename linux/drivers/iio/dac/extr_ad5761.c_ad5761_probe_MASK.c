
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct spi_device {int dev; } ;
struct TYPE_3__ {int * parent; } ;
struct iio_dev {int num_channels; int name; int * channels; int modes; int * info; TYPE_1__ dev; } ;
struct ad5761_state {int vref_reg; struct spi_device* spi; } ;
struct ad5761_platform_data {int voltage_range; } ;
struct ad5761_chip_info {int channel; } ;
typedef enum ad5761_voltage_range { ____Placeholder_ad5761_voltage_range } ad5761_voltage_range ;
struct TYPE_4__ {size_t driver_data; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 struct ad5761_chip_info* VAR_3 ;
 int FUNC_1 (struct ad5761_state*,struct ad5761_chip_info const*) ;
 int VAR_4 ;
 int FUNC_2 (struct ad5761_state*,int) ;
 struct ad5761_platform_data* FUNC_3 (int *) ;
 struct iio_dev* FUNC_4 (int *,int) ;
 int FUNC_5 (struct iio_dev*) ;
 struct ad5761_state* FUNC_6 (struct iio_dev*) ;
 int FUNC_7 (int ) ;
 TYPE_2__* FUNC_8 (struct spi_device*) ;
 int FUNC_9 (struct spi_device*,struct iio_dev*) ;

__attribute__((used)) static int FUNC_10(struct spi_device *VAR_5)
{
 struct iio_dev *VAR_6;
 struct ad5761_state *VAR_7;
 int VAR_8;
 const struct ad5761_chip_info *VAR_9 =
  &VAR_3[FUNC_8(VAR_5)->driver_data];
 enum ad5761_voltage_range VAR_10 = VAR_0;
 struct ad5761_platform_data *VAR_11 = FUNC_3(&VAR_5->dev);

 VAR_6 = FUNC_4(&VAR_5->dev, sizeof(*VAR_7));
 if (!VAR_6)
  return -VAR_1;

 VAR_7 = FUNC_6(VAR_6);

 VAR_7->spi = VAR_5;
 FUNC_9(VAR_5, VAR_6);

 VAR_8 = FUNC_1(VAR_7, VAR_9);
 if (VAR_8)
  return VAR_8;

 if (VAR_11)
  VAR_10 = VAR_11->voltage_range;

 VAR_8 = FUNC_2(VAR_7, VAR_10);
 if (VAR_8)
  goto disable_regulator_err;

 VAR_6->dev.parent = &VAR_5->dev;
 VAR_6->info = &VAR_4;
 VAR_6->modes = VAR_2;
 VAR_6->channels = &VAR_9->channel;
 VAR_6->num_channels = 1;
 VAR_6->name = FUNC_8(VAR_7->spi)->name;
 VAR_8 = FUNC_5(VAR_6);
 if (VAR_8)
  goto disable_regulator_err;

 return 0;

disable_regulator_err:
 if (!FUNC_0(VAR_7->vref_reg))
  FUNC_7(VAR_7->vref_reg);

 return VAR_8;
}
