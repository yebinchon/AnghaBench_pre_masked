
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct quad8_iio {int base; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int channel; } ;


 int VAR_0 ;
 struct quad8_iio* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (int const) ;

__attribute__((used)) static int FUNC_2(struct iio_dev *VAR_1,
 const struct iio_chan_spec *VAR_2)
{
 struct quad8_iio *const VAR_3 = FUNC_0(VAR_1);
 const int VAR_4 = VAR_3->base + 2 * VAR_2->channel + 1;

 return !!(FUNC_1(VAR_4) & VAR_0);
}
