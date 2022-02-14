
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {int type; } ;
struct bme680_data {int oversampling_temp; int oversampling_press; int oversampling_humid; } ;


 int VAR_0 ;






 int VAR_1 ;
 int FUNC_0 (struct bme680_data*,int*) ;
 int FUNC_1 (struct bme680_data*,int*,int*) ;
 int FUNC_2 (struct bme680_data*,int*,int*) ;
 int FUNC_3 (struct bme680_data*,int*) ;
 struct bme680_data* FUNC_4 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_2,
      struct iio_chan_spec const *VAR_3,
      int *VAR_4, int *VAR_5, long VAR_6)
{
 struct bme680_data *VAR_7 = FUNC_4(VAR_2);

 switch (VAR_6) {
 case 132:
  switch (VAR_3->type) {
  case 128:
   return FUNC_3(VAR_7, VAR_4);
  case 130:
   return FUNC_2(VAR_7, VAR_4, VAR_5);
  case 131:
   return FUNC_1(VAR_7, VAR_4, VAR_5);
  case 129:
   return FUNC_0(VAR_7, VAR_4);
  default:
   return -VAR_0;
  }
 case 133:
  switch (VAR_3->type) {
  case 128:
   *VAR_4 = VAR_7->oversampling_temp;
   return VAR_1;
  case 130:
   *VAR_4 = VAR_7->oversampling_press;
   return VAR_1;
  case 131:
   *VAR_4 = VAR_7->oversampling_humid;
   return VAR_1;
  default:
   return -VAR_0;
  }
 default:
  return -VAR_0;
 }
}
