
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u32 ;
struct iio_dev {int dummy; } ;
struct at91_adc_state {int ts_input; TYPE_1__* registers; int ts_sample_period_val; scalar_t__ num_channels; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int trigger_register; int status_register; } ;


 int VAR_0 ;
 int VAR_1 ;
 int const VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (scalar_t__,int ) ;
 int VAR_13 ;
 int FUNC_2 (struct at91_adc_state*,int ) ;
 int FUNC_3 (struct at91_adc_state*,int ,int const) ;
 int FUNC_4 (struct at91_adc_state*) ;
 int FUNC_5 (int,struct iio_dev*) ;
 struct at91_adc_state* FUNC_6 (struct iio_dev*) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static irqreturn_t FUNC_9(int VAR_14, void *VAR_15)
{
 struct iio_dev *VAR_16 = VAR_15;
 struct at91_adc_state *VAR_17 = FUNC_6(VAR_16);
 u32 VAR_18 = FUNC_2(VAR_17, VAR_17->registers->status_register);
 const uint32_t VAR_19 =
  VAR_5 |
  VAR_6 |
  VAR_4;

 if (VAR_18 & FUNC_1(VAR_17->num_channels - 1, 0))
  FUNC_5(VAR_14, VAR_16);

 if (VAR_18 & VAR_3) {
  FUNC_3(VAR_17, VAR_0, VAR_3);
  FUNC_3(VAR_17, VAR_1, VAR_2 |
   VAR_19);

  FUNC_3(VAR_17, VAR_17->registers->trigger_register,
   VAR_8 |
   FUNC_0(VAR_17->ts_sample_period_val));
 } else if (VAR_18 & VAR_2) {
  FUNC_3(VAR_17, VAR_17->registers->trigger_register, 0);
  FUNC_3(VAR_17, VAR_0, VAR_2 |
   VAR_19);
  FUNC_3(VAR_17, VAR_1, VAR_3);

  FUNC_7(VAR_17->ts_input, VAR_12, 0);
  FUNC_8(VAR_17->ts_input);
 } else if ((VAR_18 & VAR_19) == VAR_19) {


  if (VAR_18 & VAR_7) {

   FUNC_4(VAR_17);
  } else {



   FUNC_2(VAR_17, VAR_10);
   FUNC_2(VAR_17, VAR_11);
   FUNC_2(VAR_17, VAR_9);
  }
 }

 return VAR_13;
}
