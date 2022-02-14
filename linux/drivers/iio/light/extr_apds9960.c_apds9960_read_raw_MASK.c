
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {int type; int address; } ;
struct apds9960_data {int als_adc_int_us; size_t pxs_gain; size_t als_gain; int lock; int regmap; scalar_t__ gesture_mode_running; } ;
typedef int __le16 ;


 int VAR_0 ;
 int VAR_1 ;





 int VAR_2 ;
 int VAR_3 ;
 int* VAR_4 ;
 int* VAR_5 ;
 int FUNC_0 (struct apds9960_data*,int) ;
 struct apds9960_data* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ,int *,int) ;
 int FUNC_6 (int ,int ,int*) ;

__attribute__((used)) static int FUNC_7(struct iio_dev *VAR_6,
        struct iio_chan_spec const *VAR_7,
        int *VAR_8, int *VAR_9, long VAR_10)
{
 struct apds9960_data *VAR_11 = FUNC_1(VAR_6);
 __le16 VAR_12;
 int VAR_13 = -VAR_1;

 if (VAR_11->gesture_mode_running)
  return -VAR_0;

 switch (VAR_10) {
 case 131:
  FUNC_0(VAR_11, 1);
  switch (VAR_7->type) {
  case 128:
   VAR_13 = FUNC_6(VAR_11->regmap, VAR_7->address, VAR_8);
   if (!VAR_13)
    VAR_13 = VAR_2;
   break;
  case 129:
   VAR_13 = FUNC_5(VAR_11->regmap, VAR_7->address,
            &VAR_12, 2);
   if (!VAR_13) {
    VAR_13 = VAR_2;
    *VAR_8 = FUNC_2(VAR_12);
   }
   break;
  default:
   VAR_13 = -VAR_1;
  }
  FUNC_0(VAR_11, 0);
  break;
 case 132:

  FUNC_3(&VAR_11->lock);
  switch (VAR_7->type) {
  case 129:
   *VAR_8 = 0;
   *VAR_9 = VAR_11->als_adc_int_us;
   VAR_13 = VAR_3;
   break;
  default:
   VAR_13 = -VAR_1;
  }
  FUNC_4(&VAR_11->lock);
  break;
 case 130:
  FUNC_3(&VAR_11->lock);
  switch (VAR_7->type) {
  case 128:
   *VAR_8 = VAR_5[VAR_11->pxs_gain];
   VAR_13 = VAR_2;
   break;
  case 129:
   *VAR_8 = VAR_4[VAR_11->als_gain];
   VAR_13 = VAR_2;
   break;
  default:
   VAR_13 = -VAR_1;
  }
  FUNC_4(&VAR_11->lock);
  break;
 }

 return VAR_13;
}
