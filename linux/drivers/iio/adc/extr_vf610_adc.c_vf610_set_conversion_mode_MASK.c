
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int conv_mode; } ;
struct vf610_adc {TYPE_1__ adc_feature; } ;
struct iio_dev {int mlock; } ;
struct iio_chan_spec {int dummy; } ;


 struct vf610_adc* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct vf610_adc*) ;
 int FUNC_4 (struct vf610_adc*) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_0,
         const struct iio_chan_spec *VAR_1,
         unsigned int VAR_2)
{
 struct vf610_adc *VAR_3 = FUNC_0(VAR_0);

 FUNC_1(&VAR_0->mlock);
 VAR_3->adc_feature.conv_mode = VAR_2;
 FUNC_3(VAR_3);
 FUNC_4(VAR_3);
 FUNC_2(&VAR_0->mlock);

 return 0;
}
