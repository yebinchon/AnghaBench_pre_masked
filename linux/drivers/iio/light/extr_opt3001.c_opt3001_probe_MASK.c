
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct opt3001 {int use_irq; struct device* dev; int result_ready_queue; int lock; struct i2c_client* client; } ;
struct TYPE_2__ {struct device* parent; } ;
struct iio_dev {int * info; int modes; TYPE_1__ dev; int num_channels; int channels; int name; } ;
struct i2c_device_id {int dummy; } ;
struct device {int dummy; } ;
struct i2c_client {int irq; int name; struct device dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct device*,char*,...) ;
 struct iio_dev* FUNC_3 (struct device*,int) ;
 int FUNC_4 (struct device*,struct iio_dev*) ;
 int FUNC_5 (struct i2c_client*,struct iio_dev*) ;
 struct opt3001* FUNC_6 (struct iio_dev*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int VAR_4 ;
 int FUNC_9 (struct opt3001*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_10 (struct opt3001*) ;
 int FUNC_11 (int,int *,int ,int,char*,struct iio_dev*) ;

__attribute__((used)) static int FUNC_12(struct i2c_client *VAR_7,
  const struct i2c_device_id *VAR_8)
{
 struct device *VAR_9 = &VAR_7->dev;

 struct iio_dev *VAR_10;
 struct opt3001 *VAR_11;
 int VAR_12 = VAR_7->irq;
 int VAR_13;

 VAR_10 = FUNC_3(VAR_9, sizeof(*VAR_11));
 if (!VAR_10)
  return -VAR_0;

 VAR_11 = FUNC_6(VAR_10);
 VAR_11->client = VAR_7;
 VAR_11->dev = VAR_9;

 FUNC_8(&VAR_11->lock);
 FUNC_7(&VAR_11->result_ready_queue);
 FUNC_5(VAR_7, VAR_10);

 VAR_13 = FUNC_10(VAR_11);
 if (VAR_13)
  return VAR_13;

 VAR_13 = FUNC_9(VAR_11);
 if (VAR_13)
  return VAR_13;

 VAR_10->name = VAR_7->name;
 VAR_10->channels = VAR_4;
 VAR_10->num_channels = FUNC_0(VAR_4);
 VAR_10->dev.parent = VAR_9;
 VAR_10->modes = VAR_1;
 VAR_10->info = &VAR_5;

 VAR_13 = FUNC_4(VAR_9, VAR_10);
 if (VAR_13) {
  FUNC_2(VAR_9, "failed to register IIO device\n");
  return VAR_13;
 }


 if (VAR_12 > 0) {
  VAR_13 = FUNC_11(VAR_12, ((void*)0), VAR_6,
    VAR_3 | VAR_2,
    "opt3001", VAR_10);
  if (VAR_13) {
   FUNC_2(VAR_9, "failed to request IRQ #%d\n", VAR_12);
   return VAR_13;
  }
  VAR_11->use_irq = 1;
 } else {
  FUNC_1(VAR_11->dev, "enabling interrupt-less operation\n");
 }

 return 0;
}
