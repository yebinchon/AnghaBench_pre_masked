
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_dev {int dummy; } ;
struct iio_chan_spec {int const type; } ;
struct bmc150_scale_info {int scale; int reg_range; } ;
struct bmc150_accel_data {int mutex; int range; TYPE_1__* chip_info; } ;
struct TYPE_2__ {struct bmc150_scale_info* scale_table; } ;


 int FUNC_0 (struct bmc150_scale_info*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;






 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct bmc150_accel_data*,struct iio_chan_spec const*,int*) ;
 int FUNC_2 (struct bmc150_accel_data*,int*,int*) ;
 int FUNC_3 (struct bmc150_accel_data*,int*) ;
 int FUNC_4 (struct iio_dev*) ;
 struct bmc150_accel_data* FUNC_5 (struct iio_dev*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct iio_dev *VAR_5,
     struct iio_chan_spec const *VAR_6,
     int *VAR_7, int *VAR_8, long VAR_9)
{
 struct bmc150_accel_data *VAR_10 = FUNC_5(VAR_5);
 int VAR_11;

 switch (VAR_9) {
 case 131:
  switch (VAR_6->type) {
  case 128:
   return FUNC_3(VAR_10, VAR_7);
  case 133:
   if (FUNC_4(VAR_5))
    return -VAR_1;
   else
    return FUNC_1(VAR_10, VAR_6, VAR_7);
  default:
   return -VAR_2;
  }
 case 132:
  if (VAR_6->type == 128) {
   *VAR_7 = VAR_0;
   return VAR_3;
  } else {
   return -VAR_2;
  }
 case 129:
  *VAR_7 = 0;
  switch (VAR_6->type) {
  case 128:
   *VAR_8 = 500000;
   return VAR_4;
  case 133:
  {
   int VAR_12;
   const struct bmc150_scale_info *VAR_13;
   int VAR_14 = FUNC_0(VAR_10->chip_info->scale_table);

   for (VAR_12 = 0; VAR_12 < VAR_14; ++VAR_12) {
    VAR_13 = &VAR_10->chip_info->scale_table[VAR_12];
    if (VAR_13->reg_range == VAR_10->range) {
     *VAR_8 = VAR_13->scale;
     return VAR_4;
    }
   }
   return -VAR_2;
  }
  default:
   return -VAR_2;
  }
 case 130:
  FUNC_6(&VAR_10->mutex);
  VAR_11 = FUNC_2(VAR_10, VAR_7, VAR_8);
  FUNC_7(&VAR_10->mutex);
  return VAR_11;
 default:
  return -VAR_2;
 }
}
