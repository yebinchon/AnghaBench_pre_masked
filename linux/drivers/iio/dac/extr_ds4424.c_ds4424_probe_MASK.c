
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* parent; int of_node; } ;
struct iio_dev {int * info; int modes; int channels; int num_channels; TYPE_1__ dev; int name; } ;
struct i2c_device_id {int driver_data; int name; } ;
struct TYPE_6__ {int of_node; } ;
struct i2c_client {TYPE_2__ dev; } ;
struct ds4424_data {int vcc_reg; int lock; struct i2c_client* client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,char*,...) ;
 struct iio_dev* FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (TYPE_2__*,char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (struct iio_dev*) ;
 int FUNC_6 (struct i2c_client*,struct iio_dev*) ;
 int FUNC_7 (struct iio_dev*) ;
 struct ds4424_data* FUNC_8 (struct iio_dev*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int,int) ;

__attribute__((used)) static int FUNC_13(struct i2c_client *VAR_7,
   const struct i2c_device_id *VAR_8)
{
 struct ds4424_data *VAR_9;
 struct iio_dev *VAR_10;
 int VAR_11;

 VAR_10 = FUNC_3(&VAR_7->dev, sizeof(*VAR_9));
 if (!VAR_10) {
  FUNC_2(&VAR_7->dev, "iio dev alloc failed.\n");
  return -VAR_2;
 }

 VAR_9 = FUNC_8(VAR_10);
 FUNC_6(VAR_7, VAR_10);
 VAR_9->client = VAR_7;
 VAR_10->name = VAR_8->name;
 VAR_10->dev.of_node = VAR_7->dev.of_node;
 VAR_10->dev.parent = &VAR_7->dev;

 VAR_9->vcc_reg = FUNC_4(&VAR_7->dev, "vcc");
 if (FUNC_0(VAR_9->vcc_reg)) {
  FUNC_2(&VAR_7->dev,
   "Failed to get vcc-supply regulator. err: %ld\n",
    FUNC_1(VAR_9->vcc_reg));
  return FUNC_1(VAR_9->vcc_reg);
 }

 FUNC_9(&VAR_9->lock);
 VAR_11 = FUNC_11(VAR_9->vcc_reg);
 if (VAR_11 < 0) {
  FUNC_2(&VAR_7->dev,
    "Unable to enable the regulator.\n");
  return VAR_11;
 }

 FUNC_12(1000, 1200);
 VAR_11 = FUNC_5(VAR_10);
 if (VAR_11 < 0)
  goto fail;

 switch (VAR_8->driver_data) {
 case 129:
  VAR_10->num_channels = VAR_0;
  break;
 case 128:
  VAR_10->num_channels = VAR_1;
  break;
 default:
  FUNC_2(&VAR_7->dev,
    "ds4424: Invalid chip id.\n");
  VAR_11 = -VAR_3;
  goto fail;
 }

 VAR_10->channels = VAR_5;
 VAR_10->modes = VAR_4;
 VAR_10->info = &VAR_6;

 VAR_11 = FUNC_7(VAR_10);
 if (VAR_11 < 0) {
  FUNC_2(&VAR_7->dev,
    "iio_device_register failed. ret: %d\n", VAR_11);
  goto fail;
 }

 return VAR_11;

fail:
 FUNC_10(VAR_9->vcc_reg);
 return VAR_11;
}
