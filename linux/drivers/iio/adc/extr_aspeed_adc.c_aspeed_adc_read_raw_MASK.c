
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_dev {int dummy; } ;
struct iio_chan_spec {scalar_t__ address; } ;
struct aspeed_adc_model_data {int vref_voltage; } ;
struct aspeed_adc_data {TYPE_1__* clk_scaler; scalar_t__ base; int dev; } ;
struct TYPE_2__ {int clk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 struct aspeed_adc_data* FUNC_1 (struct iio_dev*) ;
 struct aspeed_adc_model_data* FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_5,
          struct iio_chan_spec const *VAR_6,
          int *VAR_7, int *VAR_8, long VAR_9)
{
 struct aspeed_adc_data *VAR_10 = FUNC_1(VAR_5);
 const struct aspeed_adc_model_data *VAR_11 =
   FUNC_2(VAR_10->dev);

 switch (VAR_9) {
 case 130:
  *VAR_7 = FUNC_3(VAR_10->base + VAR_6->address);
  return VAR_4;

 case 128:
  *VAR_7 = VAR_11->vref_voltage;
  *VAR_8 = VAR_1;
  return VAR_3;

 case 129:
  *VAR_7 = FUNC_0(VAR_10->clk_scaler->clk) /
    VAR_0;
  return VAR_4;

 default:
  return -VAR_2;
 }
}
