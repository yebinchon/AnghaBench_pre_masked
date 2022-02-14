
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max44000_data {int lock; int regmap; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int type; } ;


 int VAR_0 ;






 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct max44000_data* FUNC_0 (struct iio_dev*) ;
 int* VAR_7 ;
 int* VAR_8 ;
 int FUNC_1 (struct max44000_data*) ;
 int FUNC_2 (struct max44000_data*) ;
 int FUNC_3 (struct max44000_data*) ;
 int FUNC_4 (struct max44000_data*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_8(struct iio_dev *VAR_9,
        struct iio_chan_spec const *VAR_10,
        int *VAR_11, int *VAR_12, long VAR_13)
{
 struct max44000_data *VAR_14 = FUNC_0(VAR_9);
 int VAR_15, VAR_16;
 unsigned int VAR_17;
 int VAR_18;

 switch (VAR_13) {
 case 132:
  switch (VAR_10->type) {
  case 129:
   FUNC_5(&VAR_14->lock);
   VAR_18 = FUNC_3(VAR_14);
   FUNC_6(&VAR_14->lock);
   if (VAR_18 < 0)
    return VAR_18;
   *VAR_11 = VAR_18;
   return VAR_2;

  case 128:
   FUNC_5(&VAR_14->lock);
   VAR_18 = FUNC_7(VAR_14->regmap, VAR_6, &VAR_17);
   FUNC_6(&VAR_14->lock);
   if (VAR_18 < 0)
    return VAR_18;
   *VAR_11 = VAR_17;
   return VAR_2;

  case 130:
   FUNC_5(&VAR_14->lock);
   VAR_18 = FUNC_4(VAR_14);
   FUNC_6(&VAR_14->lock);
   if (VAR_18 < 0)
    return VAR_18;
   *VAR_11 = VAR_18;
   return VAR_2;

  default:
   return -VAR_0;
  }

 case 131:
  switch (VAR_10->type) {
  case 130:

   *VAR_11 = 10;
   return VAR_2;

  case 129:
   FUNC_5(&VAR_14->lock);
   VAR_16 = VAR_18 = FUNC_1(VAR_14);
   FUNC_6(&VAR_14->lock);
   if (VAR_18 < 0)
    return VAR_18;


   *VAR_11 = (1 << VAR_4);
   *VAR_12 = VAR_5
     + VAR_4
     - VAR_7[VAR_16];
   return VAR_1;

  default:
   return -VAR_0;
  }

 case 133:
  FUNC_5(&VAR_14->lock);
  VAR_15 = VAR_18 = FUNC_2(VAR_14);
  FUNC_6(&VAR_14->lock);

  if (VAR_18 < 0)
   return VAR_18;
  *VAR_11 = 0;
  *VAR_12 = VAR_8[VAR_15];
  return VAR_3;

 default:
  return -VAR_0;
 }
}
