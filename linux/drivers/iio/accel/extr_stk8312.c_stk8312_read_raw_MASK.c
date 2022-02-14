
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stk8312_data {int mode; size_t sample_rate_idx; int range; int lock; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int address; } ;
struct TYPE_2__ {int val; int val2; } ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct iio_dev*) ;
 struct stk8312_data* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (struct stk8312_data*,int ) ;
 TYPE_1__* VAR_5 ;
 int** VAR_6 ;
 int FUNC_6 (struct stk8312_data*,int) ;

__attribute__((used)) static int FUNC_7(struct iio_dev *VAR_7,
       struct iio_chan_spec const *VAR_8,
       int *VAR_9, int *VAR_10, long VAR_11)
{
 struct stk8312_data *VAR_12 = FUNC_1(VAR_7);
 int VAR_13;

 switch (VAR_11) {
 case 130:
  if (FUNC_0(VAR_7))
   return -VAR_0;
  FUNC_2(&VAR_12->lock);
  VAR_13 = FUNC_6(VAR_12, VAR_12->mode | VAR_4);
  if (VAR_13 < 0) {
   FUNC_3(&VAR_12->lock);
   return VAR_13;
  }
  VAR_13 = FUNC_5(VAR_12, VAR_8->address);
  if (VAR_13 < 0) {
   FUNC_6(VAR_12,
      VAR_12->mode & (~VAR_4));
   FUNC_3(&VAR_12->lock);
   return VAR_13;
  }
  *VAR_9 = FUNC_4(VAR_13, 7);
  VAR_13 = FUNC_6(VAR_12,
           VAR_12->mode & (~VAR_4));
  FUNC_3(&VAR_12->lock);
  if (VAR_13 < 0)
   return VAR_13;
  return VAR_2;
 case 128:
  *VAR_9 = VAR_6[VAR_12->range - 1][0];
  *VAR_10 = VAR_6[VAR_12->range - 1][1];
  return VAR_3;
 case 129:
  *VAR_9 = VAR_5[VAR_12->sample_rate_idx].val;
  *VAR_10 = VAR_5[VAR_12->sample_rate_idx].val2;
  return VAR_3;
 }

 return -VAR_1;
}
