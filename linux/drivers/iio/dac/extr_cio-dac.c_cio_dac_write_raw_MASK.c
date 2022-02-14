
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {int channel; } ;
struct cio_dac_iio {int* chan_out_states; scalar_t__ base; } ;


 int VAR_0 ;
 long VAR_1 ;
 struct cio_dac_iio* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct iio_dev *VAR_2,
 struct iio_chan_spec const *VAR_3, int VAR_4, int VAR_5, long VAR_6)
{
 struct cio_dac_iio *const VAR_7 = FUNC_0(VAR_2);
 const unsigned int VAR_8 = 2 * VAR_3->channel;

 if (VAR_6 != VAR_1)
  return -VAR_0;


 if ((unsigned int)VAR_4 > 65535)
  return -VAR_0;

 VAR_7->chan_out_states[VAR_3->channel] = VAR_4;
 FUNC_1(VAR_4, VAR_7->base + VAR_8);

 return 0;
}
