
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int of_node; struct ad7793_platform_data* platform_data; } ;
struct spi_device {TYPE_3__ dev; int irq; } ;
struct TYPE_7__ {int of_node; TYPE_3__* parent; } ;
struct iio_dev {int info; int num_channels; int channels; int modes; int name; TYPE_1__ dev; } ;
struct ad7793_state {int reg; TYPE_6__* chip_info; int sd; } ;
struct ad7793_platform_data {scalar_t__ refsel; } ;
struct TYPE_10__ {int iio_info; int num_channels; int channels; } ;
struct TYPE_8__ {size_t driver_data; int name; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 TYPE_6__* VAR_4 ;
 int FUNC_2 (struct iio_dev*,struct ad7793_platform_data const*,int) ;
 int VAR_5 ;
 int FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (int *,struct iio_dev*,struct spi_device*,int *) ;
 int FUNC_5 (struct iio_dev*) ;
 int FUNC_6 (TYPE_3__*,char*) ;
 struct iio_dev* FUNC_7 (TYPE_3__*,int) ;
 int FUNC_8 (TYPE_3__*,char*) ;
 int FUNC_9 (struct iio_dev*) ;
 struct ad7793_state* FUNC_10 (struct iio_dev*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 TYPE_2__* FUNC_14 (struct spi_device*) ;
 int FUNC_15 (struct spi_device*,struct iio_dev*) ;

__attribute__((used)) static int FUNC_16(struct spi_device *VAR_6)
{
 const struct ad7793_platform_data *VAR_7 = VAR_6->dev.platform_data;
 struct ad7793_state *VAR_8;
 struct iio_dev *VAR_9;
 int VAR_10, VAR_11 = 0;

 if (!VAR_7) {
  FUNC_6(&VAR_6->dev, "no platform data?\n");
  return -VAR_1;
 }

 if (!VAR_6->irq) {
  FUNC_6(&VAR_6->dev, "no IRQ?\n");
  return -VAR_1;
 }

 VAR_9 = FUNC_7(&VAR_6->dev, sizeof(*VAR_8));
 if (VAR_9 == ((void*)0))
  return -VAR_2;

 VAR_8 = FUNC_10(VAR_9);

 FUNC_4(&VAR_8->sd, VAR_9, VAR_6, &VAR_5);

 if (VAR_7->refsel != VAR_0) {
  VAR_8->reg = FUNC_8(&VAR_6->dev, "refin");
  if (FUNC_0(VAR_8->reg))
   return FUNC_1(VAR_8->reg);

  VAR_10 = FUNC_12(VAR_8->reg);
  if (VAR_10)
   return VAR_10;

  VAR_11 = FUNC_13(VAR_8->reg);
  if (VAR_11 < 0) {
   VAR_10 = VAR_11;
   goto error_disable_reg;
  }

  VAR_11 /= 1000;
 } else {
  VAR_11 = 1170;
 }

 VAR_8->chip_info =
  &VAR_4[FUNC_14(VAR_6)->driver_data];

 FUNC_15(VAR_6, VAR_9);

 VAR_9->dev.parent = &VAR_6->dev;
 VAR_9->dev.of_node = VAR_6->dev.of_node;
 VAR_9->name = FUNC_14(VAR_6)->name;
 VAR_9->modes = VAR_3;
 VAR_9->channels = VAR_8->chip_info->channels;
 VAR_9->num_channels = VAR_8->chip_info->num_channels;
 VAR_9->info = VAR_8->chip_info->iio_info;

 VAR_10 = FUNC_5(VAR_9);
 if (VAR_10)
  goto error_disable_reg;

 VAR_10 = FUNC_2(VAR_9, VAR_7, VAR_11);
 if (VAR_10)
  goto error_remove_trigger;

 VAR_10 = FUNC_9(VAR_9);
 if (VAR_10)
  goto error_remove_trigger;

 return 0;

error_remove_trigger:
 FUNC_3(VAR_9);
error_disable_reg:
 if (VAR_7->refsel != VAR_0)
  FUNC_11(VAR_8->reg);

 return VAR_10;
}
