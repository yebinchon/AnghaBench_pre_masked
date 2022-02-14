
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_dev {int dummy; } ;
struct iio_chan_spec {int scan_index; } ;
struct hmc5843_data {TYPE_1__* variant; int regmap; } ;
struct TYPE_2__ {int* regval_to_nanoscale; int** regval_to_samp_freq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;



 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct hmc5843_data*,int ,int*) ;
 struct hmc5843_data* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (int ,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_3(struct iio_dev *VAR_7,
       struct iio_chan_spec const *VAR_8,
       int *VAR_9, int *VAR_10, long VAR_11)
{
 struct hmc5843_data *VAR_12 = FUNC_1(VAR_7);
 unsigned int VAR_13;
 int VAR_14;

 switch (VAR_11) {
 case 130:
  return FUNC_0(VAR_12, VAR_8->scan_index, VAR_9);
 case 128:
  VAR_14 = FUNC_2(VAR_12->regmap, VAR_2, &VAR_13);
  if (VAR_14 < 0)
   return VAR_14;
  VAR_13 >>= VAR_3;
  *VAR_9 = 0;
  *VAR_10 = VAR_12->variant->regval_to_nanoscale[VAR_13];
  return VAR_6;
 case 129:
  VAR_14 = FUNC_2(VAR_12->regmap, VAR_1, &VAR_13);
  if (VAR_14 < 0)
   return VAR_14;
  VAR_13 >>= VAR_4;
  *VAR_9 = VAR_12->variant->regval_to_samp_freq[VAR_13][0];
  *VAR_10 = VAR_12->variant->regval_to_samp_freq[VAR_13][1];
  return VAR_5;
 }
 return -VAR_0;
}
