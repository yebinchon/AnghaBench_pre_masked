
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int of_node; struct ad7791_platform_data* platform_data; } ;
struct spi_device {TYPE_3__ dev; int irq; } ;
struct TYPE_7__ {int of_node; TYPE_3__* parent; } ;
struct iio_dev {int * info; int num_channels; int channels; int modes; int name; TYPE_1__ dev; } ;
struct ad7791_state {int reg; TYPE_6__* info; int sd; } ;
struct ad7791_platform_data {int dummy; } ;
struct TYPE_10__ {int flags; int num_channels; int channels; } ;
struct TYPE_8__ {size_t driver_data; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 TYPE_6__* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct ad7791_state*,struct ad7791_platform_data*) ;
 int VAR_7 ;
 int FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (int *,struct iio_dev*,struct spi_device*,int *) ;
 int FUNC_5 (struct iio_dev*) ;
 int FUNC_6 (TYPE_3__*,char*) ;
 struct iio_dev* FUNC_7 (TYPE_3__*,int) ;
 int FUNC_8 (TYPE_3__*,char*) ;
 int FUNC_9 (struct iio_dev*) ;
 struct ad7791_state* FUNC_10 (struct iio_dev*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 TYPE_2__* FUNC_13 (struct spi_device*) ;
 int FUNC_14 (struct spi_device*,struct iio_dev*) ;

__attribute__((used)) static int FUNC_15(struct spi_device *VAR_8)
{
 struct ad7791_platform_data *VAR_9 = VAR_8->dev.platform_data;
 struct iio_dev *VAR_10;
 struct ad7791_state *VAR_11;
 int VAR_12;

 if (!VAR_8->irq) {
  FUNC_6(&VAR_8->dev, "Missing IRQ.\n");
  return -VAR_2;
 }

 VAR_10 = FUNC_7(&VAR_8->dev, sizeof(*VAR_11));
 if (!VAR_10)
  return -VAR_1;

 VAR_11 = FUNC_10(VAR_10);

 VAR_11->reg = FUNC_8(&VAR_8->dev, "refin");
 if (FUNC_0(VAR_11->reg))
  return FUNC_1(VAR_11->reg);

 VAR_12 = FUNC_12(VAR_11->reg);
 if (VAR_12)
  return VAR_12;

 VAR_11->info = &VAR_4[FUNC_13(VAR_8)->driver_data];
 FUNC_4(&VAR_11->sd, VAR_10, VAR_8, &VAR_7);

 FUNC_14(VAR_8, VAR_10);

 VAR_10->dev.parent = &VAR_8->dev;
 VAR_10->dev.of_node = VAR_8->dev.of_node;
 VAR_10->name = FUNC_13(VAR_8)->name;
 VAR_10->modes = VAR_3;
 VAR_10->channels = VAR_11->info->channels;
 VAR_10->num_channels = VAR_11->info->num_channels;
 if (VAR_11->info->flags & VAR_0)
  VAR_10->info = &VAR_5;
 else
  VAR_10->info = &VAR_6;

 VAR_12 = FUNC_5(VAR_10);
 if (VAR_12)
  goto error_disable_reg;

 VAR_12 = FUNC_2(VAR_11, VAR_9);
 if (VAR_12)
  goto error_remove_trigger;

 VAR_12 = FUNC_9(VAR_10);
 if (VAR_12)
  goto error_remove_trigger;

 return 0;

error_remove_trigger:
 FUNC_3(VAR_10);
error_disable_reg:
 FUNC_11(VAR_11->reg);

 return VAR_12;
}
