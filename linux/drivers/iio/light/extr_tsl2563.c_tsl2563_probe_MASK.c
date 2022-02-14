
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct tsl2563_platform_data {int cover_comp_gain; } ;
struct tsl2563_chip {int low_thres; int high_thres; int cover_comp_gain; int poweroff_work; void* calib1; void* calib0; int intr; int gainlevel; int lock; struct i2c_client* client; } ;
struct TYPE_6__ {TYPE_2__* parent; } ;
struct iio_dev {int * info; int modes; TYPE_1__ dev; int num_channels; int channels; int name; } ;
struct i2c_device_id {int dummy; } ;
struct TYPE_7__ {struct device_node* of_node; struct tsl2563_platform_data* platform_data; } ;
struct i2c_client {TYPE_2__ dev; scalar_t__ irq; int name; } ;
struct device_node {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_2__*,char*,int) ;
 int FUNC_5 (TYPE_2__*,char*,int,int) ;
 struct iio_dev* FUNC_6 (TYPE_2__*,int) ;
 int FUNC_7 (TYPE_2__*,scalar_t__,int *,int *,int,char*,struct iio_dev*) ;
 int FUNC_8 (struct i2c_client*,struct tsl2563_chip*) ;
 int FUNC_9 (struct iio_dev*) ;
 struct tsl2563_chip* FUNC_10 (struct iio_dev*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct device_node*,char*,int*) ;
 int FUNC_13 (int *,int) ;
 void* FUNC_14 (int ) ;
 int VAR_6 ;
 int FUNC_15 (struct tsl2563_chip*) ;
 int FUNC_16 (struct tsl2563_chip*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_17 (struct tsl2563_chip*,int*) ;

__attribute__((used)) static int FUNC_18(struct i2c_client *VAR_12,
    const struct i2c_device_id *VAR_13)
{
 struct iio_dev *VAR_14;
 struct tsl2563_chip *VAR_15;
 struct tsl2563_platform_data *VAR_16 = VAR_12->dev.platform_data;
 struct device_node *VAR_17 = VAR_12->dev.of_node;
 int VAR_18 = 0;
 u8 VAR_19 = 0;

 VAR_14 = FUNC_6(&VAR_12->dev, sizeof(*VAR_15));
 if (!VAR_14)
  return -VAR_1;

 VAR_15 = FUNC_10(VAR_14);

 FUNC_8(VAR_12, VAR_15);
 VAR_15->client = VAR_12;

 VAR_18 = FUNC_16(VAR_15);
 if (VAR_18) {
  FUNC_4(&VAR_12->dev, "detect error %d\n", -VAR_18);
  return VAR_18;
 }

 VAR_18 = FUNC_17(VAR_15, &VAR_19);
 if (VAR_18) {
  FUNC_4(&VAR_12->dev, "read id error %d\n", -VAR_18);
  return VAR_18;
 }

 FUNC_11(&VAR_15->lock);


 VAR_15->low_thres = 0x0;
 VAR_15->high_thres = 0xffff;
 VAR_15->gainlevel = VAR_8;
 VAR_15->intr = FUNC_2(4);
 VAR_15->calib0 = FUNC_14(VAR_0);
 VAR_15->calib1 = FUNC_14(VAR_0);

 if (VAR_16)
  VAR_15->cover_comp_gain = VAR_16->cover_comp_gain;
 else if (VAR_17)
  FUNC_12(VAR_17, "amstaos,cover-comp-gain",
         &VAR_15->cover_comp_gain);
 else
  VAR_15->cover_comp_gain = 1;

 FUNC_5(&VAR_12->dev, "model %d, rev. %d\n", VAR_19 >> 4, VAR_19 & 0x0f);
 VAR_14->name = VAR_12->name;
 VAR_14->channels = VAR_6;
 VAR_14->num_channels = FUNC_0(VAR_6);
 VAR_14->dev.parent = &VAR_12->dev;
 VAR_14->modes = VAR_3;

 if (VAR_12->irq)
  VAR_14->info = &VAR_9;
 else
  VAR_14->info = &VAR_10;

 if (VAR_12->irq) {
  VAR_18 = FUNC_7(&VAR_12->dev, VAR_12->irq,
        ((void*)0),
        &VAR_7,
        VAR_5 | VAR_4,
        "tsl2563_event",
        VAR_14);
  if (VAR_18) {
   FUNC_4(&VAR_12->dev, "irq request error %d\n", -VAR_18);
   return VAR_18;
  }
 }

 VAR_18 = FUNC_15(VAR_15);
 if (VAR_18) {
  FUNC_4(&VAR_12->dev, "configure error %d\n", -VAR_18);
  return VAR_18;
 }

 FUNC_1(&VAR_15->poweroff_work, VAR_11);


 FUNC_13(&VAR_15->poweroff_work, 5 * VAR_2);

 VAR_18 = FUNC_9(VAR_14);
 if (VAR_18) {
  FUNC_4(&VAR_12->dev, "iio registration error %d\n", -VAR_18);
  goto fail;
 }

 return 0;

fail:
 FUNC_3(&VAR_15->poweroff_work);
 return VAR_18;
}
