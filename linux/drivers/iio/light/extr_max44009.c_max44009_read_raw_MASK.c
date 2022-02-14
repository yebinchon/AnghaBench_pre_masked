
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max44009_data {int dummy; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int type; } ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct max44009_data* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (struct max44009_data*) ;
 int FUNC_2 (struct max44009_data*) ;

__attribute__((used)) static int FUNC_3(struct iio_dev *VAR_5,
        struct iio_chan_spec const *VAR_6, int *VAR_7,
        int *VAR_8, long VAR_9)
{
 struct max44009_data *VAR_10 = FUNC_0(VAR_5);
 int VAR_11;
 int VAR_12;

 switch (VAR_9) {
 case 129:
  switch (VAR_6->type) {
  case 128:
   VAR_12 = FUNC_2(VAR_10);
   if (VAR_12 < 0)
    return VAR_12;
   VAR_11 = VAR_12;

   *VAR_7 = VAR_11 * VAR_4;
   *VAR_8 = VAR_3;
   return VAR_1;
  default:
   return -VAR_0;
  }
 case 130:
  switch (VAR_6->type) {
  case 128:
   VAR_12 = FUNC_1(VAR_10);
   if (VAR_12 < 0)
    return VAR_12;

   *VAR_8 = VAR_12;
   *VAR_7 = 0;
   return VAR_2;
  default:
   return -VAR_0;
  }
 default:
  return -VAR_0;
 }
}
