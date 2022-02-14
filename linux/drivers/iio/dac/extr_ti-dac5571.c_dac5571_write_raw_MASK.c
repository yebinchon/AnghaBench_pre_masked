
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_dev {int dummy; } ;
struct iio_chan_spec {size_t channel; } ;
struct dac5571_data {int* val; int (* dac5571_cmd ) (struct dac5571_data*,size_t,int) ;int lock; int powerdown; TYPE_1__* spec; } ;
struct TYPE_2__ {int resolution; } ;


 int VAR_0 ;
 int VAR_1 ;

 struct dac5571_data* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct dac5571_data*,size_t,int) ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_2,
        struct iio_chan_spec const *VAR_3,
        int VAR_4, int VAR_5, long VAR_6)
{
 struct dac5571_data *VAR_7 = FUNC_0(VAR_2);
 int VAR_8;

 switch (VAR_6) {
 case 128:
  if (VAR_7->val[VAR_3->channel] == VAR_4)
   return 0;

  if (VAR_4 >= (1 << VAR_7->spec->resolution) || VAR_4 < 0)
   return -VAR_1;

  if (VAR_7->powerdown)
   return -VAR_0;

  FUNC_1(&VAR_7->lock);
  VAR_8 = VAR_7->dac5571_cmd(VAR_7, VAR_3->channel, VAR_4);
  if (VAR_8 == 0)
   VAR_7->val[VAR_3->channel] = VAR_4;
  FUNC_2(&VAR_7->lock);
  return VAR_8;

 default:
  return -VAR_1;
 }
}
