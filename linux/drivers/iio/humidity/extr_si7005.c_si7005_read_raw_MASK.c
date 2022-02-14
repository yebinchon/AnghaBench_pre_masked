
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct si7005_data {int dummy; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int type; } ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct si7005_data* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (struct si7005_data*,int) ;

__attribute__((used)) static int FUNC_2(struct iio_dev *VAR_4,
       struct iio_chan_spec const *VAR_5, int *VAR_6,
       int *VAR_7, long VAR_8)
{
 struct si7005_data *VAR_9 = FUNC_0(VAR_4);
 int VAR_10;

 switch (VAR_8) {
 case 129:
  VAR_10 = FUNC_1(VAR_9, VAR_5->type == VAR_1);
  if (VAR_10 < 0)
   return VAR_10;
  *VAR_6 = VAR_10;
  return VAR_2;
 case 128:
  if (VAR_5->type == VAR_1) {
   *VAR_6 = 7;
   *VAR_7 = 812500;
  } else {
   *VAR_6 = 3;
   *VAR_7 = 906250;
  }
  return VAR_3;
 case 130:
  if (VAR_5->type == VAR_1)
   *VAR_6 = -50 * 32 * 4;
  else
   *VAR_6 = -24 * 16 * 16;
  return VAR_2;
 default:
  break;
 }

 return -VAR_0;
}
