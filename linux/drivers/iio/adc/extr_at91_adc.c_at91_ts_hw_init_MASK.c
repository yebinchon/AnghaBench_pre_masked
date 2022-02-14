
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct iio_dev {int dev; } ;
struct at91_adc_state {int ts_pendbc; scalar_t__ touchscreen_type; void* ts_sample_period_val; TYPE_1__* caps; } ;
struct TYPE_2__ {int ts_pen_detect_sensitivity; int ts_filter_average; int has_tsmr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int) ;
 int VAR_11 ;
 int FUNC_3 (int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_16 ;
 int FUNC_5 (int,int) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (struct at91_adc_state*,int ) ;
 int FUNC_8 (struct at91_adc_state*,int ,int) ;
 int FUNC_9 (int *,char*,int,int) ;
 struct iio_dev* FUNC_10 (struct at91_adc_state*) ;
 void* FUNC_11 (int,int) ;

__attribute__((used)) static int FUNC_12(struct at91_adc_state *VAR_22, u32 VAR_23)
{
 struct iio_dev *VAR_24 = FUNC_10(VAR_22);
 u32 VAR_25 = 0;
 u32 VAR_26 = 0;
 int VAR_27 = 0;





 VAR_22->ts_pendbc = FUNC_11(VAR_17 * VAR_23 /
     1000, 1);

 while (VAR_22->ts_pendbc >> ++VAR_27)
  ;
 if (FUNC_6(VAR_22->ts_pendbc - (1 << VAR_27)) < FUNC_6(VAR_22->ts_pendbc - (1 << (VAR_27 - 1))))
  VAR_22->ts_pendbc = VAR_27;
 else
  VAR_22->ts_pendbc = VAR_27 - 1;

 if (!VAR_22->caps->has_tsmr) {
  VAR_25 = FUNC_7(VAR_22, VAR_2);
  VAR_25 |= VAR_5 | VAR_4;

  VAR_25 |= FUNC_0(VAR_22->ts_pendbc) & VAR_3;
  FUNC_8(VAR_22, VAR_2, VAR_25);

  VAR_25 = FUNC_4(VAR_21) & VAR_15;
  FUNC_8(VAR_22, VAR_14, VAR_25);

  VAR_22->ts_sample_period_val = FUNC_11((VAR_19 *
          VAR_23 / 1000) - 1, 1);

  return 0;
 }





 VAR_26 = FUNC_5(VAR_20 * VAR_23 / 1000, 4);
 FUNC_9(&VAR_24->dev, "adc_clk at: %d KHz, tssctim at: %d\n",
  VAR_23, VAR_26);

 if (VAR_22->touchscreen_type == VAR_16)
  VAR_25 = VAR_12;
 else
  VAR_25 = VAR_13;

 VAR_25 |= FUNC_2(VAR_26) & VAR_10;
 VAR_25 |= FUNC_3(VAR_22->caps->ts_filter_average)
        & VAR_11;
 VAR_25 |= FUNC_1(VAR_22->ts_pendbc) & VAR_8;
 VAR_25 |= VAR_7;
 VAR_25 |= VAR_9;
 VAR_25 |= 0x03 << 8;

 FUNC_8(VAR_22, VAR_6, VAR_25);






 FUNC_8(VAR_22, VAR_0, VAR_22->caps->ts_pen_detect_sensitivity
   & VAR_1);


 VAR_22->ts_sample_period_val = FUNC_11((VAR_18 *
   VAR_23 / 1000) - 1, 1);

 return 0;
}
