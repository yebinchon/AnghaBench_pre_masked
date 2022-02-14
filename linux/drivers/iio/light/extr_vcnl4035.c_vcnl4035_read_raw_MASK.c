
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vcnl4035_data {int als_it_val; int regmap; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int channel; } ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (struct iio_dev*) ;
 struct vcnl4035_data* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (int ,unsigned int,int*) ;
 int FUNC_4 (struct vcnl4035_data*,int) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_5,
       struct iio_chan_spec const *VAR_6, int *VAR_7,
       int *VAR_8, long VAR_9)
{
 struct vcnl4035_data *VAR_10 = FUNC_2(VAR_5);
 int VAR_11;
 int VAR_12;
 unsigned int VAR_13;

 switch (VAR_9) {
 case 129:
  VAR_11 = FUNC_4(VAR_10, 1);
  if (VAR_11 < 0)
   return VAR_11;

  VAR_11 = FUNC_0(VAR_5);
  if (!VAR_11) {
   if (VAR_6->channel)
    VAR_13 = VAR_3;
   else
    VAR_13 = VAR_4;
   VAR_11 = FUNC_3(VAR_10->regmap, VAR_13, &VAR_12);
   FUNC_1(VAR_5);
   if (!VAR_11) {
    *VAR_7 = VAR_12;
    VAR_11 = VAR_2;
   }
  }
  FUNC_4(VAR_10, 0);
  return VAR_11;
 case 130:
  *VAR_7 = 50;
  if (VAR_10->als_it_val)
   *VAR_7 = VAR_10->als_it_val * 100;
  return VAR_2;
 case 128:
  *VAR_7 = 64;
  if (!VAR_10->als_it_val)
   *VAR_8 = 1000;
  else
   *VAR_8 = VAR_10->als_it_val * 2 * 1000;
  return VAR_1;
 default:
  return -VAR_0;
 }
}
