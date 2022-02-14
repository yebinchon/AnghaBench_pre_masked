
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct spi_device {scalar_t__ irq; int dev; } ;
struct TYPE_8__ {int * parent; } ;
struct iio_dev {int id; int name; int * info; int num_channels; int channels; TYPE_1__ dev; int modes; } ;
struct afe4403_data {scalar_t__ irq; int regulator; TYPE_3__* trig; int * dev; int regmap; int * fields; struct spi_device* spi; } ;
struct TYPE_9__ {int * parent; } ;
struct TYPE_10__ {TYPE_2__ dev; int * ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int * VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_3 (int *,char*) ;
 struct iio_dev* FUNC_4 (int *,int) ;
 TYPE_3__* FUNC_5 (int *,char*,int ,int ) ;
 int FUNC_6 (int *,int ,int ) ;
 int FUNC_7 (struct spi_device*,int *) ;
 int FUNC_8 (int *,char*) ;
 int FUNC_9 (int *,scalar_t__,int ,int *,int ,int ,TYPE_3__*) ;
 int FUNC_10 (struct iio_dev*) ;
 int VAR_14 ;
 struct afe4403_data* FUNC_11 (struct iio_dev*) ;
 int VAR_15 ;
 int FUNC_12 (TYPE_3__*) ;
 int FUNC_13 (TYPE_3__*,struct iio_dev*) ;
 int FUNC_14 (TYPE_3__*) ;
 int FUNC_15 (struct iio_dev*) ;
 int FUNC_16 (struct iio_dev*,int *,int ,int *) ;
 int FUNC_17 (int ,int ,int ) ;
 int FUNC_18 (int ,int ,int ) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (struct spi_device*,struct iio_dev*) ;

__attribute__((used)) static int FUNC_22(struct spi_device *VAR_16)
{
 struct iio_dev *VAR_17;
 struct afe4403_data *VAR_18;
 int VAR_19, VAR_20;

 VAR_17 = FUNC_4(&VAR_16->dev, sizeof(*VAR_18));
 if (!VAR_17)
  return -VAR_3;

 VAR_18 = FUNC_11(VAR_17);
 FUNC_21(VAR_16, VAR_17);

 VAR_18->dev = &VAR_16->dev;
 VAR_18->spi = VAR_16;
 VAR_18->irq = VAR_16->irq;

 VAR_18->regmap = FUNC_7(VAR_16, &VAR_11);
 if (FUNC_1(VAR_18->regmap)) {
  FUNC_3(VAR_18->dev, "Unable to allocate register map\n");
  return FUNC_2(VAR_18->regmap);
 }

 for (VAR_19 = 0; VAR_19 < VAR_4; VAR_19++) {
  VAR_18->fields[VAR_19] = FUNC_6(VAR_18->dev, VAR_18->regmap,
        VAR_9[VAR_19]);
  if (FUNC_1(VAR_18->fields[VAR_19])) {
   FUNC_3(VAR_18->dev, "Unable to allocate regmap fields\n");
   return FUNC_2(VAR_18->fields[VAR_19]);
  }
 }

 VAR_18->regulator = FUNC_8(VAR_18->dev, "tx_sup");
 if (FUNC_1(VAR_18->regulator)) {
  FUNC_3(VAR_18->dev, "Unable to get regulator\n");
  return FUNC_2(VAR_18->regulator);
 }
 VAR_20 = FUNC_20(VAR_18->regulator);
 if (VAR_20) {
  FUNC_3(VAR_18->dev, "Unable to enable regulator\n");
  return VAR_20;
 }

 VAR_20 = FUNC_18(VAR_18->regmap, VAR_1,
      VAR_2);
 if (VAR_20) {
  FUNC_3(VAR_18->dev, "Unable to reset device\n");
  goto err_disable_reg;
 }

 VAR_20 = FUNC_17(VAR_18->regmap, VAR_10,
         FUNC_0(VAR_10));
 if (VAR_20) {
  FUNC_3(VAR_18->dev, "Unable to set register defaults\n");
  goto err_disable_reg;
 }

 VAR_17->modes = VAR_5;
 VAR_17->dev.parent = VAR_18->dev;
 VAR_17->channels = VAR_7;
 VAR_17->num_channels = FUNC_0(VAR_7);
 VAR_17->name = VAR_0;
 VAR_17->info = &VAR_8;

 if (VAR_18->irq > 0) {
  VAR_18->trig = FUNC_5(VAR_18->dev,
         "%s-dev%d",
         VAR_17->name,
         VAR_17->id);
  if (!VAR_18->trig) {
   FUNC_3(VAR_18->dev, "Unable to allocate IIO trigger\n");
   VAR_20 = -VAR_3;
   goto err_disable_reg;
  }

  FUNC_13(VAR_18->trig, VAR_17);

  VAR_18->trig->ops = &VAR_13;
  VAR_18->trig->dev.parent = VAR_18->dev;

  VAR_20 = FUNC_12(VAR_18->trig);
  if (VAR_20) {
   FUNC_3(VAR_18->dev, "Unable to register IIO trigger\n");
   goto err_disable_reg;
  }

  VAR_20 = FUNC_9(VAR_18->dev, VAR_18->irq,
      VAR_15,
      ((void*)0), VAR_6,
      VAR_0,
      VAR_18->trig);
  if (VAR_20) {
   FUNC_3(VAR_18->dev, "Unable to request IRQ\n");
   goto err_trig;
  }
 }

 VAR_20 = FUNC_16(VAR_17, &VAR_14,
      VAR_12, ((void*)0));
 if (VAR_20) {
  FUNC_3(VAR_18->dev, "Unable to setup buffer\n");
  goto err_trig;
 }

 VAR_20 = FUNC_10(VAR_17);
 if (VAR_20) {
  FUNC_3(VAR_18->dev, "Unable to register IIO device\n");
  goto err_buff;
 }

 return 0;

err_buff:
 FUNC_15(VAR_17);
err_trig:
 if (VAR_18->irq > 0)
  FUNC_14(VAR_18->trig);
err_disable_reg:
 FUNC_19(VAR_18->regulator);

 return VAR_20;
}
