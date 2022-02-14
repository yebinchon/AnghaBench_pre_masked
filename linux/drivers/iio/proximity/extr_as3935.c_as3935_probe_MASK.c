
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_17__ {struct device_node* of_node; } ;
struct spi_device {TYPE_4__ dev; int irq; } ;
struct TYPE_14__ {TYPE_4__* parent; } ;
struct iio_trigger {int * ops; TYPE_1__ dev; } ;
struct TYPE_15__ {TYPE_4__* parent; } ;
struct iio_dev {TYPE_2__ dev; int id; int name; int * info; int modes; int num_channels; int channels; } ;
struct device_node {int dummy; } ;
struct as3935_state {scalar_t__ tune_cap; scalar_t__ nflwdth_reg; int work; scalar_t__ noise_tripped; struct iio_trigger* trig; int lock; struct spi_device* spi; } ;
struct TYPE_16__ {int name; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,int ) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (struct as3935_state*) ;
 int FUNC_3 (TYPE_4__*,char*,...) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*,char*,scalar_t__) ;
 int FUNC_6 (TYPE_4__*,int ,struct iio_dev*) ;
 struct iio_dev* FUNC_7 (TYPE_4__*,int) ;
 int FUNC_8 (TYPE_4__*,struct iio_dev*) ;
 struct iio_trigger* FUNC_9 (TYPE_4__*,char*,int ,int ) ;
 int FUNC_10 (TYPE_4__*,struct iio_trigger*) ;
 int FUNC_11 (TYPE_4__*,struct iio_dev*,int ,int ,int *) ;
 int FUNC_12 (TYPE_4__*,int ,int *,int ,int ,struct iio_dev*) ;
 int VAR_13 ;
 int VAR_14 ;
 struct as3935_state* FUNC_13 (struct iio_dev*) ;
 int FUNC_14 (struct iio_trigger*,struct iio_dev*) ;
 scalar_t__ VAR_15 ;
 int FUNC_15 (int *) ;
 int FUNC_16 (struct device_node*,char*,scalar_t__*) ;
 TYPE_3__* FUNC_17 (struct spi_device*) ;
 int FUNC_18 (struct spi_device*,struct iio_dev*) ;

__attribute__((used)) static int FUNC_19(struct spi_device *VAR_16)
{
 struct iio_dev *VAR_17;
 struct iio_trigger *VAR_18;
 struct as3935_state *VAR_19;
 struct device_node *VAR_20 = VAR_16->dev.of_node;
 int VAR_21;


 if (!VAR_16->irq) {
  FUNC_3(&VAR_16->dev, "unable to get event interrupt\n");
  return -VAR_1;
 }

 VAR_17 = FUNC_7(&VAR_16->dev, sizeof(*VAR_19));
 if (!VAR_17)
  return -VAR_2;

 VAR_19 = FUNC_13(VAR_17);
 VAR_19->spi = VAR_16;

 FUNC_18(VAR_16, VAR_17);
 FUNC_15(&VAR_19->lock);

 VAR_21 = FUNC_16(VAR_20,
   "ams,tuning-capacitor-pf", &VAR_19->tune_cap);
 if (VAR_21) {
  VAR_19->tune_cap = 0;
  FUNC_5(&VAR_16->dev,
   "no tuning-capacitor-pf set, defaulting to %d",
   VAR_19->tune_cap);
 }

 if (VAR_19->tune_cap > VAR_6) {
  FUNC_3(&VAR_16->dev,
   "wrong tuning-capacitor-pf setting of %d\n",
   VAR_19->tune_cap);
  return -VAR_1;
 }

 VAR_21 = FUNC_16(VAR_20,
   "ams,nflwdth", &VAR_19->nflwdth_reg);
 if (!VAR_21 && VAR_19->nflwdth_reg > VAR_0) {
  FUNC_3(&VAR_16->dev,
   "invalid nflwdth setting of %d\n",
   VAR_19->nflwdth_reg);
  return -VAR_1;
 }

 VAR_17->dev.parent = &VAR_16->dev;
 VAR_17->name = FUNC_17(VAR_16)->name;
 VAR_17->channels = VAR_7;
 VAR_17->num_channels = FUNC_0(VAR_7);
 VAR_17->modes = VAR_4;
 VAR_17->info = &VAR_9;

 VAR_18 = FUNC_9(&VAR_16->dev, "%s-dev%d",
          VAR_17->name, VAR_17->id);

 if (!VAR_18)
  return -VAR_2;

 VAR_19->trig = VAR_18;
 VAR_19->noise_tripped = VAR_15 - VAR_3;
 VAR_18->dev.parent = VAR_17->dev.parent;
 FUNC_14(VAR_18, VAR_17);
 VAR_18->ops = &VAR_13;

 VAR_21 = FUNC_10(&VAR_16->dev, VAR_18);
 if (VAR_21) {
  FUNC_3(&VAR_16->dev, "failed to register trigger\n");
  return VAR_21;
 }

 VAR_21 = FUNC_11(&VAR_16->dev, VAR_17,
           VAR_14,
           VAR_12, ((void*)0));

 if (VAR_21) {
  FUNC_3(&VAR_16->dev, "cannot setup iio trigger\n");
  return VAR_21;
 }

 FUNC_2(VAR_19);

 FUNC_1(&VAR_19->work, VAR_8);
 VAR_21 = FUNC_6(&VAR_16->dev, VAR_11, VAR_17);
 if (VAR_21)
  return VAR_21;

 VAR_21 = FUNC_12(&VAR_16->dev, VAR_16->irq,
    &VAR_10,
    VAR_5,
    FUNC_4(&VAR_16->dev),
    VAR_17);

 if (VAR_21) {
  FUNC_3(&VAR_16->dev, "unable to request irq\n");
  return VAR_21;
 }

 VAR_21 = FUNC_8(&VAR_16->dev, VAR_17);
 if (VAR_21 < 0) {
  FUNC_3(&VAR_16->dev, "unable to register device\n");
  return VAR_21;
 }
 return 0;
}
