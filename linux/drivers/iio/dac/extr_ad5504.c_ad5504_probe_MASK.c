
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {struct ad5504_platform_data* platform_data; } ;
struct spi_device {scalar_t__ irq; TYPE_3__ dev; } ;
struct regulator {int dummy; } ;
struct TYPE_7__ {TYPE_3__* parent; } ;
struct iio_dev {int num_channels; int modes; int channels; int * info; int name; TYPE_1__ dev; } ;
struct ad5504_state {int vref_mv; struct spi_device* spi; struct regulator* reg; } ;
struct ad5504_platform_data {int vref_mv; } ;
struct TYPE_8__ {scalar_t__ driver_data; int name; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct regulator*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (TYPE_3__*,char*) ;
 struct iio_dev* FUNC_2 (TYPE_3__*,int) ;
 struct regulator* FUNC_3 (TYPE_3__*,char*) ;
 int FUNC_4 (TYPE_3__*,scalar_t__,int *,int *,int,int ,struct iio_dev*) ;
 int FUNC_5 (struct iio_dev*) ;
 struct ad5504_state* FUNC_6 (struct iio_dev*) ;
 int FUNC_7 (struct regulator*) ;
 int FUNC_8 (struct regulator*) ;
 int FUNC_9 (struct regulator*) ;
 TYPE_2__* FUNC_10 (struct spi_device*) ;
 int FUNC_11 (struct spi_device*,struct iio_dev*) ;

__attribute__((used)) static int FUNC_12(struct spi_device *VAR_8)
{
 struct ad5504_platform_data *VAR_9 = VAR_8->dev.platform_data;
 struct iio_dev *VAR_10;
 struct ad5504_state *VAR_11;
 struct regulator *VAR_12;
 int VAR_13, VAR_14 = 0;

 VAR_10 = FUNC_2(&VAR_8->dev, sizeof(*VAR_11));
 if (!VAR_10)
  return -VAR_0;
 VAR_12 = FUNC_3(&VAR_8->dev, "vcc");
 if (!FUNC_0(VAR_12)) {
  VAR_13 = FUNC_8(VAR_12);
  if (VAR_13)
   return VAR_13;

  VAR_13 = FUNC_9(VAR_12);
  if (VAR_13 < 0)
   goto error_disable_reg;

  VAR_14 = VAR_13;
 }

 FUNC_11(VAR_8, VAR_10);
 VAR_11 = FUNC_6(VAR_10);
 if (VAR_14)
  VAR_11->vref_mv = VAR_14 / 1000;
 else if (VAR_9)
  VAR_11->vref_mv = VAR_9->vref_mv;
 else
  FUNC_1(&VAR_8->dev, "reference voltage unspecified\n");

 VAR_11->reg = VAR_12;
 VAR_11->spi = VAR_8;
 VAR_10->dev.parent = &VAR_8->dev;
 VAR_10->name = FUNC_10(VAR_11->spi)->name;
 VAR_10->info = &VAR_7;
 if (FUNC_10(VAR_11->spi)->driver_data == VAR_1)
  VAR_10->num_channels = 1;
 else
  VAR_10->num_channels = 4;
 VAR_10->channels = VAR_5;
 VAR_10->modes = VAR_2;

 if (VAR_8->irq) {
  VAR_13 = FUNC_4(&VAR_8->dev, VAR_8->irq,
        ((void*)0),
        &VAR_6,
        VAR_4 | VAR_3,
        FUNC_10(VAR_11->spi)->name,
        VAR_10);
  if (VAR_13)
   goto error_disable_reg;
 }

 VAR_13 = FUNC_5(VAR_10);
 if (VAR_13)
  goto error_disable_reg;

 return 0;

error_disable_reg:
 if (!FUNC_0(VAR_12))
  FUNC_7(VAR_12);

 return VAR_13;
}
