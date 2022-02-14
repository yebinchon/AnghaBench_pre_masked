
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stk3310_data {int lock; struct i2c_client* client; } ;
struct TYPE_2__ {int * parent; } ;
struct iio_dev {int num_channels; int channels; int modes; int name; int * info; TYPE_1__ dev; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {scalar_t__ irq; int dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,char*,...) ;
 struct iio_dev* FUNC_2 (int *,int) ;
 int FUNC_3 (int *,scalar_t__,int ,int ,int,int ,struct iio_dev*) ;
 int FUNC_4 (struct i2c_client*,struct iio_dev*) ;
 int FUNC_5 (struct iio_dev*) ;
 struct stk3310_data* FUNC_6 (struct iio_dev*) ;
 int FUNC_7 (int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_8 (struct iio_dev*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_9 (struct stk3310_data*) ;
 int FUNC_10 (struct stk3310_data*,int ) ;

__attribute__((used)) static int FUNC_11(struct i2c_client *VAR_11,
    const struct i2c_device_id *VAR_12)
{
 int VAR_13;
 struct iio_dev *VAR_14;
 struct stk3310_data *VAR_15;

 VAR_14 = FUNC_2(&VAR_11->dev, sizeof(*VAR_15));
 if (!VAR_14) {
  FUNC_1(&VAR_11->dev, "iio allocation failed!\n");
  return -VAR_0;
 }

 VAR_15 = FUNC_6(VAR_14);
 VAR_15->client = VAR_11;
 FUNC_4(VAR_11, VAR_14);
 FUNC_7(&VAR_15->lock);

 VAR_13 = FUNC_9(VAR_15);
 if (VAR_13 < 0)
  return VAR_13;

 VAR_14->dev.parent = &VAR_11->dev;
 VAR_14->info = &VAR_8;
 VAR_14->name = VAR_4;
 VAR_14->modes = VAR_1;
 VAR_14->channels = VAR_7;
 VAR_14->num_channels = FUNC_0(VAR_7);

 VAR_13 = FUNC_8(VAR_14);
 if (VAR_13 < 0)
  return VAR_13;

 if (VAR_11->irq > 0) {
  VAR_13 = FUNC_3(&VAR_11->dev, VAR_11->irq,
      VAR_10,
      VAR_9,
      VAR_3 |
      VAR_2,
      VAR_5, VAR_14);
  if (VAR_13 < 0) {
   FUNC_1(&VAR_11->dev, "request irq %d failed\n",
    VAR_11->irq);
   goto err_standby;
  }
 }

 VAR_13 = FUNC_5(VAR_14);
 if (VAR_13 < 0) {
  FUNC_1(&VAR_11->dev, "device_register failed\n");
  goto err_standby;
 }

 return 0;

err_standby:
 FUNC_10(VAR_15, VAR_6);
 return VAR_13;
}
