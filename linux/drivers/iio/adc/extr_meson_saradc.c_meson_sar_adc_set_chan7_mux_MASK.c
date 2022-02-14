
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct meson_sar_adc_priv {int regmap; } ;
struct iio_dev {int dummy; } ;
typedef enum meson_sar_adc_chan7_mux_sel { ____Placeholder_meson_sar_adc_chan7_mux_sel } meson_sar_adc_chan7_mux_sel ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct meson_sar_adc_priv* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static void FUNC_4(struct iio_dev *VAR_2,
     enum meson_sar_adc_chan7_mux_sel VAR_3)
{
 struct meson_sar_adc_priv *VAR_4 = FUNC_1(VAR_2);
 u32 VAR_5;

 VAR_5 = FUNC_0(VAR_1, VAR_3);
 FUNC_2(VAR_4->regmap, VAR_0,
      VAR_1, VAR_5);

 FUNC_3(10, 20);
}
