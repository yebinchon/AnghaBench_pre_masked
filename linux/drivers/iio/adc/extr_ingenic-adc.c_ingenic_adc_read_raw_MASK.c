
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ingenic_adc {TYPE_1__* soc_data; int low_vref_mode; int clk; scalar_t__ base; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int channel; } ;
struct TYPE_2__ {int battery_high_vref; int battery_high_vref_bits; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct ingenic_adc* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (struct ingenic_adc*,int ) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_9,
    struct iio_chan_spec const *VAR_10,
    int *VAR_11,
    int *VAR_12,
    long VAR_13)
{
 struct ingenic_adc *VAR_14 = FUNC_2(VAR_9);
 int VAR_15;

 switch (VAR_13) {
 case 131:
  FUNC_1(VAR_14->clk);
  VAR_15 = FUNC_3(VAR_14, VAR_10->channel);
  if (VAR_15) {
   FUNC_0(VAR_14->clk);
   return VAR_15;
  }

  switch (VAR_10->channel) {
  case 129:
   *VAR_11 = FUNC_4(VAR_14->base + VAR_8);
   break;
  case 128:
   *VAR_11 = FUNC_4(VAR_14->base + VAR_7);
   break;
  }

  FUNC_0(VAR_14->clk);

  return VAR_2;
 case 130:
  switch (VAR_10->channel) {
  case 129:
   *VAR_11 = VAR_3;
   *VAR_12 = VAR_4;
   break;
  case 128:
   if (VAR_14->low_vref_mode) {
    *VAR_11 = VAR_5;
    *VAR_12 = VAR_6;
   } else {
    *VAR_11 = VAR_14->soc_data->battery_high_vref;
    *VAR_12 = VAR_14->soc_data->battery_high_vref_bits;
   }
   break;
  }

  return VAR_1;
 default:
  return -VAR_0;
 }
}
