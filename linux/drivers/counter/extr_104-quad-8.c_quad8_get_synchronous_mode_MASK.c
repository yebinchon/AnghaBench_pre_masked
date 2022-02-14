
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct quad8_iio {int* synchronous_mode; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {size_t channel; } ;


 struct quad8_iio* FUNC_0 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_1(struct iio_dev *VAR_0,
 const struct iio_chan_spec *VAR_1)
{
 const struct quad8_iio *const VAR_2 = FUNC_0(VAR_0);

 return VAR_2->synchronous_mode[VAR_1->channel];
}
