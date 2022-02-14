
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct max517_platform_data {int* vref_mv; } ;
struct max517_data {int* vref_mv; struct i2c_client* client; } ;
struct TYPE_3__ {TYPE_2__* parent; } ;
struct iio_dev {int num_channels; int * info; int modes; int channels; TYPE_1__ dev; } ;
struct i2c_device_id {int driver_data; } ;
struct TYPE_4__ {struct max517_platform_data* platform_data; } ;
struct i2c_client {TYPE_2__ dev; } ;


 int VAR_0 ;




 int VAR_1 ;
 struct iio_dev* FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (struct i2c_client*,struct iio_dev*) ;
 int FUNC_2 (struct iio_dev*) ;
 struct max517_data* FUNC_3 (struct iio_dev*) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_4,
   const struct i2c_device_id *VAR_5)
{
 struct max517_data *VAR_6;
 struct iio_dev *VAR_7;
 struct max517_platform_data *VAR_8 = VAR_4->dev.platform_data;
 int VAR_9;

 VAR_7 = FUNC_0(&VAR_4->dev, sizeof(*VAR_6));
 if (!VAR_7)
  return -VAR_0;
 VAR_6 = FUNC_3(VAR_7);
 FUNC_1(VAR_4, VAR_7);
 VAR_6->client = VAR_4;


 VAR_7->dev.parent = &VAR_4->dev;

 switch (VAR_5->driver_data) {
 case 128:
  VAR_7->num_channels = 8;
  break;
 case 129:
  VAR_7->num_channels = 4;
  break;
 case 130:
 case 131:
  VAR_7->num_channels = 2;
  break;
 default:
  VAR_7->num_channels = 1;
  break;
 }
 VAR_7->channels = VAR_2;
 VAR_7->modes = VAR_1;
 VAR_7->info = &VAR_3;





 for (VAR_9 = 0; VAR_9 < VAR_7->num_channels; VAR_9++) {
  if (VAR_5->driver_data == 131 || !VAR_8)
   VAR_6->vref_mv[VAR_9] = 5000;
  else
   VAR_6->vref_mv[VAR_9] = VAR_8->vref_mv[VAR_9];
 }

 return FUNC_2(VAR_7);
}
