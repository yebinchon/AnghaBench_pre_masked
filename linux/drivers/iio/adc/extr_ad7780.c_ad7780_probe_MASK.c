
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct spi_device {int dev; } ;
struct TYPE_4__ {int * parent; } ;
struct iio_dev {int num_channels; int * info; int * channels; int modes; int name; TYPE_1__ dev; } ;
struct ad7780_state {int gain; int reg; TYPE_3__* chip_info; int sd; } ;
struct TYPE_6__ {int channel; } ;
struct TYPE_5__ {size_t driver_data; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 TYPE_3__* VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *,struct ad7780_state*) ;
 int VAR_4 ;
 int FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (int *,struct iio_dev*,struct spi_device*,int *) ;
 int FUNC_5 (struct iio_dev*) ;
 int FUNC_6 (int *,char*) ;
 struct iio_dev* FUNC_7 (int *,int) ;
 int FUNC_8 (int *,char*) ;
 int FUNC_9 (struct iio_dev*) ;
 struct ad7780_state* FUNC_10 (struct iio_dev*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 TYPE_2__* FUNC_13 (struct spi_device*) ;
 int FUNC_14 (struct spi_device*,struct iio_dev*) ;

__attribute__((used)) static int FUNC_15(struct spi_device *VAR_5)
{
 struct ad7780_state *VAR_6;
 struct iio_dev *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_7(&VAR_5->dev, sizeof(*VAR_6));
 if (!VAR_7)
  return -VAR_0;

 VAR_6 = FUNC_10(VAR_7);
 VAR_6->gain = 1;

 FUNC_4(&VAR_6->sd, VAR_7, VAR_5, &VAR_4);

 VAR_6->chip_info =
  &VAR_2[FUNC_13(VAR_5)->driver_data];

 FUNC_14(VAR_5, VAR_7);

 VAR_7->dev.parent = &VAR_5->dev;
 VAR_7->name = FUNC_13(VAR_5)->name;
 VAR_7->modes = VAR_1;
 VAR_7->channels = &VAR_6->chip_info->channel;
 VAR_7->num_channels = 1;
 VAR_7->info = &VAR_3;

 VAR_8 = FUNC_2(&VAR_5->dev, VAR_6);
 if (VAR_8)
  goto error_cleanup_buffer_and_trigger;

 VAR_6->reg = FUNC_8(&VAR_5->dev, "avdd");
 if (FUNC_0(VAR_6->reg))
  return FUNC_1(VAR_6->reg);

 VAR_8 = FUNC_12(VAR_6->reg);
 if (VAR_8) {
  FUNC_6(&VAR_5->dev, "Failed to enable specified AVdd supply\n");
  return VAR_8;
 }

 VAR_8 = FUNC_5(VAR_7);
 if (VAR_8)
  goto error_disable_reg;

 VAR_8 = FUNC_9(VAR_7);
 if (VAR_8)
  goto error_cleanup_buffer_and_trigger;

 return 0;

error_cleanup_buffer_and_trigger:
 FUNC_3(VAR_7);
error_disable_reg:
 FUNC_11(VAR_6->reg);

 return VAR_8;
}
