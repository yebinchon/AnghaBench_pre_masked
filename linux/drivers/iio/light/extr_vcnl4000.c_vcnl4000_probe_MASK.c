
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vcnl4000_data {size_t id; int rev; TYPE_2__* chip_spec; struct i2c_client* client; } ;
struct TYPE_3__ {int * parent; } ;
struct iio_dev {int modes; int name; int num_channels; int channels; int * info; TYPE_1__ dev; } ;
struct i2c_device_id {size_t driver_data; } ;
struct i2c_client {int dev; } ;
struct TYPE_4__ {int (* init ) (struct vcnl4000_data*) ;int prod; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,char*,int ,int ) ;
 struct iio_dev* FUNC_2 (int *,int) ;
 int FUNC_3 (int *,struct iio_dev*) ;
 int FUNC_4 (struct i2c_client*,struct iio_dev*) ;
 struct vcnl4000_data* FUNC_5 (struct iio_dev*) ;
 int FUNC_6 (struct vcnl4000_data*) ;
 int VAR_3 ;
 TYPE_2__* VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_7(struct i2c_client *VAR_6,
     const struct i2c_device_id *VAR_7)
{
 struct vcnl4000_data *VAR_8;
 struct iio_dev *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_2(&VAR_6->dev, sizeof(*VAR_8));
 if (!VAR_9)
  return -VAR_0;

 VAR_8 = FUNC_5(VAR_9);
 FUNC_4(VAR_6, VAR_9);
 VAR_8->client = VAR_6;
 VAR_8->id = VAR_7->driver_data;
 VAR_8->chip_spec = &VAR_4[VAR_8->id];

 VAR_10 = VAR_8->chip_spec->init(VAR_8);
 if (VAR_10 < 0)
  return VAR_10;

 FUNC_1(&VAR_6->dev, "%s Ambient light/proximity sensor, Rev: %02x\n",
  VAR_8->chip_spec->prod, VAR_8->rev);

 VAR_9->dev.parent = &VAR_6->dev;
 VAR_9->info = &VAR_5;
 VAR_9->channels = VAR_3;
 VAR_9->num_channels = FUNC_0(VAR_3);
 VAR_9->name = VAR_2;
 VAR_9->modes = VAR_1;

 return FUNC_3(&VAR_6->dev, VAR_9);
}
