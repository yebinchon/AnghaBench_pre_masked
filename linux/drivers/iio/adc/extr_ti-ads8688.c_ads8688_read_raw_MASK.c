
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_dev {int dummy; } ;
struct iio_chan_spec {size_t channel; } ;
struct ads8688_state {unsigned long vref_mv; size_t* range; int lock; } ;
struct TYPE_2__ {unsigned long scale; int offset; } ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_0 (struct iio_dev*,size_t) ;
 struct ads8688_state* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_4,
       struct iio_chan_spec const *VAR_5,
       int *VAR_6, int *VAR_7, long VAR_8)
{
 int VAR_9, VAR_10;
 unsigned long VAR_11;

 struct ads8688_state *VAR_12 = FUNC_1(VAR_4);

 FUNC_2(&VAR_12->lock);
 switch (VAR_8) {
 case 129:
  VAR_9 = FUNC_0(VAR_4, VAR_5->channel);
  FUNC_3(&VAR_12->lock);
  if (VAR_9 < 0)
   return VAR_9;
  *VAR_6 = VAR_9;
  return VAR_1;
 case 128:
  VAR_11 = VAR_12->vref_mv;
  VAR_11 *= VAR_3[VAR_12->range[VAR_5->channel]].scale;
  *VAR_6 = 0;
  *VAR_7 = VAR_11;
  FUNC_3(&VAR_12->lock);
  return VAR_2;
 case 130:
  VAR_10 = VAR_3[VAR_12->range[VAR_5->channel]].offset;
  *VAR_6 = VAR_10;
  FUNC_3(&VAR_12->lock);
  return VAR_1;
 }
 FUNC_3(&VAR_12->lock);

 return -VAR_0;
}
