
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tmp006_data {int config; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int type; } ;
typedef int s32 ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct tmp006_data* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (int,int) ;
 int** VAR_10 ;
 int FUNC_2 (struct tmp006_data*,int ) ;

__attribute__((used)) static int FUNC_3(struct iio_dev *VAR_11,
       struct iio_chan_spec const *VAR_12, int *VAR_13,
       int *VAR_14, long VAR_15)
{
 struct tmp006_data *VAR_16 = FUNC_0(VAR_11);
 s32 VAR_17;
 int VAR_18;

 switch (VAR_15) {
 case 130:
  if (VAR_12->type == VAR_4) {

   VAR_17 = FUNC_2(VAR_16, VAR_9);
   if (VAR_17 < 0)
    return VAR_17;
   *VAR_13 = FUNC_1(VAR_17, 15);
  } else if (VAR_12->type == VAR_1) {

   VAR_17 = FUNC_2(VAR_16, VAR_7);
   if (VAR_17 < 0)
    return VAR_17;
   *VAR_13 = FUNC_1(VAR_17, 15) >> VAR_8;
  } else {
   break;
  }
  return VAR_2;
 case 128:
  if (VAR_12->type == VAR_4) {
   *VAR_13 = 0;
   *VAR_14 = 156250;
  } else if (VAR_12->type == VAR_1) {
   *VAR_13 = 31;
   *VAR_14 = 250000;
  } else {
   break;
  }
  return VAR_3;
 case 129:
  VAR_18 = (VAR_16->config & VAR_5)
   >> VAR_6;
  *VAR_13 = VAR_10[VAR_18][0];
  *VAR_14 = VAR_10[VAR_18][1];
  return VAR_3;
 default:
  break;
 }

 return -VAR_0;
}
