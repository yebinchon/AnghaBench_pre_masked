
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct spear_adc_state {int vref_external; int value; int current_clk; int completion; int avg_samples; } ;
struct iio_dev {int mlock; } ;
struct iio_chan_spec {int channel; } ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 struct spear_adc_state* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct spear_adc_state*,int) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct iio_dev *VAR_7,
         struct iio_chan_spec const *VAR_8,
         int *VAR_9,
         int *VAR_10,
         long VAR_11)
{
 struct spear_adc_state *VAR_12 = FUNC_2(VAR_7);
 u32 VAR_13;

 switch (VAR_11) {
 case 130:
  FUNC_3(&VAR_7->mlock);

  VAR_13 = FUNC_1(VAR_8->channel) |
   FUNC_0(VAR_12->avg_samples) |
   VAR_5 |
   VAR_4;
  if (VAR_12->vref_external == 0)
   VAR_13 |= VAR_6;

  FUNC_5(VAR_12, VAR_13);
  FUNC_6(&VAR_12->completion);
  *VAR_9 = VAR_12->value;

  FUNC_4(&VAR_7->mlock);

  return VAR_2;

 case 128:
  *VAR_9 = VAR_12->vref_external;
  *VAR_10 = VAR_3;
  return VAR_1;
 case 129:
  *VAR_9 = VAR_12->current_clk;
  return VAR_2;
 }

 return -VAR_0;
}
