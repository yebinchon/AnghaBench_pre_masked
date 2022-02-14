
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {size_t address; int type; } ;
struct hdc100x_data {int* adc_int_us; int lock; } ;


 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct hdc100x_data*) ;
 int FUNC_1 (struct hdc100x_data*,struct iio_chan_spec const*) ;
 int FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (struct iio_dev*) ;
 struct hdc100x_data* FUNC_4 (struct iio_dev*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct iio_dev *VAR_6,
       struct iio_chan_spec const *VAR_7, int *VAR_8,
       int *VAR_9, long VAR_10)
{
 struct hdc100x_data *VAR_11 = FUNC_4(VAR_6);

 switch (VAR_10) {
 case 129: {
  int VAR_12;

  FUNC_5(&VAR_11->lock);
  if (VAR_7->type == VAR_1) {
   *VAR_8 = FUNC_0(VAR_11);
   VAR_12 = VAR_4;
  } else {
   VAR_12 = FUNC_2(VAR_6);
   if (VAR_12) {
    FUNC_6(&VAR_11->lock);
    return VAR_12;
   }

   VAR_12 = FUNC_1(VAR_11, VAR_7);
   FUNC_3(VAR_6);
   if (VAR_12 >= 0) {
    *VAR_8 = VAR_12;
    VAR_12 = VAR_4;
   }
  }
  FUNC_6(&VAR_11->lock);
  return VAR_12;
 }
 case 131:
  *VAR_8 = 0;
  *VAR_9 = VAR_11->adc_int_us[VAR_7->address];
  return VAR_5;
 case 128:
  if (VAR_7->type == VAR_2) {
   *VAR_8 = 165000;
   *VAR_9 = 65536;
   return VAR_3;
  } else {
   *VAR_8 = 100;
   *VAR_9 = 65536;
   return VAR_3;
  }
  break;
 case 130:
  *VAR_8 = -15887;
  *VAR_9 = 515151;
  return VAR_5;
 default:
  return -VAR_0;
 }
}
