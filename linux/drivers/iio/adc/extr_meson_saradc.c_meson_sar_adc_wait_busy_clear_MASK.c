
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct meson_sar_adc_priv {int regmap; } ;
struct iio_dev {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 struct meson_sar_adc_priv* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (int ,int ,int*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_3)
{
 struct meson_sar_adc_priv *VAR_4 = FUNC_1(VAR_3);
 int VAR_5, VAR_6 = 10000;






 do {
  FUNC_3(1);
  FUNC_2(VAR_4->regmap, VAR_1, &VAR_5);
 } while (FUNC_0(VAR_2, VAR_5) && VAR_6--);

 if (VAR_6 < 0)
  return -VAR_0;

 return 0;
}
