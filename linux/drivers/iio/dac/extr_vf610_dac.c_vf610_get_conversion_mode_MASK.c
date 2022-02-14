
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vf610_dac {int conv_mode; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;


 struct vf610_dac* FUNC_0 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_1(struct iio_dev *VAR_0,
    const struct iio_chan_spec *VAR_1)
{
 struct vf610_dac *VAR_2 = FUNC_0(VAR_0);

 return VAR_2->conv_mode;
}
