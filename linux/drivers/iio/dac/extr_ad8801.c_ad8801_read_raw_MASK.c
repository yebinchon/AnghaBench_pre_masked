
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {size_t channel; } ;
struct ad8801_state {int* dac_cache; int vrefh_mv; int vrefl_mv; } ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 struct ad8801_state* FUNC_0 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_1(struct iio_dev *VAR_3,
 struct iio_chan_spec const *VAR_4, int *VAR_5, int *VAR_6, long VAR_7)
{
 struct ad8801_state *VAR_8 = FUNC_0(VAR_3);

 switch (VAR_7) {
 case 129:
  *VAR_5 = VAR_8->dac_cache[VAR_4->channel];
  return VAR_2;
 case 128:
  *VAR_5 = VAR_8->vrefh_mv - VAR_8->vrefl_mv;
  *VAR_6 = 8;
  return VAR_1;
 case 130:
  *VAR_5 = VAR_8->vrefl_mv;
  return VAR_2;
 default:
  return -VAR_0;
 }

 return -VAR_0;
}
