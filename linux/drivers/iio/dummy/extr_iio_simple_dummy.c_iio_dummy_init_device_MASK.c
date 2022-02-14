
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dummy_state {int single_ended_adc_val; int* differential_adc_val; int accel_val; int accel_calibbias; int steps; int activity_running; int activity_walking; int * accel_calibscale; scalar_t__ dac_val; } ;
struct iio_dev {int dummy; } ;


 int * VAR_0 ;
 struct iio_dummy_state* FUNC_0 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_1(struct iio_dev *VAR_1)
{
 struct iio_dummy_state *VAR_2 = FUNC_0(VAR_1);

 VAR_2->dac_val = 0;
 VAR_2->single_ended_adc_val = 73;
 VAR_2->differential_adc_val[0] = 33;
 VAR_2->differential_adc_val[1] = -34;
 VAR_2->accel_val = 34;
 VAR_2->accel_calibbias = -7;
 VAR_2->accel_calibscale = &VAR_0[0];
 VAR_2->steps = 47;
 VAR_2->activity_running = 98;
 VAR_2->activity_walking = 4;

 return 0;
}
