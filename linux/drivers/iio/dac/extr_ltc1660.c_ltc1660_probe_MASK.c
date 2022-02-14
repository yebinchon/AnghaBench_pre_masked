
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spi_device_id {size_t driver_data; int name; } ;
struct spi_device {int dev; } ;
struct ltc1660_priv {int vref_reg; struct spi_device* spi; int regmap; } ;
struct TYPE_2__ {int * parent; } ;
struct iio_dev {int name; int num_channels; int channels; int modes; int * info; TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*,...) ;
 struct iio_dev* FUNC_3 (int *,int) ;
 int FUNC_4 (struct spi_device*,int *) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (struct iio_dev*) ;
 struct ltc1660_priv* FUNC_7 (struct iio_dev*) ;
 int * VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 struct spi_device_id* FUNC_10 (struct spi_device*) ;
 int FUNC_11 (struct spi_device*,struct iio_dev*) ;

__attribute__((used)) static int FUNC_12(struct spi_device *VAR_6)
{
 struct iio_dev *VAR_7;
 struct ltc1660_priv *VAR_8;
 const struct spi_device_id *VAR_9 = FUNC_10(VAR_6);
 int VAR_10;

 VAR_7 = FUNC_3(&VAR_6->dev, sizeof(*VAR_8));
 if (VAR_7 == ((void*)0))
  return -VAR_0;

 VAR_8 = FUNC_7(VAR_7);
 VAR_8->regmap = FUNC_4(VAR_6, &VAR_5);
 if (FUNC_0(VAR_8->regmap)) {
  FUNC_2(&VAR_6->dev, "failed to register spi regmap %ld\n",
   FUNC_1(VAR_8->regmap));
  return FUNC_1(VAR_8->regmap);
 }

 VAR_8->vref_reg = FUNC_5(&VAR_6->dev, "vref");
 if (FUNC_0(VAR_8->vref_reg)) {
  FUNC_2(&VAR_6->dev, "vref regulator not specified\n");
  return FUNC_1(VAR_8->vref_reg);
 }

 VAR_10 = FUNC_9(VAR_8->vref_reg);
 if (VAR_10) {
  FUNC_2(&VAR_6->dev, "failed to enable vref regulator: %d\n",
    VAR_10);
  return VAR_10;
 }

 VAR_8->spi = VAR_6;
 FUNC_11(VAR_6, VAR_7);
 VAR_7->dev.parent = &VAR_6->dev;
 VAR_7->info = &VAR_4;
 VAR_7->modes = VAR_1;
 VAR_7->channels = VAR_3[VAR_9->driver_data];
 VAR_7->num_channels = VAR_2;
 VAR_7->name = VAR_9->name;

 VAR_10 = FUNC_6(VAR_7);
 if (VAR_10) {
  FUNC_2(&VAR_6->dev, "failed to register iio device: %d\n",
    VAR_10);
  goto error_disable_reg;
 }

 return 0;

error_disable_reg:
 FUNC_8(VAR_8->vref_reg);

 return VAR_10;
}
