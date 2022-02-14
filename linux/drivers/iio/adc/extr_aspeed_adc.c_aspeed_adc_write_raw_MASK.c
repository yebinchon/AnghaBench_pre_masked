
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;
struct aspeed_adc_model_data {int min_sampling_rate; int max_sampling_rate; } ;
struct aspeed_adc_data {TYPE_1__* clk_scaler; int dev; } ;
struct TYPE_2__ {int clk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int FUNC_0 (int ,int) ;
 struct aspeed_adc_data* FUNC_1 (struct iio_dev*) ;
 struct aspeed_adc_model_data* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct iio_dev *VAR_3,
    struct iio_chan_spec const *VAR_4,
    int VAR_5, int VAR_6, long VAR_7)
{
 struct aspeed_adc_data *VAR_8 = FUNC_1(VAR_3);
 const struct aspeed_adc_model_data *VAR_9 =
   FUNC_2(VAR_8->dev);

 switch (VAR_7) {
 case 129:
  if (VAR_5 < VAR_9->min_sampling_rate ||
   VAR_5 > VAR_9->max_sampling_rate)
   return -VAR_1;

  FUNC_0(VAR_8->clk_scaler->clk,
    VAR_5 * VAR_0);
  return 0;

 case 128:
 case 130:






  return -VAR_2;

 default:
  return -VAR_1;
 }
}
