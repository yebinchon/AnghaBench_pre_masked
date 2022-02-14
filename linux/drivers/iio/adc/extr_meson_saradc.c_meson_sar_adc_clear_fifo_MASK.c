
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct meson_sar_adc_priv {int regmap; } ;
struct iio_dev {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 struct meson_sar_adc_priv* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (int ,int ,unsigned int*) ;

__attribute__((used)) static void FUNC_3(struct iio_dev *VAR_2)
{
 struct meson_sar_adc_priv *VAR_3 = FUNC_0(VAR_2);
 unsigned int VAR_4, VAR_5;

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  if (!FUNC_1(VAR_2))
   break;

  FUNC_2(VAR_3->regmap, VAR_0, &VAR_5);
 }
}
