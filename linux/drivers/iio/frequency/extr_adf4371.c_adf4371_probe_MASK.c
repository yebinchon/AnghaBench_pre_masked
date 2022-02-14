
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct spi_device_id {size_t driver_data; int name; } ;
struct spi_device {int dev; } ;
struct regmap {int dummy; } ;
struct TYPE_3__ {int * parent; } ;
struct iio_dev {int num_channels; int channels; int modes; int * info; int name; TYPE_1__ dev; } ;
struct adf4371_state {struct regmap* clkin; int clkin_freq; TYPE_2__* chip_info; int lock; struct regmap* regmap; struct spi_device* spi; } ;
struct TYPE_4__ {int num_channels; int channels; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct regmap*) ;
 int FUNC_1 (struct regmap*) ;
 TYPE_2__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct adf4371_state*) ;
 int FUNC_3 (struct regmap*) ;
 int FUNC_4 (struct regmap*) ;
 int FUNC_5 (int *,char*,...) ;
 int FUNC_6 (int *,int ,struct adf4371_state*) ;
 struct regmap* FUNC_7 (int *,char*) ;
 struct iio_dev* FUNC_8 (int *,int) ;
 int FUNC_9 (int *,struct iio_dev*) ;
 struct regmap* FUNC_10 (struct spi_device*,int *) ;
 struct adf4371_state* FUNC_11 (struct iio_dev*) ;
 int FUNC_12 (int *) ;
 struct spi_device_id* FUNC_13 (struct spi_device*) ;
 int FUNC_14 (struct spi_device*,struct iio_dev*) ;

__attribute__((used)) static int FUNC_15(struct spi_device *VAR_6)
{
 const struct spi_device_id *VAR_7 = FUNC_13(VAR_6);
 struct iio_dev *VAR_8;
 struct adf4371_state *VAR_9;
 struct regmap *VAR_10;
 int VAR_11;

 VAR_8 = FUNC_8(&VAR_6->dev, sizeof(*VAR_9));
 if (!VAR_8)
  return -VAR_0;

 VAR_10 = FUNC_10(VAR_6, &VAR_5);
 if (FUNC_0(VAR_10)) {
  FUNC_5(&VAR_6->dev, "Error initializing spi regmap: %ld\n",
   FUNC_1(VAR_10));
  return FUNC_1(VAR_10);
 }

 VAR_9 = FUNC_11(VAR_8);
 FUNC_14(VAR_6, VAR_8);
 VAR_9->spi = VAR_6;
 VAR_9->regmap = VAR_10;
 FUNC_12(&VAR_9->lock);

 VAR_9->chip_info = &VAR_2[VAR_7->driver_data];
 VAR_8->dev.parent = &VAR_6->dev;
 VAR_8->name = VAR_7->name;
 VAR_8->info = &VAR_4;
 VAR_8->modes = VAR_1;
 VAR_8->channels = VAR_9->chip_info->channels;
 VAR_8->num_channels = VAR_9->chip_info->num_channels;

 VAR_9->clkin = FUNC_7(&VAR_6->dev, "clkin");
 if (FUNC_0(VAR_9->clkin))
  return FUNC_1(VAR_9->clkin);

 VAR_11 = FUNC_4(VAR_9->clkin);
 if (VAR_11 < 0)
  return VAR_11;

 VAR_11 = FUNC_6(&VAR_6->dev, VAR_3, VAR_9);
 if (VAR_11)
  return VAR_11;

 VAR_9->clkin_freq = FUNC_3(VAR_9->clkin);

 VAR_11 = FUNC_2(VAR_9);
 if (VAR_11 < 0) {
  FUNC_5(&VAR_6->dev, "ADF4371 setup failed\n");
  return VAR_11;
 }

 return FUNC_9(&VAR_6->dev, VAR_8);
}
