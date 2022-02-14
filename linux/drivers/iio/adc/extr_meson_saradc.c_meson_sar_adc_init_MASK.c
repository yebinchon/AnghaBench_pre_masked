
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct meson_sar_adc_priv {int temperature_sensor_coefficient; TYPE_1__* param; int adc_clk; int clkin; int adc_sel_clk; int regmap; int tsc_regmap; scalar_t__ temperature_sensor_calibrated; } ;
struct TYPE_4__ {int parent; } ;
struct iio_dev {TYPE_2__ dev; } ;
struct TYPE_3__ {int temperature_trimming_bits; int clock_rate; scalar_t__ has_bl30_integration; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,char*) ;
 struct meson_sar_adc_priv* FUNC_6 (struct iio_dev*) ;
 int FUNC_7 (struct iio_dev*,int ) ;
 int FUNC_8 (struct iio_dev*) ;
 int FUNC_9 (int ,int ,int*) ;
 int FUNC_10 (int ,int ,int,int) ;
 int FUNC_11 (int ,int ,int) ;

__attribute__((used)) static int FUNC_12(struct iio_dev *VAR_25)
{
 struct meson_sar_adc_priv *VAR_26 = FUNC_6(VAR_25);
 int VAR_27, VAR_28, VAR_29;





 FUNC_7(VAR_25, VAR_0);

 if (VAR_26->param->has_bl30_integration) {





  FUNC_9(VAR_26->regmap, VAR_21, &VAR_27);
  if (VAR_27 & VAR_22)
   return 0;
 }

 FUNC_8(VAR_25);





 FUNC_10(VAR_26->regmap, VAR_19,
   VAR_20, 0);


 FUNC_11(VAR_26->regmap, VAR_9, 0x0);

 FUNC_10(VAR_26->regmap, VAR_21,
      VAR_24, 0);
 FUNC_10(VAR_26->regmap, VAR_21,
      VAR_23,
      VAR_23);


 FUNC_10(VAR_26->regmap, VAR_10,
      VAR_11,
      FUNC_1(VAR_13,
          10));
 FUNC_10(VAR_26->regmap, VAR_10,
      VAR_14,
      FUNC_1(VAR_14,
          0));


 FUNC_10(VAR_26->regmap, VAR_10,
      VAR_11,
      FUNC_1(VAR_11,
          10));
 FUNC_10(VAR_26->regmap, VAR_10,
      VAR_12,
      FUNC_1(VAR_12,
          1));





 VAR_27 = FUNC_1(VAR_7, 0);
 FUNC_10(VAR_26->regmap, VAR_6,
      VAR_7,
      VAR_27);
 VAR_27 = FUNC_1(VAR_8, 1);
 FUNC_10(VAR_26->regmap, VAR_6,
      VAR_8,
      VAR_27);







 VAR_27 = 0;
 for (VAR_28 = 2; VAR_28 <= 7; VAR_28++)
  VAR_27 |= VAR_28 << FUNC_2(VAR_28);
 VAR_27 |= VAR_5;
 VAR_27 |= VAR_4;
 FUNC_11(VAR_26->regmap, VAR_3, VAR_27);

 if (VAR_26->temperature_sensor_calibrated) {
  FUNC_10(VAR_26->regmap, VAR_15,
       VAR_18,
       VAR_18);
  FUNC_10(VAR_26->regmap, VAR_15,
       VAR_17,
       VAR_17);





  VAR_27 = FUNC_1(VAR_16,
        VAR_26->temperature_sensor_coefficient);
  FUNC_10(VAR_26->regmap, VAR_15,
       VAR_16, VAR_27);

  if (VAR_26->param->temperature_trimming_bits == 5) {
   if (VAR_26->temperature_sensor_coefficient & FUNC_0(4))
    VAR_27 = VAR_2;
   else
    VAR_27 = 0;





   FUNC_10(VAR_26->tsc_regmap,
        VAR_1,
        VAR_2,
        VAR_27);
  }
 } else {
  FUNC_10(VAR_26->regmap, VAR_15,
       VAR_18, 0);
  FUNC_10(VAR_26->regmap, VAR_15,
       VAR_17, 0);
 }

 VAR_29 = FUNC_3(VAR_26->adc_sel_clk, VAR_26->clkin);
 if (VAR_29) {
  FUNC_5(VAR_25->dev.parent,
   "failed to set adc parent to clkin\n");
  return VAR_29;
 }

 VAR_29 = FUNC_4(VAR_26->adc_clk, VAR_26->param->clock_rate);
 if (VAR_29) {
  FUNC_5(VAR_25->dev.parent,
   "failed to set adc clock rate\n");
  return VAR_29;
 }

 return 0;
}
