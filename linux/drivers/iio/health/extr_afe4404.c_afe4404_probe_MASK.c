
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int * parent; } ;
struct iio_dev {int id; int name; int * info; int num_channels; int channels; TYPE_1__ dev; int modes; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {scalar_t__ irq; int dev; } ;
struct afe4404_data {scalar_t__ irq; int regulator; TYPE_3__* trig; int * dev; int regmap; int * fields; } ;
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
 int FUNC_7 (struct i2c_client*,int *) ;
 int FUNC_8 (int *,char*) ;
 int FUNC_9 (int *,scalar_t__,int ,int *,int ,int ,TYPE_3__*) ;
 int FUNC_10 (struct i2c_client*,struct iio_dev*) ;
 int FUNC_11 (struct iio_dev*) ;
 int VAR_14 ;
 struct afe4404_data* FUNC_12 (struct iio_dev*) ;
 int VAR_15 ;
 int FUNC_13 (TYPE_3__*) ;
 int FUNC_14 (TYPE_3__*,struct iio_dev*) ;
 int FUNC_15 (TYPE_3__*) ;
 int FUNC_16 (struct iio_dev*) ;
 int FUNC_17 (struct iio_dev*,int *,int ,int *) ;
 int FUNC_18 (int ,int ,int ) ;
 int FUNC_19 (int ,int ,int ) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (int ) ;

__attribute__((used)) static int FUNC_22(struct i2c_client *VAR_16,
    const struct i2c_device_id *VAR_17)
{
 struct iio_dev *VAR_18;
 struct afe4404_data *VAR_19;
 int VAR_20, VAR_21;

 VAR_18 = FUNC_4(&VAR_16->dev, sizeof(*VAR_19));
 if (!VAR_18)
  return -VAR_3;

 VAR_19 = FUNC_12(VAR_18);
 FUNC_10(VAR_16, VAR_18);

 VAR_19->dev = &VAR_16->dev;
 VAR_19->irq = VAR_16->irq;

 VAR_19->regmap = FUNC_7(VAR_16, &VAR_11);
 if (FUNC_1(VAR_19->regmap)) {
  FUNC_3(VAR_19->dev, "Unable to allocate register map\n");
  return FUNC_2(VAR_19->regmap);
 }

 for (VAR_20 = 0; VAR_20 < VAR_4; VAR_20++) {
  VAR_19->fields[VAR_20] = FUNC_6(VAR_19->dev, VAR_19->regmap,
        VAR_9[VAR_20]);
  if (FUNC_1(VAR_19->fields[VAR_20])) {
   FUNC_3(VAR_19->dev, "Unable to allocate regmap fields\n");
   return FUNC_2(VAR_19->fields[VAR_20]);
  }
 }

 VAR_19->regulator = FUNC_8(VAR_19->dev, "tx_sup");
 if (FUNC_1(VAR_19->regulator)) {
  FUNC_3(VAR_19->dev, "Unable to get regulator\n");
  return FUNC_2(VAR_19->regulator);
 }
 VAR_21 = FUNC_21(VAR_19->regulator);
 if (VAR_21) {
  FUNC_3(VAR_19->dev, "Unable to enable regulator\n");
  return VAR_21;
 }

 VAR_21 = FUNC_19(VAR_19->regmap, VAR_1,
      VAR_2);
 if (VAR_21) {
  FUNC_3(VAR_19->dev, "Unable to reset device\n");
  goto disable_reg;
 }

 VAR_21 = FUNC_18(VAR_19->regmap, VAR_10,
         FUNC_0(VAR_10));
 if (VAR_21) {
  FUNC_3(VAR_19->dev, "Unable to set register defaults\n");
  goto disable_reg;
 }

 VAR_18->modes = VAR_5;
 VAR_18->dev.parent = VAR_19->dev;
 VAR_18->channels = VAR_7;
 VAR_18->num_channels = FUNC_0(VAR_7);
 VAR_18->name = VAR_0;
 VAR_18->info = &VAR_8;

 if (VAR_19->irq > 0) {
  VAR_19->trig = FUNC_5(VAR_19->dev,
         "%s-dev%d",
         VAR_18->name,
         VAR_18->id);
  if (!VAR_19->trig) {
   FUNC_3(VAR_19->dev, "Unable to allocate IIO trigger\n");
   VAR_21 = -VAR_3;
   goto disable_reg;
  }

  FUNC_14(VAR_19->trig, VAR_18);

  VAR_19->trig->ops = &VAR_13;
  VAR_19->trig->dev.parent = VAR_19->dev;

  VAR_21 = FUNC_13(VAR_19->trig);
  if (VAR_21) {
   FUNC_3(VAR_19->dev, "Unable to register IIO trigger\n");
   goto disable_reg;
  }

  VAR_21 = FUNC_9(VAR_19->dev, VAR_19->irq,
      VAR_15,
      ((void*)0), VAR_6,
      VAR_0,
      VAR_19->trig);
  if (VAR_21) {
   FUNC_3(VAR_19->dev, "Unable to request IRQ\n");
   goto disable_reg;
  }
 }

 VAR_21 = FUNC_17(VAR_18, &VAR_14,
      VAR_12, ((void*)0));
 if (VAR_21) {
  FUNC_3(VAR_19->dev, "Unable to setup buffer\n");
  goto unregister_trigger;
 }

 VAR_21 = FUNC_11(VAR_18);
 if (VAR_21) {
  FUNC_3(VAR_19->dev, "Unable to register IIO device\n");
  goto unregister_triggered_buffer;
 }

 return 0;

unregister_triggered_buffer:
 FUNC_16(VAR_18);
unregister_trigger:
 if (VAR_19->irq > 0)
  FUNC_15(VAR_19->trig);
disable_reg:
 FUNC_20(VAR_19->regulator);

 return VAR_21;
}
