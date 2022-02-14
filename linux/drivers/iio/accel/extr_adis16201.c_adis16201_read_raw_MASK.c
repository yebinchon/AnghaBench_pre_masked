
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {size_t scan_index; int type; int channel; } ;
struct adis {int dummy; } ;
typedef int s16 ;


 int VAR_0 ;
 int VAR_1 ;





 int FUNC_0 (int) ;


 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

 int * VAR_5 ;
 int FUNC_1 (struct adis*,int ,int *) ;
 int FUNC_2 (struct iio_dev*,struct iio_chan_spec const*,int ,int*) ;
 struct adis* FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_6,
         struct iio_chan_spec const *VAR_7,
         int *VAR_8, int *VAR_9,
         long VAR_10)
{
 struct adis *VAR_11 = FUNC_3(VAR_6);
 int VAR_12;
 int VAR_13;
 u8 VAR_14;
 s16 VAR_15;

 switch (VAR_10) {
 case 132:
  return FUNC_2(VAR_6, VAR_7,
           VAR_0, VAR_8);
 case 131:
  switch (VAR_7->type) {
  case 128:
   if (VAR_7->channel == 0) {

    *VAR_8 = 1;
    *VAR_9 = 220000;
   } else {

    *VAR_8 = 0;
    *VAR_9 = 610000;
   }
   return VAR_3;
  case 129:
   *VAR_8 = -470;
   *VAR_9 = 0;
   return VAR_3;
  case 135:





   *VAR_8 = 0;
   *VAR_9 = FUNC_0(462400);
   return VAR_4;
  case 130:
   *VAR_8 = 0;
   *VAR_9 = 100000;
   return VAR_3;
  default:
   return -VAR_1;
  }
  break;
 case 133:





  *VAR_8 = 25000 / -470 - 1278;
  return VAR_2;
 case 134:
  switch (VAR_7->type) {
  case 135:
   VAR_13 = 12;
   break;
  case 130:
   VAR_13 = 9;
   break;
  default:
   return -VAR_1;
  }
  VAR_14 = VAR_5[VAR_7->scan_index];
  VAR_12 = FUNC_1(VAR_11, VAR_14, &VAR_15);
  if (VAR_12)
   return VAR_12;

  *VAR_8 = FUNC_4(VAR_15, VAR_13 - 1);
  return VAR_2;
 }

 return -VAR_1;
}
