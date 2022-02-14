
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct meson_sar_adc_priv {int vref; int core_clk; int regmap; int adc_clk; } ;
struct iio_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 struct meson_sar_adc_priv* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (struct iio_dev*,int) ;
 int FUNC_4 (struct iio_dev*) ;
 int FUNC_5 (int ,int ,int ,int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct iio_dev *VAR_2)
{
 struct meson_sar_adc_priv *VAR_3 = FUNC_1(VAR_2);
 int VAR_4;

 VAR_4 = FUNC_2(VAR_2);
 if (VAR_4)
  return VAR_4;

 FUNC_0(VAR_3->adc_clk);

 FUNC_5(VAR_3->regmap, VAR_0,
      VAR_1, 0);

 FUNC_3(VAR_2, 0);

 FUNC_0(VAR_3->core_clk);

 FUNC_6(VAR_3->vref);

 FUNC_4(VAR_2);

 return 0;
}
