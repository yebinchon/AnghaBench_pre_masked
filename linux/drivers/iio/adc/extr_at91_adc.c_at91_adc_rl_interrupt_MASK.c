
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct iio_dev {int dummy; } ;
struct at91_adc_state {int ts_bufferedmeasure; int ts_prev_absx; int ts_prev_absy; scalar_t__ ts_input; TYPE_1__* registers; int ts_pendbc; int ts_sample_period_val; scalar_t__ num_channels; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int trigger_register; int status_register; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct at91_adc_state*,int) ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int FUNC_2 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (int ) ;
 int VAR_11 ;
 int FUNC_4 (scalar_t__,int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_5 (struct at91_adc_state*,int ) ;
 int FUNC_6 (struct at91_adc_state*,int ,int) ;
 int FUNC_7 (int,struct iio_dev*) ;
 struct at91_adc_state* FUNC_8 (struct iio_dev*) ;
 int FUNC_9 (scalar_t__,int ,int) ;
 int FUNC_10 (scalar_t__,int ,int) ;
 int FUNC_11 (scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_12(int VAR_14, void *VAR_15)
{
 struct iio_dev *VAR_16 = VAR_15;
 struct at91_adc_state *VAR_17 = FUNC_8(VAR_16);
 u32 VAR_18 = FUNC_5(VAR_17, VAR_17->registers->status_register);
 unsigned int VAR_19;

 VAR_18 &= FUNC_5(VAR_17, VAR_6);
 if (VAR_18 & FUNC_4(VAR_17->num_channels - 1, 0))
  FUNC_7(VAR_14, VAR_16);

 if (VAR_18 & VAR_3) {

  VAR_19 = FUNC_5(VAR_17, VAR_7);
  VAR_19 &= ~VAR_8;
  FUNC_6(VAR_17, VAR_7, VAR_19);

  FUNC_6(VAR_17, VAR_4, VAR_3);
  FUNC_6(VAR_17, VAR_5, VAR_2
    | FUNC_1(3));

  FUNC_6(VAR_17, VAR_17->registers->trigger_register,
   VAR_9 |
   FUNC_3(VAR_17->ts_sample_period_val));
 } else if (VAR_18 & VAR_2) {
  VAR_19 = FUNC_5(VAR_17, VAR_7);
  VAR_19 |= FUNC_2(VAR_17->ts_pendbc) & VAR_8;
  FUNC_6(VAR_17, VAR_7, VAR_19);
  FUNC_6(VAR_17, VAR_17->registers->trigger_register,
   VAR_10);

  FUNC_6(VAR_17, VAR_4, VAR_2
    | FUNC_1(3));
  FUNC_6(VAR_17, VAR_5, VAR_3);
  VAR_17->ts_bufferedmeasure = 0;
  FUNC_10(VAR_17->ts_input, VAR_11, 0);
  FUNC_11(VAR_17->ts_input);
 } else if (VAR_18 & FUNC_1(3) && VAR_17->ts_input) {

  if (VAR_17->ts_bufferedmeasure) {





   FUNC_9(VAR_17->ts_input, VAR_0, VAR_17->ts_prev_absx);
   FUNC_9(VAR_17->ts_input, VAR_1, VAR_17->ts_prev_absy);
   FUNC_10(VAR_17->ts_input, VAR_11, 1);
   FUNC_11(VAR_17->ts_input);
  } else
   VAR_17->ts_bufferedmeasure = 1;


  VAR_17->ts_prev_absx = FUNC_5(VAR_17, FUNC_0(VAR_17, 3))
       << VAR_13;
  VAR_17->ts_prev_absx /= FUNC_5(VAR_17, FUNC_0(VAR_17, 2));

  VAR_17->ts_prev_absy = FUNC_5(VAR_17, FUNC_0(VAR_17, 1))
       << VAR_13;
  VAR_17->ts_prev_absy /= FUNC_5(VAR_17, FUNC_0(VAR_17, 0));
 }

 return VAR_12;
}
