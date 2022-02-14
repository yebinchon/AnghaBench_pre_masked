
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int conv_mode; } ;
struct vf610_adc {TYPE_1__ adc_feature; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;


 struct vf610_adc* FUNC_0 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_1(struct iio_dev *VAR_0,
         const struct iio_chan_spec *VAR_1)
{
 struct vf610_adc *VAR_2 = FUNC_0(VAR_0);

 return VAR_2->adc_feature.conv_mode;
}
