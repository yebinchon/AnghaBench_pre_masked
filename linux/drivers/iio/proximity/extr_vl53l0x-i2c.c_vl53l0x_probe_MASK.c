
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vl53l0x_data {struct i2c_client* client; } ;
struct TYPE_2__ {int * parent; } ;
struct iio_dev {char* name; int modes; int num_channels; int channels; int * info; TYPE_1__ dev; } ;
struct i2c_client {int dev; int adapter; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct iio_dev* FUNC_1 (int *,int) ;
 int FUNC_2 (int *,struct iio_dev*) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (struct i2c_client*,struct iio_dev*) ;
 struct vl53l0x_data* FUNC_5 (struct iio_dev*) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_6(struct i2c_client *VAR_7)
{
 struct vl53l0x_data *VAR_8;
 struct iio_dev *VAR_9;

 VAR_9 = FUNC_1(&VAR_7->dev, sizeof(*VAR_8));
 if (!VAR_9)
  return -VAR_0;

 VAR_8 = FUNC_5(VAR_9);
 VAR_8->client = VAR_7;
 FUNC_4(VAR_7, VAR_9);

 if (!FUNC_3(VAR_7->adapter,
         VAR_3 |
         VAR_2))
  return -VAR_1;

 VAR_9->dev.parent = &VAR_7->dev;
 VAR_9->name = "vl53l0x";
 VAR_9->info = &VAR_6;
 VAR_9->channels = VAR_5;
 VAR_9->num_channels = FUNC_0(VAR_5);
 VAR_9->modes = VAR_4;

 return FUNC_2(&VAR_7->dev, VAR_9);
}
