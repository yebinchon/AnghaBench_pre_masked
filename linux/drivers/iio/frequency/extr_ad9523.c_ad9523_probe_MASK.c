
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {struct ad9523_platform_data* platform_data; } ;
struct spi_device {TYPE_3__ dev; } ;
struct TYPE_8__ {TYPE_3__* parent; } ;
struct iio_dev {scalar_t__* name; int num_channels; int channels; int modes; int * info; TYPE_1__ dev; } ;
struct ad9523_state {void* reg; int ad9523_channels; struct ad9523_platform_data* pdata; struct spi_device* spi; void* sync_gpio; void* reset_gpio; void* pwrdown_gpio; int lock; } ;
struct ad9523_platform_data {scalar_t__* name; int num_channels; } ;
struct TYPE_9__ {scalar_t__* name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int VAR_5 ;
 int FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (TYPE_3__*,char*) ;
 int FUNC_4 (TYPE_3__*,char*,scalar_t__*) ;
 void* FUNC_5 (TYPE_3__*,char*,int ) ;
 struct iio_dev* FUNC_6 (TYPE_3__*,int) ;
 void* FUNC_7 (TYPE_3__*,char*) ;
 int FUNC_8 (void*,int) ;
 int FUNC_9 (struct iio_dev*) ;
 struct ad9523_state* FUNC_10 (struct iio_dev*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (void*) ;
 int FUNC_13 (void*) ;
 TYPE_2__* FUNC_14 (struct spi_device*) ;
 int FUNC_15 (struct spi_device*,struct iio_dev*) ;
 int FUNC_16 (int) ;

__attribute__((used)) static int FUNC_17(struct spi_device *VAR_6)
{
 struct ad9523_platform_data *VAR_7 = VAR_6->dev.platform_data;
 struct iio_dev *VAR_8;
 struct ad9523_state *VAR_9;
 int VAR_10;

 if (!VAR_7) {
  FUNC_3(&VAR_6->dev, "no platform data?\n");
  return -VAR_0;
 }

 VAR_8 = FUNC_6(&VAR_6->dev, sizeof(*VAR_9));
 if (VAR_8 == ((void*)0))
  return -VAR_1;

 VAR_9 = FUNC_10(VAR_8);

 FUNC_11(&VAR_9->lock);

 VAR_9->reg = FUNC_7(&VAR_6->dev, "vcc");
 if (!FUNC_0(VAR_9->reg)) {
  VAR_10 = FUNC_13(VAR_9->reg);
  if (VAR_10)
   return VAR_10;
 }

 VAR_9->pwrdown_gpio = FUNC_5(&VAR_6->dev, "powerdown",
  VAR_2);
 if (FUNC_0(VAR_9->pwrdown_gpio)) {
  VAR_10 = FUNC_1(VAR_9->pwrdown_gpio);
  goto error_disable_reg;
 }

 VAR_9->reset_gpio = FUNC_5(&VAR_6->dev, "reset",
  VAR_3);
 if (FUNC_0(VAR_9->reset_gpio)) {
  VAR_10 = FUNC_1(VAR_9->reset_gpio);
  goto error_disable_reg;
 }

 if (VAR_9->reset_gpio) {
  FUNC_16(1);
  FUNC_8(VAR_9->reset_gpio, 1);
 }

 VAR_9->sync_gpio = FUNC_5(&VAR_6->dev, "sync",
  VAR_2);
 if (FUNC_0(VAR_9->sync_gpio)) {
  VAR_10 = FUNC_1(VAR_9->sync_gpio);
  goto error_disable_reg;
 }

 FUNC_15(VAR_6, VAR_8);
 VAR_9->spi = VAR_6;
 VAR_9->pdata = VAR_7;

 VAR_8->dev.parent = &VAR_6->dev;
 VAR_8->name = (VAR_7->name[0] != 0) ? VAR_7->name :
     FUNC_14(VAR_6)->name;
 VAR_8->info = &VAR_5;
 VAR_8->modes = VAR_4;
 VAR_8->channels = VAR_9->ad9523_channels;
 VAR_8->num_channels = VAR_7->num_channels;

 VAR_10 = FUNC_2(VAR_8);
 if (VAR_10 < 0)
  goto error_disable_reg;

 VAR_10 = FUNC_9(VAR_8);
 if (VAR_10)
  goto error_disable_reg;

 FUNC_4(&VAR_6->dev, "probed %s\n", VAR_8->name);

 return 0;

error_disable_reg:
 if (!FUNC_0(VAR_9->reg))
  FUNC_12(VAR_9->reg);

 return VAR_10;
}
