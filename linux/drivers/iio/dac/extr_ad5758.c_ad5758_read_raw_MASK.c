
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;
struct TYPE_2__ {int min; int max; } ;
struct ad5758_state {TYPE_1__ out_range; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ad5758_state*,int ) ;
 struct ad5758_state* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_4,
      struct iio_chan_spec const *VAR_5,
      int *VAR_6, int *VAR_7, long VAR_8)
{
 struct ad5758_state *VAR_9 = FUNC_1(VAR_4);
 int VAR_10, VAR_11, VAR_12;

 switch (VAR_8) {
 case 129:
  FUNC_2(&VAR_9->lock);
  VAR_12 = FUNC_0(VAR_9, VAR_0);
  FUNC_3(&VAR_9->lock);
  if (VAR_12 < 0)
   return VAR_12;

  *VAR_6 = VAR_12;
  return VAR_3;
 case 128:
  VAR_11 = VAR_9->out_range.min;
  VAR_10 = VAR_9->out_range.max;
  *VAR_6 = (VAR_10 - VAR_11) / 1000;
  *VAR_7 = 16;
  return VAR_2;
 case 130:
  VAR_11 = VAR_9->out_range.min;
  VAR_10 = VAR_9->out_range.max;
  *VAR_6 = ((VAR_11 * (1 << 16)) / (VAR_10 - VAR_11)) / 1000;
  return VAR_3;
 default:
  return -VAR_1;
 }
}
