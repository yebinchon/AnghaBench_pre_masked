
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct stk8ba50_data {size_t range; size_t sample_rate_idx; int lock; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int address; } ;
struct TYPE_4__ {int samp_freq; } ;
struct TYPE_3__ {int scale_val; } ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct iio_dev*) ;
 struct stk8ba50_data* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (struct stk8ba50_data*,int ) ;
 TYPE_2__* VAR_7 ;
 TYPE_1__* VAR_8 ;
 int FUNC_6 (struct stk8ba50_data*,int ) ;

__attribute__((used)) static int FUNC_7(struct iio_dev *VAR_9,
        struct iio_chan_spec const *VAR_10,
        int *VAR_11, int *VAR_12, long VAR_13)
{
 struct stk8ba50_data *VAR_14 = FUNC_1(VAR_9);
 int VAR_15;

 switch (VAR_13) {
 case 130:
  if (FUNC_0(VAR_9))
   return -VAR_0;
  FUNC_2(&VAR_14->lock);
  VAR_15 = FUNC_6(VAR_14, VAR_5);
  if (VAR_15 < 0) {
   FUNC_3(&VAR_14->lock);
   return -VAR_1;
  }
  VAR_15 = FUNC_5(VAR_14, VAR_10->address);
  if (VAR_15 < 0) {
   FUNC_6(VAR_14, VAR_6);
   FUNC_3(&VAR_14->lock);
   return -VAR_1;
  }
  *VAR_11 = FUNC_4(VAR_15 >> VAR_4, 9);
  FUNC_6(VAR_14, VAR_6);
  FUNC_3(&VAR_14->lock);
  return VAR_2;
 case 128:
  *VAR_11 = 0;
  *VAR_12 = VAR_8[VAR_14->range].scale_val;
  return VAR_3;
 case 129:
  *VAR_11 = VAR_7
    [VAR_14->sample_rate_idx].samp_freq;
  *VAR_12 = 0;
  return VAR_2;
 }

 return -VAR_1;
}
