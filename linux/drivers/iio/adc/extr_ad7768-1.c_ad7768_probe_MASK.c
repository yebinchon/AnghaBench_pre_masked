
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct spi_device {int dev; int irq; } ;
struct TYPE_8__ {int * parent; } ;
struct iio_dev {int modes; int name; int trig; int id; int * info; TYPE_1__ dev; int num_channels; int channels; } ;
struct ad7768_state {int completion; TYPE_4__* trig; int lock; int mclk; int mclk_freq; int vref; struct spi_device* spi; } ;
struct TYPE_9__ {int * parent; } ;
struct TYPE_11__ {TYPE_2__ dev; int * ops; } ;
struct TYPE_10__ {int name; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (struct ad7768_state*) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int *,int ,struct ad7768_state*) ;
 int FUNC_8 (int *,char*) ;
 struct iio_dev* FUNC_9 (int *,int) ;
 int FUNC_10 (int *,struct iio_dev*) ;
 TYPE_4__* FUNC_11 (int *,char*,int ,int ) ;
 int FUNC_12 (int *,TYPE_4__*) ;
 int FUNC_13 (int *,struct iio_dev*,int *,int *,int *) ;
 int FUNC_14 (int *,char*) ;
 int FUNC_15 (int *,int ,int *,int,int ,struct iio_dev*) ;
 int VAR_13 ;
 struct ad7768_state* FUNC_16 (struct iio_dev*) ;
 int FUNC_17 (TYPE_4__*) ;
 int FUNC_18 (TYPE_4__*,struct iio_dev*) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int ) ;
 TYPE_3__* FUNC_22 (struct spi_device*) ;
 int FUNC_23 (struct spi_device*,struct iio_dev*) ;

__attribute__((used)) static int FUNC_24(struct spi_device *VAR_14)
{
 struct ad7768_state *VAR_15;
 struct iio_dev *VAR_16;
 int VAR_17;

 VAR_16 = FUNC_9(&VAR_14->dev, sizeof(*VAR_15));
 if (!VAR_16)
  return -VAR_0;

 VAR_15 = FUNC_16(VAR_16);
 VAR_15->spi = VAR_14;

 VAR_15->vref = FUNC_14(&VAR_14->dev, "vref");
 if (FUNC_1(VAR_15->vref))
  return FUNC_2(VAR_15->vref);

 VAR_17 = FUNC_21(VAR_15->vref);
 if (VAR_17) {
  FUNC_6(&VAR_14->dev, "Failed to enable specified vref supply\n");
  return VAR_17;
 }

 VAR_17 = FUNC_7(&VAR_14->dev, VAR_10, VAR_15);
 if (VAR_17)
  return VAR_17;

 VAR_15->mclk = FUNC_8(&VAR_14->dev, "mclk");
 if (FUNC_1(VAR_15->mclk))
  return FUNC_2(VAR_15->mclk);

 VAR_17 = FUNC_5(VAR_15->mclk);
 if (VAR_17 < 0)
  return VAR_17;

 VAR_17 = FUNC_7(&VAR_14->dev, VAR_7, VAR_15);
 if (VAR_17)
  return VAR_17;

 VAR_15->mclk_freq = FUNC_4(VAR_15->mclk);

 FUNC_23(VAR_14, VAR_16);
 FUNC_20(&VAR_15->lock);

 VAR_16->channels = VAR_6;
 VAR_16->num_channels = FUNC_0(VAR_6);
 VAR_16->dev.parent = &VAR_14->dev;
 VAR_16->name = FUNC_22(VAR_14)->name;
 VAR_16->info = &VAR_8;
 VAR_16->modes = VAR_2 | VAR_1;

 VAR_17 = FUNC_3(VAR_15);
 if (VAR_17 < 0) {
  FUNC_6(&VAR_14->dev, "AD7768 setup failed\n");
  return VAR_17;
 }

 VAR_15->trig = FUNC_11(&VAR_14->dev, "%s-dev%d",
       VAR_16->name, VAR_16->id);
 if (!VAR_15->trig)
  return -VAR_0;

 VAR_15->trig->ops = &VAR_12;
 VAR_15->trig->dev.parent = &VAR_14->dev;
 FUNC_18(VAR_15->trig, VAR_16);
 VAR_17 = FUNC_12(&VAR_14->dev, VAR_15->trig);
 if (VAR_17)
  return VAR_17;

 VAR_16->trig = FUNC_17(VAR_15->trig);

 FUNC_19(&VAR_15->completion);

 VAR_17 = FUNC_15(&VAR_14->dev, VAR_14->irq,
          &VAR_9,
          VAR_4 | VAR_3,
          VAR_16->name, VAR_16);
 if (VAR_17)
  return VAR_17;

 VAR_17 = FUNC_13(&VAR_14->dev, VAR_16,
           &VAR_13,
           &VAR_11,
           &VAR_5);
 if (VAR_17)
  return VAR_17;

 return FUNC_10(&VAR_14->dev, VAR_16);
}
