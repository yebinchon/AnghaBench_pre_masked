
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sx9500_data {int dummy; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int type; } ;


 int VAR_0 ;



 int FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (struct iio_dev*) ;
 struct sx9500_data* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (struct sx9500_data*,struct iio_chan_spec const*,int*) ;
 int FUNC_4 (struct sx9500_data*,int*,int*) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_1,
      const struct iio_chan_spec *VAR_2,
      int *VAR_3, int *VAR_4, long VAR_5)
{
 struct sx9500_data *VAR_6 = FUNC_2(VAR_1);
 int VAR_7;

 switch (VAR_2->type) {
 case 128:
  switch (VAR_5) {
  case 130:
   VAR_7 = FUNC_0(VAR_1);
   if (VAR_7)
    return VAR_7;
   VAR_7 = FUNC_3(VAR_6, VAR_2, VAR_3);
   FUNC_1(VAR_1);
   return VAR_7;
  case 129:
   return FUNC_4(VAR_6, VAR_3, VAR_4);
  default:
   return -VAR_0;
  }
 default:
  return -VAR_0;
 }
}
