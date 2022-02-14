
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * parent; } ;
struct iio_dev {int num_channels; int channels; int * info; int modes; int name; TYPE_1__ dev; } ;
struct i2c_device_id {unsigned long driver_data; } ;
struct i2c_client {int dev; int adapter; } ;
struct abp_state {int mreq_len; int lock; struct i2c_client* client; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct iio_dev*,unsigned long) ;
 int FUNC_2 (int *) ;
 struct iio_dev* FUNC_3 (int *,int) ;
 int FUNC_4 (int *,struct iio_dev*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct i2c_client*,struct abp_state*) ;
 struct abp_state* FUNC_7 (struct iio_dev*) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct i2c_client *VAR_5,
   const struct i2c_device_id *VAR_6)
{
 struct iio_dev *VAR_7;
 struct abp_state *VAR_8;
 unsigned long VAR_9 = VAR_6->driver_data;

 VAR_7 = FUNC_3(&VAR_5->dev, sizeof(*VAR_8));
 if (!VAR_7)
  return -VAR_0;

 VAR_8 = FUNC_7(VAR_7);
 FUNC_6(VAR_5, VAR_8);
 VAR_8->client = VAR_5;

 if (!FUNC_5(VAR_5->adapter, VAR_1))
  VAR_8->mreq_len = 1;

 FUNC_1(VAR_7, VAR_9);

 VAR_7->dev.parent = &VAR_5->dev;
 VAR_7->name = FUNC_2(&VAR_5->dev);
 VAR_7->modes = VAR_2;
 VAR_7->info = &VAR_4;

 VAR_7->channels = VAR_3;
 VAR_7->num_channels = FUNC_0(VAR_3);

 FUNC_8(&VAR_8->lock);

 return FUNC_4(&VAR_5->dev, VAR_7);
}
