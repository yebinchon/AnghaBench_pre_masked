
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct meson_sar_adc_priv {int regmap; } ;
struct iio_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct meson_sar_adc_priv* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct iio_dev *VAR_4)
{
 struct meson_sar_adc_priv *VAR_5 = FUNC_0(VAR_4);

 FUNC_2(VAR_5->regmap, VAR_0,
      VAR_1, 0);

 FUNC_2(VAR_5->regmap, VAR_0,
      VAR_3,
      VAR_3);


 FUNC_1(VAR_4);

 FUNC_2(VAR_5->regmap, VAR_0,
      VAR_2, 0);
}
