
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_dev {int dummy; } ;
struct TYPE_2__ {int realbits; } ;
struct iio_chan_spec {size_t channel; TYPE_1__ scan_type; } ;
struct ad7303_state {int* dac_cache; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ad7303_state*,struct iio_chan_spec const*) ;
 struct ad7303_state* FUNC_1 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_2(struct iio_dev *VAR_3,
 struct iio_chan_spec const *VAR_4, int *VAR_5, int *VAR_6, long VAR_7)
{
 struct ad7303_state *VAR_8 = FUNC_1(VAR_3);
 int VAR_9;

 switch (VAR_7) {
 case 129:
  *VAR_5 = VAR_8->dac_cache[VAR_4->channel];
  return VAR_2;
 case 128:
  VAR_9 = FUNC_0(VAR_8, VAR_4);
  if (VAR_9 < 0)
   return VAR_9;

  *VAR_5 = 2 * VAR_9 / 1000;
  *VAR_6 = VAR_4->scan_type.realbits;

  return VAR_1;
 default:
  break;
 }
 return -VAR_0;
}
