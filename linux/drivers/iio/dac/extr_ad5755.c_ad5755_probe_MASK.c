
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {struct ad5755_platform_data* platform_data; scalar_t__ of_node; } ;
struct spi_device {TYPE_3__ dev; } ;
struct TYPE_9__ {TYPE_3__* parent; } ;
struct iio_dev {int num_channels; int modes; int * info; int name; TYPE_1__ dev; } ;
struct ad5755_state {int pwr_down; struct spi_device* spi; int * chip_info; } ;
struct ad5755_platform_data {int dummy; } ;
typedef enum ad5755_type { ____Placeholder_ad5755_type } ad5755_type ;
struct TYPE_10__ {int driver_data; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 struct ad5755_platform_data VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct iio_dev*,struct ad5755_platform_data const*) ;
 struct ad5755_platform_data* FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (struct iio_dev*,struct ad5755_platform_data const*) ;
 int FUNC_3 (TYPE_3__*,char*) ;
 struct ad5755_platform_data* FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*,char*) ;
 struct iio_dev* FUNC_6 (TYPE_3__*,int) ;
 int FUNC_7 (TYPE_3__*,struct iio_dev*) ;
 struct ad5755_state* FUNC_8 (struct iio_dev*) ;
 TYPE_2__* FUNC_9 (struct spi_device*) ;
 int FUNC_10 (struct spi_device*,struct iio_dev*) ;

__attribute__((used)) static int FUNC_11(struct spi_device *VAR_6)
{
 enum ad5755_type VAR_7 = FUNC_9(VAR_6)->driver_data;
 const struct ad5755_platform_data *VAR_8 = FUNC_4(&VAR_6->dev);
 struct iio_dev *VAR_9;
 struct ad5755_state *VAR_10;
 int VAR_11;

 VAR_9 = FUNC_6(&VAR_6->dev, sizeof(*VAR_10));
 if (VAR_9 == ((void*)0)) {
  FUNC_3(&VAR_6->dev, "Failed to allocate iio device\n");
  return -VAR_1;
 }

 VAR_10 = FUNC_8(VAR_9);
 FUNC_10(VAR_6, VAR_9);

 VAR_10->chip_info = &VAR_3[VAR_7];
 VAR_10->spi = VAR_6;
 VAR_10->pwr_down = 0xf;

 VAR_9->dev.parent = &VAR_6->dev;
 VAR_9->name = FUNC_9(VAR_6)->name;
 VAR_9->info = &VAR_5;
 VAR_9->modes = VAR_2;
 VAR_9->num_channels = VAR_0;

 if (VAR_6->dev.of_node)
  VAR_8 = FUNC_1(&VAR_6->dev);
 else
  VAR_8 = VAR_6->dev.platform_data;

 if (!VAR_8) {
  FUNC_5(&VAR_6->dev, "no platform data? using default\n");
  VAR_8 = &VAR_4;
 }

 VAR_11 = FUNC_0(VAR_9, VAR_8);
 if (VAR_11)
  return VAR_11;

 VAR_11 = FUNC_2(VAR_9, VAR_8);
 if (VAR_11)
  return VAR_11;

 return FUNC_7(&VAR_6->dev, VAR_9);
}
