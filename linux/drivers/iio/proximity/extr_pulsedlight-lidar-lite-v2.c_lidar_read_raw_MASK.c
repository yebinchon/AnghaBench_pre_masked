
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct lidar_data {int dummy; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (struct iio_dev*) ;
 struct lidar_data* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (struct lidar_data*,int*) ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_4,
     struct iio_chan_spec const *VAR_5,
     int *VAR_6, int *VAR_7, long VAR_8)
{
 struct lidar_data *VAR_9 = FUNC_2(VAR_4);
 int VAR_10 = -VAR_1;

 switch (VAR_8) {
 case 129: {
  u16 VAR_11;

  if (FUNC_0(VAR_4))
   return -VAR_0;

  VAR_10 = FUNC_3(VAR_9, &VAR_11);
  if (!VAR_10) {
   *VAR_6 = VAR_11;
   VAR_10 = VAR_2;
  }
  FUNC_1(VAR_4);
  break;
 }
 case 128:
  *VAR_6 = 0;
  *VAR_7 = 10000;
  VAR_10 = VAR_3;
  break;
 }

 return VAR_10;
}
