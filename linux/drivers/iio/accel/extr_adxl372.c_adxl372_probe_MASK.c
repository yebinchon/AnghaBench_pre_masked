
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct regmap {int dummy; } ;
struct TYPE_8__ {struct device* parent; } ;
struct iio_dev {char const* name; int modes; int trig; int id; int buffer; int * info; TYPE_1__ dev; int available_scan_masks; int num_channels; int channels; } ;
struct device {int dummy; } ;
struct adxl372_state {int irq; TYPE_3__* dready_trig; struct regmap* regmap; struct device* dev; } ;
struct TYPE_9__ {struct device* parent; } ;
struct TYPE_10__ {TYPE_2__ dev; int * ops; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct adxl372_state*) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct device*,struct iio_dev*) ;
 struct iio_dev* FUNC_4 (struct device*,int) ;
 int FUNC_5 (struct device*,struct iio_dev*) ;
 TYPE_3__* FUNC_6 (struct device*,char*,char const*,int ) ;
 int FUNC_7 (struct device*,TYPE_3__*) ;
 int FUNC_8 (struct device*,struct iio_dev*,int *,int ,int *) ;
 int FUNC_9 (struct device*,int,int ,int *,int,char const*,TYPE_3__*) ;
 int FUNC_10 (int ,int ) ;
 struct adxl372_state* FUNC_11 (struct iio_dev*) ;
 int VAR_12 ;
 int FUNC_12 (TYPE_3__*) ;
 int FUNC_13 (TYPE_3__*,struct iio_dev*) ;

int FUNC_14(struct device *VAR_13, struct regmap *VAR_14,
    int VAR_15, const char *VAR_16)
{
 struct iio_dev *VAR_17;
 struct adxl372_state *VAR_18;
 int VAR_19;

 VAR_17 = FUNC_4(VAR_13, sizeof(*VAR_18));
 if (!VAR_17)
  return -VAR_0;

 VAR_18 = FUNC_11(VAR_17);
 FUNC_3(VAR_13, VAR_17);

 VAR_18->dev = VAR_13;
 VAR_18->regmap = VAR_14;
 VAR_18->irq = VAR_15;

 VAR_17->channels = VAR_7;
 VAR_17->num_channels = FUNC_0(VAR_7);
 VAR_17->available_scan_masks = VAR_6;
 VAR_17->dev.parent = VAR_13;
 VAR_17->name = VAR_16;
 VAR_17->info = &VAR_9;
 VAR_17->modes = VAR_2 | VAR_1;

 VAR_19 = FUNC_1(VAR_18);
 if (VAR_19 < 0) {
  FUNC_2(VAR_13, "ADXL372 setup failed\n");
  return VAR_19;
 }

 VAR_19 = FUNC_8(VAR_13,
           VAR_17, ((void*)0),
           VAR_10,
           &VAR_5);
 if (VAR_19 < 0)
  return VAR_19;

 FUNC_10(VAR_17->buffer, VAR_8);

 if (VAR_18->irq) {
  VAR_18->dready_trig = FUNC_6(VAR_13,
        "%s-dev%d",
        VAR_17->name,
        VAR_17->id);
  if (VAR_18->dready_trig == ((void*)0))
   return -VAR_0;

  VAR_18->dready_trig->ops = &VAR_11;
  VAR_18->dready_trig->dev.parent = VAR_13;
  FUNC_13(VAR_18->dready_trig, VAR_17);
  VAR_19 = FUNC_7(VAR_13, VAR_18->dready_trig);
  if (VAR_19 < 0)
   return VAR_19;

  VAR_17->trig = FUNC_12(VAR_18->dready_trig);

  VAR_19 = FUNC_9(VAR_13, VAR_18->irq,
     VAR_12,
     ((void*)0),
     VAR_4 | VAR_3,
     VAR_17->name, VAR_18->dready_trig);
  if (VAR_19 < 0)
   return VAR_19;
 }

 return FUNC_5(VAR_13, VAR_17);
}
