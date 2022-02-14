
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_dev {int dummy; } ;
struct i2c_client {int dev; } ;
struct ads1015_platform_data {int channel_data; } ;
struct ads1015_data {TYPE_1__* channel_data; } ;
struct TYPE_2__ {int data_rate; int pga; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct i2c_client*) ;
 struct ads1015_platform_data* FUNC_1 (int *) ;
 struct iio_dev* FUNC_2 (struct i2c_client*) ;
 struct ads1015_data* FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (TYPE_1__*,int ,int) ;

__attribute__((used)) static void FUNC_5(struct i2c_client *VAR_3)
{
 unsigned int VAR_4;

 struct iio_dev *VAR_5 = FUNC_2(VAR_3);
 struct ads1015_data *VAR_6 = FUNC_3(VAR_5);
 struct ads1015_platform_data *VAR_7 = FUNC_1(&VAR_3->dev);


 if (VAR_7) {
  FUNC_4(VAR_6->channel_data, VAR_7->channel_data,
         sizeof(VAR_6->channel_data));
  return;
 }






 for (VAR_4 = 0; VAR_4 < VAR_0; ++VAR_4) {
  VAR_6->channel_data[VAR_4].pga = VAR_2;
  VAR_6->channel_data[VAR_4].data_rate = VAR_1;
 }
}
