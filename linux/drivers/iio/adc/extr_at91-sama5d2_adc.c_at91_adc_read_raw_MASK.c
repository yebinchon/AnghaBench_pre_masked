
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_dev {int dummy; } ;
struct TYPE_2__ {int realbits; } ;
struct iio_chan_spec {TYPE_1__ scan_type; int differential; } ;
struct at91_adc_state {int vref_uv; int oversampling_ratio; } ;


 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct at91_adc_state*) ;
 int FUNC_1 (struct iio_dev*,struct iio_chan_spec const*,int*) ;
 struct at91_adc_state* FUNC_2 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_3(struct iio_dev *VAR_3,
        struct iio_chan_spec const *VAR_4,
        int *VAR_5, int *VAR_6, long VAR_7)
{
 struct at91_adc_state *VAR_8 = FUNC_2(VAR_3);

 switch (VAR_7) {
 case 130:
  return FUNC_1(VAR_3, VAR_4, VAR_5);
 case 128:
  *VAR_5 = VAR_8->vref_uv / 1000;
  if (VAR_4->differential)
   *VAR_5 *= 2;
  *VAR_6 = VAR_4->scan_type.realbits;
  return VAR_1;

 case 129:
  *VAR_5 = FUNC_0(VAR_8);
  return VAR_2;

 case 131:
  *VAR_5 = VAR_8->oversampling_ratio;
  return VAR_2;

 default:
  return -VAR_0;
 }
}
