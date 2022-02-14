
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {int channel2; } ;
struct bmc150_magn_data {int max_odr; int mutex; int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_3 ;





 int FUNC_2 (struct bmc150_magn_data*,int,int,int ) ;
 int FUNC_3 (struct bmc150_magn_data*,int) ;
 struct bmc150_magn_data* FUNC_4 (struct iio_dev*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_8(struct iio_dev *VAR_4,
     struct iio_chan_spec const *VAR_5,
     int VAR_6, int VAR_7, long VAR_8)
{
 struct bmc150_magn_data *VAR_9 = FUNC_4(VAR_4);
 int VAR_10;

 switch (VAR_8) {
 case 131:
  if (VAR_6 > VAR_9->max_odr)
   return -VAR_3;
  FUNC_5(&VAR_9->mutex);
  VAR_10 = FUNC_3(VAR_9, VAR_6);
  FUNC_6(&VAR_9->mutex);
  return VAR_10;
 case 132:
  switch (VAR_5->channel2) {
  case 130:
  case 129:
   if (VAR_6 < 1 || VAR_6 > 511)
    return -VAR_3;
   FUNC_5(&VAR_9->mutex);
   VAR_10 = FUNC_2(VAR_9, VAR_6, 0, 0);
   if (VAR_10 < 0) {
    FUNC_6(&VAR_9->mutex);
    return VAR_10;
   }
   VAR_10 = FUNC_7(VAR_9->regmap,
       VAR_1,
       VAR_0,
       FUNC_0
       (VAR_6));
   FUNC_6(&VAR_9->mutex);
   return VAR_10;
  case 128:
   if (VAR_6 < 1 || VAR_6 > 256)
    return -VAR_3;
   FUNC_5(&VAR_9->mutex);
   VAR_10 = FUNC_2(VAR_9, 0, VAR_6, 0);
   if (VAR_10 < 0) {
    FUNC_6(&VAR_9->mutex);
    return VAR_10;
   }
   VAR_10 = FUNC_7(VAR_9->regmap,
       VAR_2,
       VAR_0,
       FUNC_1
       (VAR_6));
   FUNC_6(&VAR_9->mutex);
   return VAR_10;
  default:
   return -VAR_3;
  }
 default:
  return -VAR_3;
 }
}
