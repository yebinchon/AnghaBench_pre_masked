
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {size_t channel; } ;
struct cio_dac_iio {int* chan_out_states; } ;


 int VAR_0 ;
 long VAR_1 ;
 int VAR_2 ;
 struct cio_dac_iio* FUNC_0 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_1(struct iio_dev *VAR_3,
 struct iio_chan_spec const *VAR_4, int *VAR_5, int *VAR_6, long VAR_7)
{
 struct cio_dac_iio *const VAR_8 = FUNC_0(VAR_3);

 if (VAR_7 != VAR_1)
  return -VAR_0;

 *VAR_5 = VAR_8->chan_out_states[VAR_4->channel];

 return VAR_2;
}
