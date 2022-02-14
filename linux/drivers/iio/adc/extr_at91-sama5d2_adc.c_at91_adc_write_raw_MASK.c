
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;
struct TYPE_2__ {int min_sample_rate; int max_sample_rate; } ;
struct at91_adc_state {int oversampling_ratio; TYPE_1__ soc_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int FUNC_0 (struct at91_adc_state*) ;
 int FUNC_1 (struct at91_adc_state*,int) ;
 struct at91_adc_state* FUNC_2 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_3(struct iio_dev *VAR_4,
         struct iio_chan_spec const *VAR_5,
         int VAR_6, int VAR_7, long VAR_8)
{
 struct at91_adc_state *VAR_9 = FUNC_2(VAR_4);

 switch (VAR_8) {
 case 129:
  if ((VAR_6 != VAR_1) && (VAR_6 != VAR_2) &&
      (VAR_6 != VAR_0))
   return -VAR_3;

  if (VAR_6 == VAR_9->oversampling_ratio)
   return 0;
  VAR_9->oversampling_ratio = VAR_6;

  FUNC_0(VAR_9);
  return 0;
 case 128:
  if (VAR_6 < VAR_9->soc_info.min_sample_rate ||
      VAR_6 > VAR_9->soc_info.max_sample_rate)
   return -VAR_3;

  FUNC_1(VAR_9, VAR_6);
  return 0;
 default:
  return -VAR_3;
 };
}
