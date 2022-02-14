
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct spi_device_id {size_t driver_data; int name; } ;
struct spi_device {scalar_t__ irq; int dev; } ;
struct TYPE_11__ {int * parent; } ;
struct iio_dev {int id; int name; int * info; int num_channels; TYPE_6__* channels; int modes; TYPE_1__ dev; } ;
struct TYPE_13__ {int len; int * rx_buf; } ;
struct ad7766 {int msg; TYPE_3__ xfer; int * data; struct spi_device* spi; TYPE_4__* trig; int pd_gpio; TYPE_6__* reg; int mclk; int * chip_info; } ;
struct TYPE_15__ {char* supply; } ;
struct TYPE_12__ {int * parent; } ;
struct TYPE_14__ {TYPE_2__ dev; int * ops; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (TYPE_6__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_7 ;
 TYPE_6__* VAR_8 ;
 int * VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,char*,int ) ;
 struct iio_dev* FUNC_6 (int *,int) ;
 int FUNC_7 (int *,struct iio_dev*) ;
 TYPE_4__* FUNC_8 (int *,char*,int ,int ) ;
 int FUNC_9 (int *,TYPE_4__*) ;
 int FUNC_10 (int *,struct iio_dev*,int *,int *,int *) ;
 int FUNC_11 (int *,int ,TYPE_6__*) ;
 int FUNC_12 (int *,scalar_t__,int ,int ,int ,TYPE_4__*) ;
 int FUNC_13 (scalar_t__) ;
 int VAR_14 ;
 struct ad7766* FUNC_14 (struct iio_dev*) ;
 int FUNC_15 (TYPE_4__*,struct ad7766*) ;
 struct spi_device_id* FUNC_16 (struct spi_device*) ;
 int FUNC_17 (TYPE_3__*,int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (struct spi_device*,struct iio_dev*) ;

__attribute__((used)) static int FUNC_20(struct spi_device *VAR_15)
{
 const struct spi_device_id *VAR_16 = FUNC_16(VAR_15);
 struct iio_dev *VAR_17;
 struct ad7766 *VAR_18;
 int VAR_19;

 VAR_17 = FUNC_6(&VAR_15->dev, sizeof(*VAR_18));
 if (!VAR_17)
  return -VAR_3;

 VAR_18 = FUNC_14(VAR_17);
 VAR_18->chip_info = &VAR_9[VAR_16->driver_data];

 VAR_18->mclk = FUNC_4(&VAR_15->dev, "mclk");
 if (FUNC_1(VAR_18->mclk))
  return FUNC_2(VAR_18->mclk);

 VAR_18->reg[VAR_0].supply = "avdd";
 VAR_18->reg[VAR_1].supply = "dvdd";
 VAR_18->reg[VAR_2].supply = "vref";

 VAR_19 = FUNC_11(&VAR_15->dev, FUNC_0(VAR_18->reg),
  VAR_18->reg);
 if (VAR_19)
  return VAR_19;

 VAR_18->pd_gpio = FUNC_5(&VAR_15->dev, "powerdown",
  VAR_4);
 if (FUNC_1(VAR_18->pd_gpio))
  return FUNC_2(VAR_18->pd_gpio);

 VAR_17->dev.parent = &VAR_15->dev;
 VAR_17->name = FUNC_16(VAR_15)->name;
 VAR_17->modes = VAR_5;
 VAR_17->channels = VAR_8;
 VAR_17->num_channels = FUNC_0(VAR_8);
 VAR_17->info = &VAR_10;

 if (VAR_15->irq > 0) {
  VAR_18->trig = FUNC_8(&VAR_15->dev, "%s-dev%d",
   VAR_17->name, VAR_17->id);
  if (!VAR_18->trig)
   return -VAR_3;

  VAR_18->trig->ops = &VAR_13;
  VAR_18->trig->dev.parent = &VAR_15->dev;
  FUNC_15(VAR_18->trig, VAR_18);

  VAR_19 = FUNC_12(&VAR_15->dev, VAR_15->irq, VAR_11,
   VAR_6, FUNC_3(&VAR_15->dev),
   VAR_18->trig);
  if (VAR_19 < 0)
   return VAR_19;






  FUNC_13(VAR_15->irq);

  VAR_19 = FUNC_9(&VAR_15->dev, VAR_18->trig);
  if (VAR_19)
   return VAR_19;
 }

 FUNC_19(VAR_15, VAR_17);

 VAR_18->spi = VAR_15;


 VAR_18->xfer.rx_buf = &VAR_18->data[1];
 VAR_18->xfer.len = 3;

 FUNC_18(&VAR_18->msg);
 FUNC_17(&VAR_18->xfer, &VAR_18->msg);

 VAR_19 = FUNC_10(&VAR_15->dev, VAR_17,
  &VAR_14, &VAR_12,
  &VAR_7);
 if (VAR_19)
  return VAR_19;

 VAR_19 = FUNC_7(&VAR_15->dev, VAR_17);
 if (VAR_19)
  return VAR_19;
 return 0;
}
