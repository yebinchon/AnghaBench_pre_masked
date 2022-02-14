
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {size_t scan_index; int channel2; } ;
struct bmc150_magn_data {int regmap; int mutex; } ;
typedef int s32 ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;







 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct bmc150_magn_data*,int*) ;
 int FUNC_3 (struct bmc150_magn_data*,int*) ;
 int FUNC_4 (struct bmc150_magn_data*,int) ;
 int FUNC_5 (struct iio_dev*) ;
 struct bmc150_magn_data* FUNC_6 (struct iio_dev*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,int ,int*) ;

__attribute__((used)) static int FUNC_10(struct iio_dev *VAR_7,
    struct iio_chan_spec const *VAR_8,
    int *VAR_9, int *VAR_10, long VAR_11)
{
 struct bmc150_magn_data *VAR_12 = FUNC_6(VAR_7);
 int VAR_13, VAR_14;
 s32 VAR_15[VAR_0];

 switch (VAR_11) {
 case 133:
  if (FUNC_5(VAR_7))
   return -VAR_3;
  FUNC_7(&VAR_12->mutex);

  VAR_13 = FUNC_4(VAR_12, 1);
  if (VAR_13 < 0) {
   FUNC_8(&VAR_12->mutex);
   return VAR_13;
  }

  VAR_13 = FUNC_3(VAR_12, VAR_15);
  if (VAR_13 < 0) {
   FUNC_4(VAR_12, 0);
   FUNC_8(&VAR_12->mutex);
   return VAR_13;
  }
  *VAR_9 = VAR_15[VAR_8->scan_index];

  VAR_13 = FUNC_4(VAR_12, 0);
  if (VAR_13 < 0) {
   FUNC_8(&VAR_12->mutex);
   return VAR_13;
  }

  FUNC_8(&VAR_12->mutex);
  return VAR_5;
 case 131:





  *VAR_9 = 0;
  *VAR_10 = 625;
  return VAR_6;
 case 132:
  VAR_13 = FUNC_2(VAR_12, VAR_9);
  if (VAR_13 < 0)
   return VAR_13;
  return VAR_5;
 case 134:
  switch (VAR_8->channel2) {
  case 130:
  case 129:
   VAR_13 = FUNC_9(VAR_12->regmap, VAR_1,
       &VAR_14);
   if (VAR_13 < 0)
    return VAR_13;
   *VAR_9 = FUNC_0(VAR_14);
   return VAR_5;
  case 128:
   VAR_13 = FUNC_9(VAR_12->regmap, VAR_2,
       &VAR_14);
   if (VAR_13 < 0)
    return VAR_13;
   *VAR_9 = FUNC_1(VAR_14);
   return VAR_5;
  default:
   return -VAR_4;
  }
 default:
  return -VAR_4;
 }
}
