
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ of_node; TYPE_5__* parent; } ;
struct iio_dev {TYPE_3__* channels; int * info; void* num_channels; int modes; int name; TYPE_1__ dev; } ;
struct i2c_device_id {int driver_data; } ;
struct TYPE_18__ {scalar_t__ of_node; } ;
struct i2c_client {TYPE_5__ dev; int name; scalar_t__ irq; } ;
struct ads1015_data {unsigned int* data_rate; int event_channel; int conv_invalid; int regmap; TYPE_4__* thresh_data; int lock; } ;
typedef enum chip_ids { ____Placeholder_chip_ids } chip_ids ;
struct TYPE_17__ {int low_thresh; int high_thresh; } ;
struct TYPE_15__ {int realbits; } ;
struct TYPE_16__ {TYPE_2__ scan_type; } ;



 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

 void* FUNC_0 (void*) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 unsigned long VAR_17 ;


 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_18 ;
 void* VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_3 (struct i2c_client*) ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_4 (struct ads1015_data*,int ) ;
 int VAR_24 ;
 void* VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_5 (TYPE_5__*,char*) ;
 struct iio_dev* FUNC_6 (TYPE_5__*,int) ;
 int FUNC_7 (TYPE_5__*,struct iio_dev*,int *,int ,int *) ;
 int FUNC_8 (struct i2c_client*,int *) ;
 int FUNC_9 (TYPE_5__*,scalar_t__,int *,int ,unsigned long,int ,struct iio_dev*) ;
 int FUNC_10 (struct i2c_client*,struct iio_dev*) ;
 int FUNC_11 (struct iio_dev*) ;
 struct ads1015_data* FUNC_12 (struct iio_dev*) ;
 int FUNC_13 (scalar_t__) ;
 unsigned long FUNC_14 (int ) ;
 int FUNC_15 (int *) ;
 scalar_t__ FUNC_16 (TYPE_5__*) ;
 int FUNC_17 (TYPE_5__*) ;
 int FUNC_18 (TYPE_5__*) ;
 int FUNC_19 (TYPE_5__*,int ) ;
 int FUNC_20 (TYPE_5__*) ;
 int FUNC_21 (int ,int ,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_22(struct i2c_client *VAR_28,
    const struct i2c_device_id *VAR_29)
{
 struct iio_dev *VAR_30;
 struct ads1015_data *VAR_31;
 int VAR_32;
 enum chip_ids VAR_33;
 int VAR_34;

 VAR_30 = FUNC_6(&VAR_28->dev, sizeof(*VAR_31));
 if (!VAR_30)
  return -VAR_15;

 VAR_31 = FUNC_12(VAR_30);
 FUNC_10(VAR_28, VAR_30);

 FUNC_15(&VAR_31->lock);

 VAR_30->dev.parent = &VAR_28->dev;
 VAR_30->dev.of_node = VAR_28->dev.of_node;
 VAR_30->name = VAR_12;
 VAR_30->modes = VAR_16;

 if (VAR_28->dev.of_node)
  VAR_33 = (enum chip_ids)FUNC_16(&VAR_28->dev);
 else
  VAR_33 = VAR_29->driver_data;
 switch (VAR_33) {
 case 131:
  VAR_30->channels = VAR_19;
  VAR_30->num_channels = FUNC_0(VAR_19);
  VAR_30->info = &VAR_22;
  VAR_31->data_rate = (unsigned int *) &VAR_20;
  break;
 case 130:
  VAR_30->channels = VAR_25;
  VAR_30->num_channels = FUNC_0(VAR_25);
  VAR_30->info = &VAR_27;
  VAR_31->data_rate = (unsigned int *) &VAR_26;
  break;
 }

 VAR_31->event_channel = VAR_10;




 for (VAR_34 = 0; VAR_34 < VAR_10; VAR_34++) {
  int VAR_35 = VAR_30->channels[VAR_34].scan_type.realbits;

  VAR_31->thresh_data[VAR_34].low_thresh = -1 << (VAR_35 - 1);
  VAR_31->thresh_data[VAR_34].high_thresh = (1 << (VAR_35 - 1)) - 1;
 }


 FUNC_3(VAR_28);

 VAR_31->regmap = FUNC_8(VAR_28, &VAR_23);
 if (FUNC_1(VAR_31->regmap)) {
  FUNC_5(&VAR_28->dev, "Failed to allocate register map\n");
  return FUNC_2(VAR_31->regmap);
 }

 VAR_32 = FUNC_7(&VAR_28->dev, VAR_30, ((void*)0),
           VAR_24,
           &VAR_18);
 if (VAR_32 < 0) {
  FUNC_5(&VAR_28->dev, "iio triggered buffer setup failed\n");
  return VAR_32;
 }

 if (VAR_28->irq) {
  unsigned long VAR_36 =
   FUNC_14(FUNC_13(VAR_28->irq));
  unsigned int VAR_37 = VAR_7 |
   VAR_1 | VAR_5;
  unsigned int VAR_38 =
   VAR_0 << VAR_8 |
   1 << VAR_2;

  switch (VAR_36) {
  case 128:
   VAR_38 |= VAR_4 <<
     VAR_6;
   break;
  case 129:
   VAR_38 |= VAR_3 <<
     VAR_6;
   break;
  default:
   return -VAR_14;
  }

  VAR_32 = FUNC_21(VAR_31->regmap, VAR_9,
     VAR_37, VAR_38);
  if (VAR_32)
   return VAR_32;

  VAR_32 = FUNC_9(&VAR_28->dev, VAR_28->irq,
      ((void*)0), VAR_21,
      VAR_36 | VAR_17,
      VAR_28->name, VAR_30);
  if (VAR_32)
   return VAR_32;
 }

 VAR_32 = FUNC_4(VAR_31, VAR_11);
 if (VAR_32)
  return VAR_32;

 VAR_31->conv_invalid = 1;

 VAR_32 = FUNC_18(&VAR_28->dev);
 if (VAR_32)
  return VAR_32;
 FUNC_19(&VAR_28->dev, VAR_13);
 FUNC_20(&VAR_28->dev);
 FUNC_17(&VAR_28->dev);

 VAR_32 = FUNC_11(VAR_30);
 if (VAR_32 < 0) {
  FUNC_5(&VAR_28->dev, "Failed to register IIO device\n");
  return VAR_32;
 }

 return 0;
}
