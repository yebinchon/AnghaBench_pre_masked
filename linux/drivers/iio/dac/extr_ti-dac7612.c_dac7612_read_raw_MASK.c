
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {size_t channel; } ;
struct dac7612 {int* cache; } ;


 int VAR_0 ;


 int VAR_1 ;
 struct dac7612* FUNC_0 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_1(struct iio_dev *VAR_2,
       const struct iio_chan_spec *VAR_3,
       int *VAR_4, int *VAR_5, long VAR_6)
{
 struct dac7612 *VAR_7;

 switch (VAR_6) {
 case 129:
  VAR_7 = FUNC_0(VAR_2);
  *VAR_4 = VAR_7->cache[VAR_3->channel];
  return VAR_1;

 case 128:
  *VAR_4 = 1;
  return VAR_1;

 default:
  return -VAR_0;
 }
}
