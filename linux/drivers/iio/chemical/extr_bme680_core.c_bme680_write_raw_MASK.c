
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {int type; } ;
struct bme680_data {int oversampling_temp; int oversampling_press; int oversampling_humid; } ;


 int VAR_0 ;




 int FUNC_0 (struct bme680_data*) ;
 int FUNC_1 (int) ;
 struct bme680_data* FUNC_2 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_3(struct iio_dev *VAR_1,
       struct iio_chan_spec const *VAR_2,
       int VAR_3, int VAR_4, long VAR_5)
{
 struct bme680_data *VAR_6 = FUNC_2(VAR_1);

 if (VAR_4 != 0)
  return -VAR_0;

 switch (VAR_5) {
 case 131:
 {
  if (!FUNC_1(VAR_3))
   return -VAR_0;

  switch (VAR_2->type) {
  case 128:
   VAR_6->oversampling_temp = VAR_3;
   break;
  case 129:
   VAR_6->oversampling_press = VAR_3;
   break;
  case 130:
   VAR_6->oversampling_humid = VAR_3;
   break;
  default:
   return -VAR_0;
  }

  return FUNC_0(VAR_6);
 }
 default:
  return -VAR_0;
 }
}
