
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int of_node; } ;
struct spi_device {TYPE_3__ dev; int mode; } ;
struct TYPE_7__ {int of_node; TYPE_3__* parent; } ;
struct iio_dev {int * info; int num_channels; int channels; int modes; TYPE_1__ dev; int name; } ;
struct ads8688_state {int vref_mv; int reg; int lock; TYPE_6__* chip_info; struct spi_device* spi; } ;
struct TYPE_10__ {int num_channels; int channels; } ;
struct TYPE_8__ {size_t driver_data; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 TYPE_6__* VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct iio_dev*) ;
 int VAR_6 ;
 int FUNC_2 (TYPE_3__*,char*) ;
 struct iio_dev* FUNC_3 (TYPE_3__*,int) ;
 int FUNC_4 (TYPE_3__*,char*) ;
 int FUNC_5 (struct iio_dev*) ;
 struct ads8688_state* FUNC_6 (struct iio_dev*) ;
 int FUNC_7 (struct iio_dev*) ;
 int FUNC_8 (struct iio_dev*,int *,int ,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 TYPE_2__* FUNC_13 (struct spi_device*) ;
 int FUNC_14 (struct spi_device*,struct iio_dev*) ;

__attribute__((used)) static int FUNC_15(struct spi_device *VAR_7)
{
 struct ads8688_state *VAR_8;
 struct iio_dev *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_3(&VAR_7->dev, sizeof(*VAR_8));
 if (VAR_9 == ((void*)0))
  return -VAR_1;

 VAR_8 = FUNC_6(VAR_9);

 VAR_8->reg = FUNC_4(&VAR_7->dev, "vref");
 if (!FUNC_0(VAR_8->reg)) {
  VAR_10 = FUNC_11(VAR_8->reg);
  if (VAR_10)
   return VAR_10;

  VAR_10 = FUNC_12(VAR_8->reg);
  if (VAR_10 < 0)
   goto err_regulator_disable;

  VAR_8->vref_mv = VAR_10 / 1000;
 } else {

  VAR_8->vref_mv = VAR_0;
 }

 VAR_8->chip_info = &VAR_4[FUNC_13(VAR_7)->driver_data];

 VAR_7->mode = VAR_3;

 FUNC_14(VAR_7, VAR_9);

 VAR_8->spi = VAR_7;

 VAR_9->name = FUNC_13(VAR_7)->name;
 VAR_9->dev.parent = &VAR_7->dev;
 VAR_9->dev.of_node = VAR_7->dev.of_node;
 VAR_9->modes = VAR_2;
 VAR_9->channels = VAR_8->chip_info->channels;
 VAR_9->num_channels = VAR_8->chip_info->num_channels;
 VAR_9->info = &VAR_5;

 FUNC_1(VAR_9);

 FUNC_9(&VAR_8->lock);

 VAR_10 = FUNC_8(VAR_9, ((void*)0), VAR_6, ((void*)0));
 if (VAR_10 < 0) {
  FUNC_2(&VAR_7->dev, "iio triggered buffer setup failed\n");
  goto err_regulator_disable;
 }

 VAR_10 = FUNC_5(VAR_9);
 if (VAR_10)
  goto err_buffer_cleanup;

 return 0;

err_buffer_cleanup:
 FUNC_7(VAR_9);

err_regulator_disable:
 if (!FUNC_0(VAR_8->reg))
  FUNC_10(VAR_8->reg);

 return VAR_10;
}
