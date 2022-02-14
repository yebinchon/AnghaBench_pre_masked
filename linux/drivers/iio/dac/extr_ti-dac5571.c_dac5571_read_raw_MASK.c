
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_dev {int dummy; } ;
struct iio_chan_spec {size_t channel; } ;
struct dac5571_data {int* val; TYPE_1__* spec; int vref; } ;
struct TYPE_2__ {int resolution; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 struct dac5571_data* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct iio_dev *VAR_3,
       struct iio_chan_spec const *VAR_4,
       int *VAR_5, int *VAR_6, long VAR_7)
{
 struct dac5571_data *VAR_8 = FUNC_0(VAR_3);
 int VAR_9;

 switch (VAR_7) {
 case 129:
  *VAR_5 = VAR_8->val[VAR_4->channel];
  return VAR_2;

 case 128:
  VAR_9 = FUNC_1(VAR_8->vref);
  if (VAR_9 < 0)
   return VAR_9;

  *VAR_5 = VAR_9 / 1000;
  *VAR_6 = VAR_8->spec->resolution;
  return VAR_1;

 default:
  return -VAR_0;
 }
}
