
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max31856_data {int dummy; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int channel2; } ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 struct max31856_data* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (struct max31856_data*,struct iio_chan_spec const*,int*) ;

__attribute__((used)) static int FUNC_2(struct iio_dev *VAR_3,
        struct iio_chan_spec const *VAR_4,
        int *VAR_5, int *VAR_6, long VAR_7)
{
 struct max31856_data *VAR_8 = FUNC_0(VAR_3);
 int VAR_9;

 switch (VAR_7) {
 case 130:
  VAR_9 = FUNC_1(VAR_8, VAR_4, VAR_5);
  if (VAR_9)
   return VAR_9;
  return VAR_1;
 case 129:
  switch (VAR_4->channel2) {
  case 128:

   *VAR_5 = 15;
   *VAR_6 = 625000;
   VAR_9 = VAR_2;
   break;
  default:

   *VAR_5 = 7;
   *VAR_6 = 812500;
   return VAR_2;
  }
  break;
 default:
  VAR_9 = -VAR_0;
  break;
 }

 return VAR_9;
}
