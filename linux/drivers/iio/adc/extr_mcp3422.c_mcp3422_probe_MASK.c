
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct mcp3422 {int id; int lock; struct i2c_client* i2c; } ;
struct TYPE_5__ {int of_node; TYPE_2__* parent; } ;
struct iio_dev {void* num_channels; void* channels; int * info; int modes; int name; TYPE_1__ dev; } ;
struct i2c_device_id {scalar_t__ driver_data; } ;
struct TYPE_6__ {int of_node; } ;
struct i2c_client {TYPE_2__ dev; int adapter; } ;


 void* FUNC_0 (void*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_6 ;
 int FUNC_4 (TYPE_2__*) ;
 struct iio_dev* FUNC_5 (TYPE_2__*,int) ;
 int FUNC_6 (TYPE_2__*,struct iio_dev*) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (struct i2c_client*,struct iio_dev*) ;
 struct mcp3422* FUNC_9 (struct iio_dev*) ;
 void* VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 int FUNC_10 (struct mcp3422*,int) ;
 void* VAR_10 ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int FUNC_12(struct i2c_client *VAR_11,
    const struct i2c_device_id *VAR_12)
{
 struct iio_dev *VAR_13;
 struct mcp3422 *VAR_14;
 int VAR_15;
 u8 VAR_16;

 if (!FUNC_7(VAR_11->adapter, VAR_2))
  return -VAR_1;

 VAR_13 = FUNC_5(&VAR_11->dev, sizeof(*VAR_14));
 if (!VAR_13)
  return -VAR_0;

 VAR_14 = FUNC_9(VAR_13);
 VAR_14->i2c = VAR_11;
 VAR_14->id = (u8)(VAR_12->driver_data);

 FUNC_11(&VAR_14->lock);

 VAR_13->dev.parent = &VAR_11->dev;
 VAR_13->dev.of_node = VAR_11->dev.of_node;
 VAR_13->name = FUNC_4(&VAR_11->dev);
 VAR_13->modes = VAR_3;
 VAR_13->info = &VAR_9;

 switch (VAR_14->id) {
 case 1:
 case 5:
  VAR_13->channels = VAR_7;
  VAR_13->num_channels = FUNC_0(VAR_7);
  break;
 case 2:
 case 3:
 case 6:
 case 7:
  VAR_13->channels = VAR_8;
  VAR_13->num_channels = FUNC_0(VAR_8);
  break;
 case 4:
 case 8:
  VAR_13->channels = VAR_10;
  VAR_13->num_channels = FUNC_0(VAR_10);
  break;
 }


 VAR_16 = (VAR_4
  | FUNC_1(0)
  | FUNC_2(VAR_5)
  | FUNC_3(VAR_6));
 VAR_15 = FUNC_10(VAR_14, VAR_16);
 if (VAR_15 < 0)
  return VAR_15;

 VAR_15 = FUNC_6(&VAR_11->dev, VAR_13);
 if (VAR_15 < 0)
  return VAR_15;

 FUNC_8(VAR_11, VAR_13);

 return 0;
}
