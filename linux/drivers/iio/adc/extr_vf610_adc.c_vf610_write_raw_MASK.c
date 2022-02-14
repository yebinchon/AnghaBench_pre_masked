
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sample_rate; } ;
struct vf610_adc {int* sample_freq_avail; TYPE_1__ adc_feature; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;

 struct vf610_adc* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (struct vf610_adc*) ;

__attribute__((used)) static int FUNC_3(struct iio_dev *VAR_1,
   struct iio_chan_spec const *VAR_2,
   int VAR_3,
   int VAR_4,
   long VAR_5)
{
 struct vf610_adc *VAR_6 = FUNC_1(VAR_1);
 int VAR_7;

 switch (VAR_5) {
 case 128:
  for (VAR_7 = 0;
   VAR_7 < FUNC_0(VAR_6->sample_freq_avail);
   VAR_7++)
   if (VAR_3 == VAR_6->sample_freq_avail[VAR_7]) {
    VAR_6->adc_feature.sample_rate = VAR_7;
    FUNC_2(VAR_6);
    return 0;
   }
  break;

 default:
  break;
 }

 return -VAR_0;
}
