
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mb1232_data {int irqnr; int ranging; int lock; struct i2c_client* client; } ;
struct TYPE_2__ {struct device* parent; } ;
struct iio_dev {int num_channels; int channels; int modes; TYPE_1__ dev; int name; int * info; } ;
struct i2c_device_id {int name; } ;
struct device {int of_node; } ;
struct i2c_client {int adapter; struct device dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct device*,char*,...) ;
 struct iio_dev* FUNC_2 (struct device*,int) ;
 int FUNC_3 (struct device*,struct iio_dev*) ;
 int FUNC_4 (struct device*,struct iio_dev*,int ,int ,int *) ;
 int FUNC_5 (struct device*,int,int ,int ,int ,struct iio_dev*) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (struct i2c_client*,struct iio_dev*) ;
 int VAR_6 ;
 struct mb1232_data* FUNC_8 (struct iio_dev*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int FUNC_12(struct i2c_client *VAR_11,
      const struct i2c_device_id *VAR_12)
{
 struct iio_dev *VAR_13;
 struct mb1232_data *VAR_14;
 int VAR_15;
 struct device *VAR_16 = &VAR_11->dev;

 if (!FUNC_6(VAR_11->adapter,
     VAR_2 |
     VAR_3))
  return -VAR_0;

 VAR_13 = FUNC_2(VAR_16, sizeof(*VAR_14));
 if (!VAR_13)
  return -VAR_1;

 VAR_14 = FUNC_8(VAR_13);
 FUNC_7(VAR_11, VAR_13);
 VAR_14->client = VAR_11;

 VAR_13->info = &VAR_9;
 VAR_13->name = VAR_12->name;
 VAR_13->dev.parent = VAR_16;
 VAR_13->modes = VAR_4;
 VAR_13->channels = VAR_7;
 VAR_13->num_channels = FUNC_0(VAR_7);

 FUNC_11(&VAR_14->lock);

 FUNC_9(&VAR_14->ranging);

 VAR_14->irqnr = FUNC_10(VAR_16->of_node, 0);
 if (VAR_14->irqnr <= 0) {

  VAR_14->irqnr = -1;
 } else {
  VAR_15 = FUNC_5(VAR_16, VAR_14->irqnr, VAR_8,
    VAR_5, VAR_12->name, VAR_13);
  if (VAR_15 < 0) {
   FUNC_1(VAR_16, "request_irq: %d\n", VAR_15);
   return VAR_15;
  }
 }

 VAR_15 = FUNC_4(VAR_16, VAR_13,
   VAR_6, VAR_10, ((void*)0));
 if (VAR_15 < 0) {
  FUNC_1(VAR_16, "setup of iio triggered buffer failed\n");
  return VAR_15;
 }

 return FUNC_3(VAR_16, VAR_13);
}
