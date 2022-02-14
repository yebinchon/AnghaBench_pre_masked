
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct si1133_data {size_t* adc_sens; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int type; } ;


 int FUNC_0 (size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 struct si1133_data* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (struct si1133_data*,int*) ;
 int** VAR_7 ;
 int FUNC_3 (struct si1133_data*,struct iio_chan_spec const*,int*) ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_8,
      struct iio_chan_spec const *VAR_9,
      int *VAR_10, int *VAR_11, long VAR_12)
{
 struct si1133_data *VAR_13 = FUNC_1(VAR_8);
 u8 VAR_14 = VAR_13->adc_sens[0];
 int VAR_15;

 switch (VAR_12) {
 case 133:
  switch (VAR_9->type) {
  case 129:
   VAR_15 = FUNC_2(VAR_13, VAR_10);
   if (VAR_15)
    return VAR_15;

   return VAR_1;
  default:
   return -VAR_0;
  }
 case 132:
  switch (VAR_9->type) {
  case 130:
  case 128:
   VAR_15 = FUNC_3(VAR_13, VAR_9, VAR_10);
   if (VAR_15)
    return VAR_15;

   return VAR_1;
  default:
   return -VAR_0;
  }
 case 134:
  switch (VAR_9->type) {
  case 130:
  case 128:
   VAR_14 &= VAR_4;

   *VAR_10 = VAR_7[VAR_14][0];
   *VAR_11 = VAR_7[VAR_14][1];
   return VAR_2;
  default:
   return -VAR_0;
  }
 case 131:
  switch (VAR_9->type) {
  case 130:
  case 128:
   VAR_14 &= VAR_5;
   VAR_14 >>= VAR_6;

   *VAR_10 = FUNC_0(VAR_14);

   return VAR_1;
  default:
   return -VAR_0;
  }
 case 135:
  switch (VAR_9->type) {
  case 130:
  case 128:
   VAR_14 >>= VAR_3;

   *VAR_10 = VAR_14;

   return VAR_1;
  default:
   return -VAR_0;
  }
 default:
  return -VAR_0;
 }
}
