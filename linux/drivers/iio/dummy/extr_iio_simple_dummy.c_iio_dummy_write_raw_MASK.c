
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct iio_dummy_state {int dac_val; int steps; int activity_running; int activity_walking; int accel_calibbias; int steps_enabled; int height; int lock; TYPE_1__* accel_calibscale; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int type; int channel2; int output; } ;
struct TYPE_3__ {int val; int val2; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 struct iio_dummy_state* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_2,
          struct iio_chan_spec const *VAR_3,
          int VAR_4,
          int VAR_5,
          long VAR_6)
{
 int VAR_7;
 int VAR_8 = 0;
 struct iio_dummy_state *VAR_9 = FUNC_1(VAR_2);

 switch (VAR_6) {
 case 132:
  switch (VAR_3->type) {
  case 128:
   if (VAR_3->output == 0)
    return -VAR_0;


   FUNC_2(&VAR_9->lock);
   VAR_9->dac_val = VAR_4;
   FUNC_3(&VAR_9->lock);
   return 0;
  default:
   return -VAR_0;
  }
 case 133:
  switch (VAR_3->type) {
  case 129:
   FUNC_2(&VAR_9->lock);
   VAR_9->steps = VAR_4;
   FUNC_3(&VAR_9->lock);
   return 0;
  case 138:
   if (VAR_4 < 0)
    VAR_4 = 0;
   if (VAR_4 > 100)
    VAR_4 = 100;
   switch (VAR_3->channel2) {
   case 131:
    VAR_9->activity_running = VAR_4;
    return 0;
   case 130:
    VAR_9->activity_walking = VAR_4;
    return 0;
   default:
    return -VAR_0;
   }
   break;
  default:
   return -VAR_0;
  }
 case 135:
  FUNC_2(&VAR_9->lock);

  for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_1); VAR_7++)
   if (VAR_4 == VAR_1[VAR_7].val &&
       VAR_5 == VAR_1[VAR_7].val2)
    break;
  if (VAR_7 == FUNC_0(VAR_1))
   VAR_8 = -VAR_0;
  else
   VAR_9->accel_calibscale = &VAR_1[VAR_7];
  FUNC_3(&VAR_9->lock);
  return VAR_8;
 case 137:
  FUNC_2(&VAR_9->lock);
  VAR_9->accel_calibbias = VAR_4;
  FUNC_3(&VAR_9->lock);
  return 0;
 case 134:
  switch (VAR_3->type) {
  case 129:
   FUNC_2(&VAR_9->lock);
   VAR_9->steps_enabled = VAR_4;
   FUNC_3(&VAR_9->lock);
   return 0;
  default:
   return -VAR_0;
  }
 case 136:
  switch (VAR_3->type) {
  case 129:
   VAR_9->height = VAR_4;
   return 0;
  default:
   return -VAR_0;
  }

 default:
  return -VAR_0;
 }
}
