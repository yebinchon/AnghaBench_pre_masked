
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_dummy_state {int dac_val; int* differential_adc_val; int single_ended_adc_val; int accel_val; int steps; int activity_running; int activity_walking; int accel_calibbias; int steps_enabled; int height; int lock; TYPE_1__* accel_calibscale; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int channel; int type; int differential; int channel2; int output; } ;
struct TYPE_2__ {int val; int val2; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 struct iio_dummy_state* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct iio_dev *VAR_4,
         struct iio_chan_spec const *VAR_5,
         int *VAR_6,
         int *VAR_7,
         long VAR_8)
{
 struct iio_dummy_state *VAR_9 = FUNC_0(VAR_4);
 int VAR_10 = -VAR_0;

 FUNC_1(&VAR_9->lock);
 switch (VAR_8) {
 case 134:
  switch (VAR_5->type) {
  case 128:
   if (VAR_5->output) {

    *VAR_6 = VAR_9->dac_val;
    VAR_10 = VAR_1;
   } else if (VAR_5->differential) {
    if (VAR_5->channel == 1)
     *VAR_6 = VAR_9->differential_adc_val[0];
    else
     *VAR_6 = VAR_9->differential_adc_val[1];
    VAR_10 = VAR_1;
   } else {
    *VAR_6 = VAR_9->single_ended_adc_val;
    VAR_10 = VAR_1;
   }
   break;
  case 142:
   *VAR_6 = VAR_9->accel_val;
   VAR_10 = VAR_1;
   break;
  default:
   break;
  }
  break;
 case 135:
  switch (VAR_5->type) {
  case 129:
   *VAR_6 = VAR_9->steps;
   VAR_10 = VAR_1;
   break;
  case 141:
   switch (VAR_5->channel2) {
   case 131:
    *VAR_6 = VAR_9->activity_running;
    VAR_10 = VAR_1;
    break;
   case 130:
    *VAR_6 = VAR_9->activity_walking;
    VAR_10 = VAR_1;
    break;
   default:
    break;
   }
   break;
  default:
   break;
  }
  break;
 case 136:

  *VAR_6 = 7;
  VAR_10 = VAR_1;
  break;
 case 132:
  switch (VAR_5->type) {
  case 128:
   switch (VAR_5->differential) {
   case 0:

    *VAR_6 = 0;
    *VAR_7 = 1333;
    VAR_10 = VAR_2;
    break;
   case 1:

    *VAR_6 = 0;
    *VAR_7 = 1344;
    VAR_10 = VAR_3;
   }
   break;
  default:
   break;
  }
  break;
 case 140:

  *VAR_6 = VAR_9->accel_calibbias;
  VAR_10 = VAR_1;
  break;
 case 138:
  *VAR_6 = VAR_9->accel_calibscale->val;
  *VAR_7 = VAR_9->accel_calibscale->val2;
  VAR_10 = VAR_2;
  break;
 case 133:
  *VAR_6 = 3;
  *VAR_7 = 33;
  VAR_10 = VAR_3;
  break;
 case 137:
  switch (VAR_5->type) {
  case 129:
   *VAR_6 = VAR_9->steps_enabled;
   VAR_10 = VAR_1;
   break;
  default:
   break;
  }
  break;
 case 139:
  switch (VAR_5->type) {
  case 129:
   *VAR_6 = VAR_9->height;
   VAR_10 = VAR_1;
   break;
  default:
   break;
  }
  break;

 default:
  break;
 }
 FUNC_2(&VAR_9->lock);
 return VAR_10;
}
