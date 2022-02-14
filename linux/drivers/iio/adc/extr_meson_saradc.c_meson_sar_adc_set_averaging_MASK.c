
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct meson_sar_adc_priv {int regmap; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int address; } ;
typedef enum meson_sar_adc_num_samples { ____Placeholder_meson_sar_adc_num_samples } meson_sar_adc_num_samples ;
typedef enum meson_sar_adc_avg_mode { ____Placeholder_meson_sar_adc_avg_mode } meson_sar_adc_avg_mode ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 struct meson_sar_adc_priv* FUNC_4 (struct iio_dev*) ;
 int FUNC_5 (int ,int ,int ,int) ;

__attribute__((used)) static void FUNC_6(struct iio_dev *VAR_1,
     const struct iio_chan_spec *VAR_2,
     enum meson_sar_adc_avg_mode VAR_3,
     enum meson_sar_adc_num_samples VAR_4)
{
 struct meson_sar_adc_priv *VAR_5 = FUNC_4(VAR_1);
 int VAR_6, VAR_7 = VAR_2->address;

 VAR_6 = VAR_4 << FUNC_3(VAR_7);
 FUNC_5(VAR_5->regmap, VAR_0,
      FUNC_2(VAR_7),
      VAR_6);

 VAR_6 = VAR_3 << FUNC_1(VAR_7);
 FUNC_5(VAR_5->regmap, VAR_0,
      FUNC_0(VAR_7), VAR_6);
}
